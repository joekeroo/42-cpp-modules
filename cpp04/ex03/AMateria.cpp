/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:45:19 by jhii              #+#    #+#             */
/*   Updated: 2022/08/02 15:44:55 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(AMateria const &ref) { *this = ref; }

AMateria::AMateria(std::string const &type): _type(type)
{
	std::cout << GREEN << "AMateria" << RESET;
	std::cout << GREEN << " constructed" << RESET << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << RED << "AMateria" << RESET;
	std::cout << RED << " destructed" << RESET << std::endl;
}

AMateria	&AMateria::operator=(AMateria const &ref)
{
	this->_type = ref._type;
	return (*this);
}

std::string const	&AMateria::getType(void) const
{
	return (this->_type);
}

void	AMateria::use(ICharacter &target)
{
	if (this->_type == "ice")
	{
		std::cout << CYAN << "* shoots an ice bolt at " << RESET;
		std::cout << CYAN << target.getName() << RESET;
		std::cout << CYAN << " *" << RESET << std::endl;
	}
	else if (this->_type == "cure")
	{
		std::cout << CYAN << "* heals " << RESET;
		std::cout << CYAN << target.getName() << RESET;
		std::cout << CYAN << "'s wounds *" << RESET << std::endl;
	}
	else
		std::cout << CYAN << "* Undefined AMateria *" << RESET;
}

std::ostream	&operator<<(std::ostream &output, const AMateria &ref)
{
	output << CYAN << "current AMateria: " << ref.getType() << RESET;
	return (output);
}
