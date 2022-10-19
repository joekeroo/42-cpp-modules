/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:03:17 by jhii              #+#    #+#             */
/*   Updated: 2022/10/19 15:10:49 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void	identify(Base *ptr)
{
	A	*a = dynamic_cast<A *>(ptr);
	B	*b = dynamic_cast<B *>(ptr);
	C	*c = dynamic_cast<C *>(ptr);
    
	if (a)
		std::cout << CYAN << "identify(): A type" << RESET << std::endl;
	else if (b)
		std::cout << CYAN << "identify(): B type" << RESET << std::endl;
	else if (c)
		std::cout << CYAN << "identify(): C type" << RESET << std::endl;
	else
		std::cout << CYAN << "identify(): Undefined type" << RESET << std::endl;
}

void	identify(Base &ptr)
{
	try {
	    A	&a = dynamic_cast<A &>(ptr);
		(void)a;
        std::cout << CYAN << "identify(): A type" << RESET << std::endl;
		return ;
    }
    catch (std::bad_cast &res) {}
	try {
	    B	&b = dynamic_cast<B &>(ptr);
		(void)b;
        std::cout << CYAN << "identify(): B type" << RESET << std::endl;
		return ;
    }
    catch (std::bad_cast &res) {}
	try {
	    C	&c = dynamic_cast<C &>(ptr);
		(void)c;
        std::cout << CYAN << "identify(): C type" << RESET << std::endl;
		return ;
    }
    catch (std::bad_cast &res) {}
	std::cout << CYAN << "identify(): Undefined type" << RESET << std::endl;
}
