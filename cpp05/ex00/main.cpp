/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:00:57 by jhii              #+#    #+#             */
/*   Updated: 2022/08/08 17:56:51 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	testNormal(void)
{
	try {
		Bureaucrat	kevin("kevin", 5);
		Bureaucrat	karen("karen", 145);

		std::cout << kevin << std::endl;
		std::cout << karen << std::endl;

		kevin.incrementGrade();
		karen.decrementGrade();

		std::cout << kevin << std::endl;
		std::cout << karen << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	testLowInit(void)
{
	try {
		Bureaucrat	kevin("kevin", 0);
		std::cout << kevin << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	testHighInit(void)
{
	try {
		Bureaucrat	karen("karen", 151);
		std::cout << karen << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	testIncrement(void)
{
	try {
		Bureaucrat	kevin("kevin", 1);
		std::cout << kevin << std::endl;

		kevin.incrementGrade();
		std::cout << kevin << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	testDecrement(void)
{
	try {
		Bureaucrat	karen("karen", 150);
		std::cout << karen << std::endl;

		karen.decrementGrade();
		std::cout << karen << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	testError(void)
{
	Bureaucrat kevin("kevin", -1);
	Bureaucrat karen("karen", 151);
}

int	main(void)
{
	testNormal();
	std::cout << std::endl;
	testLowInit();
	testHighInit();
	std::cout << std::endl;
	testIncrement();
	testDecrement();
	std::cout << std::endl;
	testError();
	return (0);
}
