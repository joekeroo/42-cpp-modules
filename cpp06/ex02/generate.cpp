/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:02:55 by jhii              #+#    #+#             */
/*   Updated: 2022/10/19 15:08:42 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base	*generate(void)
{
	int		num;
	Base	*base;

	base = NULL;
	num = rand() % 3;

	if (num == 0)
	{
		base = new A();
		std::cout << CYAN << "generate(): A has been generated" << RESET << std::endl;
	}
	else if (num == 1)
	{
		base = new B();
		std::cout << CYAN << "generate(): B has been generated" << RESET << std::endl;
	}
	else if (num == 2)
	{
		base = new C();
		std::cout << CYAN << "generate(): C has been generated" << RESET << std::endl;
	}

	return (base);
}
