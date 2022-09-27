/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:00:55 by jhii              #+#    #+#             */
/*   Updated: 2022/09/27 17:28:08 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	Bureaucrat::getGrade(void) const { return (this->_grade); }
std::string	Bureaucrat::getName(void) const { return (this->_name); }
Bureaucrat::Bureaucrat(Bureaucrat const &ref): _name(ref._name), _grade(ref._grade) {}

Bureaucrat::Bureaucrat(std::string const &name, int const grade): _name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw(GradeTooHighException());
	if (this->_grade > 150)
		throw(GradeTooLowException());
	std::cout << GREEN << "Bureaucrat " << RESET;
	std::cout << GREEN << this->_name << RESET;
	std::cout << GREEN << " constructed" << RESET << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << RED << "Bureaucrat " << RESET;
	std::cout << RED << this->_name << RESET;
	std::cout << RED << " destructed" << RESET << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &ref)
{
	if (this != &ref)
		*this = ref;
	return (*this);
}

void	Bureaucrat::incrementGrade(void)
{
	if (--this->_grade < 1)
		throw(GradeTooHighException());
	std::cout << CYAN << "Bureaucrat " << RESET;
	std::cout << CYAN << this->_name << RESET;
	std::cout << CYAN << " incremented 1 grade" << RESET << std::endl;
}

void	Bureaucrat::decrementGrade(void)
{
	if (++this->_grade > 150)
		throw(GradeTooLowException());
	std::cout << CYAN << "Bureaucrat " << RESET;
	std::cout << CYAN << this->_name << RESET;
	std::cout << CYAN << " decremented 1 grade" << RESET << std::endl;
}

const char	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return (YELLOW "Error: Bureaucrat: Grade higher than 1" RESET);
}

const char	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return (YELLOW "Error: Bureaucrat: Grade lower than 150" RESET);
}

std::ostream	&operator<<(std::ostream &output, const Bureaucrat &ref)
{
	output << CYAN << ref.getName() << RESET;
	output << CYAN << ", bureaucrat grade " << RESET;
	output << CYAN << ref.getGrade() << RESET;
	std::cout << std::endl;
	return (output);
}

void	Bureaucrat::signForm(AForm &form)
{
	if (form.getSigned())
	{
		std::cout << BLUE << "Bureaucrat " << RESET;
		std::cout << MAGENTA << this->_name << RESET;
		std::cout << BLUE << " couldn't sign Form " << RESET;
		std::cout << MAGENTA << form.getName() << RESET;
		std::cout << BLUE << " because it has already been signed" << RESET;
		std::cout << std::endl;
	}
	else
	{
		if (this->getGrade() > form.getSignGrade())
		{
			std::cout << BLUE << "Bureaucrat " << RESET;
			std::cout << MAGENTA << this->_name << RESET;
			std::cout << BLUE << " couldn't sign Form " << RESET;
			std::cout << MAGENTA << form.getName() << RESET;
			std::cout << BLUE << " because grade requirement has not been met" << RESET;
			std::cout << std::endl;
		}
		else
		{
			form.setSigned(true);
			std::cout << BLUE << "Bureaucrat " << RESET;
			std::cout << MAGENTA << this->_name << RESET;
			std::cout << BLUE << " signed Form " << RESET;
			std::cout << MAGENTA << form.getName() << RESET;
			std::cout << std::endl;
		}
	}
}

void	Bureaucrat::executeForm(AForm const &form)
{
	if (!form.getSigned())
	{
		std::cout << BLUE << "Bureaucrat " << RESET;
		std::cout << MAGENTA << this->getName() << RESET;
		std::cout << BLUE << " unable to execute Form " << RESET;
		std::cout << MAGENTA << form.getName() << RESET;
		std::cout << BLUE << " because it has not been signed" << RESET;
		std::cout << std::endl;
	}
	else
	{
		if (this->getGrade() > form.getExecGrade())
		{
			std::cout << BLUE << "Bureaucrat " << RESET;
			std::cout << MAGENTA << this->_name << RESET;
			std::cout << BLUE << " couldn't execute Form " << RESET;
			std::cout << MAGENTA << form.getName() << RESET;
			std::cout << BLUE << " because exec grade requirement has not been met" << RESET;
			std::cout << std::endl;
		}
		else
		{
			form.execute(*this);
			std::cout << BLUE << "Bureaucrat " << RESET;
			std::cout << MAGENTA << this->_name << RESET;
			std::cout << BLUE << " executed Form " << RESET;
			std::cout << MAGENTA << form.getName() << RESET;
			std::cout << BLUE << " successfully" << RESET;
			std::cout << std::endl;
		}
	}
}
