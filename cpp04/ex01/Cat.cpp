/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:41:08 by jhii              #+#    #+#             */
/*   Updated: 2022/08/01 19:51:26 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(Cat const &ref) { *this = ref; }

Cat::Cat(void): Animal()
{
	this->_type = "Cat";
	std::cout << GREEN << this->_type << RESET;
	std::cout << GREEN << " constructed" << RESET << std::endl;
	this->_catBrain = new Brain();
}

Cat::~Cat(void)
{
	delete (this->_catBrain);
	std::cout << RED << this->_type << RESET;
	std::cout << RED << " destructed" << RESET << std::endl;
}

Cat	&Cat::operator=(Cat const &ref)
{
	this->_type = ref._type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << BLUE << "Animal: makeSound(): meow" << RESET << std::endl;
}
