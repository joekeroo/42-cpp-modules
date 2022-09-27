/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:54:35 by jhii              #+#    #+#             */
/*   Updated: 2022/09/27 10:58:55 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &ref): Form(ref.getName(), ref.getSignGrade(), ref.getExecGrade()) {}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target): Form(target, 25, 5)
{
	this->_target = target;
	std::cout << GREEN << "PresidentialPardonForm " << RESET;
	std::cout << GREEN << target << RESET;
	std::cout << GREEN << " constructed" << RESET << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << RED << "PresidentialPardonForm " << RESET;
	std::cout << RED << this->getName() << RESET;
	std::cout << RED << " destructed" << RESET << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &ref)
{
	if (this != &ref)
		*this = ref;
	return (*this);
}

const char	*PresidentialPardonForm::FormNotSignedException::what(void) const throw()
{
	return (YELLOW "Error: Form: has not been signed" RESET);
}

const char	*PresidentialPardonForm::ExecGradeTooLowException::what(void) const throw()
{
	return (YELLOW "Error: Bureaucrat: Grade too low to execute Form" RESET);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSigned())
		throw(FormNotSignedException());
	else
	{
		if (executor.getGrade() > this->getExecGrade())
			throw(ExecGradeTooLowException());
		std::cout << CYAN << this->_target << RESET;
		std::cout << CYAN << " has been pardoned by" << RESET;
		std::cout << CYAN << " Zaphod Beeblebrox" << RESET << std::endl;
	}
}
