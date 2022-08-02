/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:51:14 by jhii              #+#    #+#             */
/*   Updated: 2022/08/02 18:04:22 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(Ice const &ref): AMateria("ice") { *this = ref; }

Ice::Ice(void): AMateria("ice")
{
	std::cout << GREEN << "Ice Materia" << RESET;
	std::cout << GREEN << " constructed" << RESET << std::endl;
}

Ice::~Ice(void)
{
	std::cout << RED << "Ice Materia" << RESET;
	std::cout << RED << " destructed" << RESET << std::endl;
}

Ice	&Ice::operator=(Ice const &ref)
{
	this->_type = ref._type;
	return (*this);
}

AMateria	*Ice::clone(void) const
{
	AMateria	*temp = new Ice();

	return (temp);
}
