/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:54:32 by jhii              #+#    #+#             */
/*   Updated: 2022/09/27 11:16:51 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &ref): Form(ref.getName(), ref.getSignGrade(), ref.getExecGrade()) {}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target): Form(target, 72, 45)
{
	this->_target = target;
	std::cout << GREEN << "RobotomyRequestForm " << RESET;
	std::cout << GREEN << target << RESET;
	std::cout << GREEN << " constructed" << RESET << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << RED << "RobotomyRequestForm " << RESET;
	std::cout << RED << this->getName() << RESET;
	std::cout << RED << " destructed" << RESET << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &ref)
{
	if (this != &ref)
		*this = ref;
	return (*this);
}

const char	*RobotomyRequestForm::FormNotSignedException::what(void) const throw()
{
	return (YELLOW "Error: Form: has not been signed" RESET);
}

const char	*RobotomyRequestForm::ExecGradeTooLowException::what(void) const throw()
{
	return (YELLOW "Error: Bureaucrat: Grade too low to execute Form" RESET);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	bool	check = false;

	srand(time(0));
	if (rand() % 2)
		check = true;
	if (!this->getSigned())
		throw(FormNotSignedException());
	else
	{
		if (executor.getGrade() > this->getExecGrade())
			throw(ExecGradeTooLowException());
		std::cout << CYAN << "drrr.... drrrrr..." << RESET;
		if (check)
		{
			std::cout << CYAN << " bling bling" << RESET << std::endl;
			std::cout << MAGENTA << this->_target << RESET;
			std::cout << CYAN << "'s robotomization was a Success" << RESET << std::endl;
		}
		else
		{
			std::cout << CYAN << " KABOOOM" << RESET << std::endl;
			std::cout << MAGENTA << this->_target << RESET;
			std::cout << CYAN << "'s robotomization was a Failure" << RESET << std::endl;
		}
	}
}
