/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:57:26 by jhii              #+#    #+#             */
/*   Updated: 2022/07/26 18:26:19 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(WrongCat const &ref) { *this = ref; }

WrongCat::WrongCat(void): WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << GREEN << this->_type << RESET;
	std::cout << GREEN << " constructed" << RESET << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << RED << this->_type << RESET;
	std::cout << RED << " destructed" << RESET << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &ref)
{
	this->_type = ref._type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << BLUE << "WrongAnimal: makeSound(): meow" << RESET << std::endl;
}
