/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:57:17 by jhii              #+#    #+#             */
/*   Updated: 2022/07/26 18:26:31 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(WrongAnimal const &ref) { *this = ref; }

WrongAnimal::WrongAnimal(void): _type("WrongAnimal")
{
	std::cout << GREEN << this->_type << RESET;
	std::cout << GREEN << " constructed" << RESET << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << RED << "WrongAnimal" << RESET;
	std::cout << RED << " destructed" << RESET << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &ref)
{
	this->_type = ref._type;
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << CYAN << "WrongAnimal: makeSound(): none" << RESET << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	std::string	temp;

	temp = this->_type;
	return (temp);
}

std::ostream	&operator<<(std::ostream &output, const WrongAnimal &ref)
{
	std::string	temp;

	temp = ref.getType();
	output << CYAN << "current type: " << temp << RESET;
	return (output);
}
