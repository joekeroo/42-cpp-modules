/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:00:57 by jhii              #+#    #+#             */
/*   Updated: 2022/09/26 12:34:11 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void	testNormal(void)
{
	try {
		Bureaucrat	kevin("kevin", 50);
		Bureaucrat	karen("karen", 100);
		std::cout << std::endl << kevin << std::endl;
		std::cout << karen << std::endl;

		Form		one("one", 75, 75);
		Form		two("two", 125, 125);
		std::cout << std::endl << one;
		std::cout << std::endl << two << std::endl;

		one.beSigned(kevin);
		std::cout << std::endl << one << std::endl;
		karen.signForm(two);
		std::cout << std::endl << two << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	testFormLowInit(void)
{
	try {
		Form	one("one", 0, 0);
		std::cout << one << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	testFormHighInit(void)
{
	try {
		Form	two("two", 151, 151);
		std::cout << two << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	testFormSign(void)
{
	try {
		Bureaucrat	kevin("kevin", 50);
		std::cout << std::endl << kevin << std::endl;

		Form		one("one", 75, 75);
		Form		two("two", 25, 25);
		std::cout << std::endl << one;
		std::cout << std::endl << two << std::endl;

		one.beSigned(kevin);
		std::cout << std::endl << one << std::endl;
		two.beSigned(kevin);
		std::cout << std::endl << two << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	testBureaucratSign(void)
{
	try {
		Bureaucrat	karen("karen", 50);
		std::cout << std::endl << karen << std::endl;

		Form		one("one", 75, 75);
		Form		two("two", 25, 25);
		std::cout << std::endl << one;
		std::cout << std::endl << two << std::endl;

		karen.signForm(one);
		std::cout << std::endl << one << std::endl;
		karen.signForm(two);
		std::cout << std::endl << two << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	testError(void)
{
	Bureaucrat	kevin("kevin", 5);
	Form		one("one", 1, 1);

	one.beSigned(kevin);
}

int	main(void)
{
	testNormal();

	testFormLowInit();
	testFormHighInit();

	testFormSign();
	testBureaucratSign();

	testError();
	return (0);
}
