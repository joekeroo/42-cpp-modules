/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 16:39:59 by jhii              #+#    #+#             */
/*   Updated: 2022/09/27 17:26:11 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

std::string	AForm::getName(void) const { return (this->_name); }
bool	AForm::getSigned(void) const { return (this->_signed); }
int	AForm::getSignGrade(void) const { return (this->_signGrade); }
int	AForm::getExecGrade(void) const { return (this->_execGrade); }
AForm::AForm(AForm const &ref): _name(ref._name), _signed(ref._signed), _signGrade(ref._signGrade), _execGrade(ref._execGrade) {}

AForm::AForm(std::string const &name, int const sign_grade, int const exec_grade): _name(name), _signGrade(sign_grade), _execGrade(exec_grade)
{
	if (this->_signGrade < 1)
		throw(GradeTooHighException());
	if (this->_signGrade > 150)
		throw(GradeTooLowException());
	if (this->_execGrade < 1)
		throw(GradeTooHighException());
	if (this->_execGrade > 150)
		throw(GradeTooLowException());
	this->_signed = false;
	std::cout << GREEN << "Form " << RESET;
	std::cout << GREEN << this->_name << RESET;
	std::cout << GREEN << " constructed" << RESET << std::endl;
}

AForm::~AForm(void)
{
	std::cout << RED << "Form " << RESET;
	std::cout << RED << this->_name << RESET;
	std::cout << RED << " destructed" << RESET << std::endl;
}

AForm	&AForm::operator=(AForm const &ref)
{
	if (this != &ref)
		*this = ref;
	return (*this);
}

const char	*AForm::GradeTooHighException::what(void) const throw()
{
	return (YELLOW "Error: Form: Grade higher than 1" RESET);
}

const char	*AForm::GradeTooLowException::what(void) const throw()
{
	return (YELLOW "Error: Form: Grade lower than 150" RESET);
}

const char	*AForm::SignGradeTooLowException::what(void) const throw()
{
	return (YELLOW "Error: Form: Sign grade does not meet the minimum requirement" RESET);
}

std::ostream	&operator<<(std::ostream &output, const AForm &ref)
{
	output << CYAN << "Form Name : " << RESET;
	output << CYAN << ref.getName() << std::endl << RESET;
	output << CYAN << "Signed Status : " << RESET;
	if (ref.getSigned())
		output << CYAN << "true" << std::endl << RESET;
	else
		output << CYAN << "false" << std::endl << RESET;
	output << CYAN << "Signing Grade Requirement : " << RESET;
	output << CYAN << ref.getSignGrade() << std::endl << RESET;
	output << CYAN << "Executing Grade Requirement : " << RESET;
	output << CYAN << ref.getExecGrade() << std::endl << RESET;
	return (output);
}

void	AForm::setSigned(bool sign)
{
	this->_signed = sign;
}

void	AForm::beSigned(Bureaucrat &b)
{
	if (b.getGrade() > this->getSignGrade())
		throw(SignGradeTooLowException());
	this->setSigned(true);
	std::cout << BLUE << "Form " << RESET;
	std::cout << MAGENTA << this->_name << RESET;
	std::cout << BLUE << " has been signed by " << RESET;
	std::cout << MAGENTA << b.getName() << RESET << std::endl;
}
