/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:16:53 by jhii              #+#    #+#             */
/*   Updated: 2022/08/02 14:08:59 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(AAnimal const &ref) { *this = ref; }

AAnimal::AAnimal(void): _type("Animal")
{
	std::cout << GREEN << this->_type << RESET;
	std::cout << GREEN << " constructed" << RESET << std::endl;
}

AAnimal::~AAnimal(void)
{
	std::cout << RED << "Animal" << RESET;
	std::cout << RED << " destructed" << RESET << std::endl;
}

AAnimal	&AAnimal::operator=(AAnimal const &ref)
{
	this->_type = ref._type;
	return (*this);
}

std::string	AAnimal::getType(void) const
{
	std::string	temp;

	temp = this->_type;
	return (temp);
}

std::ostream	&operator<<(std::ostream &output, const AAnimal &ref)
{
	std::string	temp;

	temp = ref.getType();
	output << CYAN << "current type: " << temp << RESET;
	return (output);
}
