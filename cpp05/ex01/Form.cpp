/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 16:39:59 by jhii              #+#    #+#             */
/*   Updated: 2022/09/26 11:43:40 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

std::string	Form::getName(void) const { return (this->_name); }
bool	Form::getSigned(void) const { return (this->_signed); }
int	Form::getSignGrade(void) const { return (this->_signGrade); }
int	Form::getExecGrade(void) const { return (this->_execGrade); }
Form::Form(Form const &ref): _name(ref._name), _signed(ref._signed), _signGrade(ref._signGrade), _execGrade(ref._execGrade) {}

Form::Form(std::string const &name, int const sign_grade, int const exec_grade): _name(name), _signGrade(sign_grade), _execGrade(exec_grade)
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

Form::~Form(void)
{
	std::cout << RED << "Form " << RESET;
	std::cout << RED << this->_name << RESET;
	std::cout << RED << " destructed" << RESET << std::endl;
}

Form	&Form::operator=(Form const &ref)
{
	if (this != &ref)
		*this = ref;
	return (*this);
}

const char	*Form::GradeTooHighException::what(void) const throw()
{
	return (YELLOW "Error: Form: Grade higher than 1" RESET);
}

const char	*Form::GradeTooLowException::what(void) const throw()
{
	return (YELLOW "Error: Form: Grade lower than 150" RESET);
}

std::ostream	&operator<<(std::ostream &output, const Form &ref)
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

void	Form::setSigned(bool sign)
{
	this->_signed = sign;
}

void	Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() > this->getSignGrade())
		throw(GradeTooLowException());
	this->setSigned(true);
	std::cout << BLUE << "Form " << RESET;
	std::cout << MAGENTA << this->_name << RESET;
	std::cout << BLUE << " has been signed by " << RESET;
	std::cout << MAGENTA << b.getName() << RESET << std::endl;
}
