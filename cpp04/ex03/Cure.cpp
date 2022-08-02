/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:58:22 by jhii              #+#    #+#             */
/*   Updated: 2022/08/02 16:04:01 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(Cure const &ref): AMateria("cure") { *this = ref; }

Cure::Cure(void): AMateria("cure")
{
	std::cout << GREEN << "Cure Materia" << RESET;
	std::cout << GREEN << " constructed" << RESET << std::endl;
}

Cure::~Cure(void)
{
	std::cout << RED << "Cure Materia" << RESET;
	std::cout << RED << " destructed" << RESET << std::endl;
}

Cure	&Cure::operator=(Cure const &ref)
{
	this->_type = ref._type;
	return (*this);
}

AMateria	*Cure::clone(void) const
{
	AMateria	*temp = new Cure();

	return (temp);
}
