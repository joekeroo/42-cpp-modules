/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:41:25 by jhii              #+#    #+#             */
/*   Updated: 2022/08/01 19:51:01 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(Dog const &ref) { *this = ref; }

Dog::Dog(void): Animal()
{
	this->_type = "Dog";
	std::cout << GREEN << this->_type << RESET;
	std::cout << GREEN << " constructed" << RESET << std::endl;
	this->_dogBrain = new Brain();
}

Dog::~Dog(void)
{
	delete (this->_dogBrain);
	std::cout << RED << this->_type << RESET;
	std::cout << RED << " destructed" << RESET << std::endl;
}

Dog	&Dog::operator=(Dog const &ref)
{
	this->_type = ref._type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << BLUE << "Animal: makeSound(): woof" << RESET << std::endl;
}
