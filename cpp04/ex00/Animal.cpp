/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:16:53 by jhii              #+#    #+#             */
/*   Updated: 2022/07/26 18:26:35 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(Animal const &ref) { *this = ref; }

Animal::Animal(void): _type("Animal")
{
	std::cout << GREEN << this->_type << RESET;
	std::cout << GREEN << " constructed" << RESET << std::endl;
}

Animal::~Animal(void)
{
	std::cout << RED << "Animal" << RESET;
	std::cout << RED << " destructed" << RESET << std::endl;
}

Animal	&Animal::operator=(Animal const &ref)
{
	this->_type = ref._type;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << CYAN << "Animal: makeSound(): none" << RESET << std::endl;
}

std::string	Animal::getType(void) const
{
	std::string	temp;

	temp = this->_type;
	return (temp);
}

std::ostream	&operator<<(std::ostream &output, const Animal &ref)
{
	std::string	temp;

	temp = ref.getType();
	output << CYAN << "current type: " << temp << RESET;
	return (output);
}
