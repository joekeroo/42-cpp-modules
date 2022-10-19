/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:59:21 by jhii              #+#    #+#             */
/*   Updated: 2022/10/19 15:11:45 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

static void	testPointer(void)
{
	Base	*base1;
	base1 = generate();
	identify(base1);
	delete(base1);
	std::cout << std::endl;

	Base	*base2;
	base2 = generate();
	identify(base2);
	delete(base2);
	std::cout << std::endl;

	Base	*base3;
	base3 = generate();
	identify(base3);
	delete(base3);
	std::cout << std::endl;

	Base	*base4;
	base4 = generate();
	identify(base4);
	delete(base4);
	std::cout << std::endl;

	Base	*base5;
	base5 = generate();
	identify(base5);
	delete(base5);
}

static void	testRef(void)
{
	Base	base;
	identify(base);
	std::cout << std::endl;
	A	a;
	identify(a);
	std::cout << std::endl;
	B	b;
	identify(b);
	std::cout << std::endl;
	C	c;
	identify(c);
	std::cout << std::endl;
}

void	test(void)
{
	srand(time(0));
	testRef();
	testPointer();
}
