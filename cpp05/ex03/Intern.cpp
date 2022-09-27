/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:56:18 by jhii              #+#    #+#             */
/*   Updated: 2022/09/27 17:35:51 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(Intern const &ref) { (void)ref; }
Intern::Intern(void) { std::cout << GREEN << "Intern constructed" << RESET << std::endl; }
Intern::~Intern(void) { std::cout << RED << "Intern destructed" << RESET << std::endl; }

Intern	&Intern::operator=(Intern const &ref)
{
	if (this != &ref)
		*this = ref;
	return (*this);
}

const char	*Intern::InvalidFormNameException::what(void) const throw()
{
	return (YELLOW "Error: Form: No such form in database" RESET);
}

AForm	*Intern::makeShrubberyForm(std::string target)
{
	AForm	*temp;

	temp = new ShrubberyCreationForm(target);
	std::cout << BLUE << "Intern creates " << RESET;
	std::cout << MAGENTA << target << RESET;
	std::cout << BLUE << " Form" << RESET << std::endl;
	return (temp);
}

AForm	*Intern::makeRobotomyForm(std::string target)
{
	AForm	*temp;

	temp = new RobotomyRequestForm(target);
	std::cout << BLUE << "Intern creates " << RESET;
	std::cout << MAGENTA << target << RESET;
	std::cout << BLUE << " Form" << RESET << std::endl;
	return (temp);
}

AForm	*Intern::makePresidentialForm(std::string target)
{
	AForm	*temp;

	temp = new PresidentialPardonForm(target);
	std::cout << BLUE << "Intern creates " << RESET;
	std::cout << MAGENTA << target << RESET;
	std::cout << BLUE << " Form" << RESET << std::endl;
	return (temp);
}

AForm	*Intern::makeForm(std::string name, std::string target)
{
	typedef AForm	*(Intern::*FormTypes)(std::string);

	std::string	formTypes[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    FormTypes	types[3] = {&Intern::makeShrubberyForm, &Intern::makeRobotomyForm, &Intern::makePresidentialForm};
    for (int i = 0; i < 3; ++i)
	{
        if (name == formTypes[i])
            return ((this->*(types[i]))(target));
	}
	throw(InvalidFormNameException());
	return (NULL);
}
