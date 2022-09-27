/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:00:57 by jhii              #+#    #+#             */
/*   Updated: 2022/09/27 11:36:58 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void	testBureaucrat(void)
{
	try {
		Bureaucrat	putin("putin", 1);
		Bureaucrat	nixon("nixon", 5);
		Bureaucrat	obama("obama", 25);
		Bureaucrat	trump("trump", 125);
		std::cout << std::endl;
		std::cout << putin;
		std::cout << nixon;
		std::cout << obama;
		std::cout << trump;
		std::cout << std::endl;

		ShrubberyCreationForm	shrub("shrub");
		RobotomyRequestForm		robot("robot");
		PresidentialPardonForm	prezz("prezz");
		std::cout << std::endl;
		std::cout << shrub << std::endl;
		std::cout << robot << std::endl;
		std::cout << prezz << std::endl;

		trump.executeForm(shrub);
		trump.executeForm(robot);
		trump.executeForm(prezz);
		std::cout << std::endl;

		trump.signForm(shrub);
		trump.signForm(robot);
		trump.signForm(prezz);
		std::cout << std::endl;

		std::cout << shrub << std::endl;
		std::cout << robot << std::endl;
		std::cout << prezz << std::endl;

		putin.signForm(shrub);
		putin.signForm(robot);
		putin.signForm(prezz);
		std::cout << std::endl;

		std::cout << shrub << std::endl;
		std::cout << robot << std::endl;
		std::cout << prezz << std::endl;

		trump.executeForm(shrub);
		trump.executeForm(robot);
		trump.executeForm(prezz);
		std::cout << std::endl;

		std::cout << trump << std::endl;
		std::cout << shrub << std::endl;
		std::cout << robot << std::endl;
		std::cout << prezz << std::endl;

		obama.executeForm(shrub);
		obama.executeForm(robot);
		obama.executeForm(prezz);

		std::cout << std::endl;
		std::cout << obama << std::endl;
		std::cout << shrub << std::endl;
		std::cout << robot << std::endl;
		std::cout << prezz << std::endl;

		nixon.executeForm(shrub);
		nixon.executeForm(robot);
		nixon.executeForm(prezz);

		std::cout << std::endl;
		std::cout << nixon << std::endl;
		std::cout << shrub << std::endl;
		std::cout << robot << std::endl;
		std::cout << prezz << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	testForm(void)
{
	try {
		Bureaucrat	putin("putin", 1);
		Bureaucrat	nixon("nixon", 5);
		Bureaucrat	obama("obama", 25);
		Bureaucrat	trump("trump", 125);
		std::cout << std::endl;
		std::cout << putin;
		std::cout << nixon;
		std::cout << obama;
		std::cout << trump;
		std::cout << std::endl;

		ShrubberyCreationForm	shrub("shrub");
		RobotomyRequestForm		robot("robot");
		PresidentialPardonForm	prezz("prezz");
		std::cout << std::endl;
		std::cout << shrub << std::endl;
		std::cout << robot << std::endl;
		std::cout << prezz << std::endl;

		shrub.execute(trump);
		robot.execute(trump);
		prezz.execute(trump);
		// trump.executeForm(shrub);
		// trump.executeForm(robot);
		// trump.executeForm(prezz);
		std::cout << std::endl;

		shrub.beSigned(trump);
		robot.beSigned(trump);
		prezz.beSigned(trump);
		// trump.signForm(shrub);
		// trump.signForm(robot);
		// trump.signForm(prezz);
		std::cout << std::endl;

		std::cout << shrub << std::endl;
		std::cout << robot << std::endl;
		std::cout << prezz << std::endl;

		shrub.beSigned(putin);
		robot.beSigned(putin);
		prezz.beSigned(putin);
		std::cout << std::endl;

		std::cout << shrub << std::endl;
		std::cout << robot << std::endl;
		std::cout << prezz << std::endl;

		shrub.execute(trump);
		robot.execute(trump);
		prezz.execute(trump);
		// trump.executeForm(shrub);
		// trump.executeForm(robot);
		// trump.executeForm(prezz);
		std::cout << std::endl;

		std::cout << trump << std::endl;
		std::cout << shrub << std::endl;
		std::cout << robot << std::endl;
		std::cout << prezz << std::endl;

		shrub.execute(obama);
		robot.execute(obama);
		prezz.execute(obama);
		// obama.executeForm(shrub);
		// obama.executeForm(robot);
		// obama.executeForm(prezz);
		std::cout << std::endl;

		std::cout << obama << std::endl;
		std::cout << shrub << std::endl;
		std::cout << robot << std::endl;
		std::cout << prezz << std::endl;

		shrub.execute(nixon);
		robot.execute(nixon);
		prezz.execute(nixon);
		// nixon.executeForm(shrub);
		// nixon.executeForm(robot);
		// nixon.executeForm(prezz);
		std::cout << std::endl;

		std::cout << nixon << std::endl;
		std::cout << shrub << std::endl;
		std::cout << robot << std::endl;
		std::cout << prezz << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int	main(void)
{
	testBureaucrat();
	// testForm();

	return (0);
}
