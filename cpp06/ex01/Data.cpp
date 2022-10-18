/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:00:55 by jhii              #+#    #+#             */
/*   Updated: 2022/10/18 16:15:36 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int		Data::getInt(void) const { return (this->_int); }
char	Data::getChar(void) const { return (this->_char); }
float	Data::getFloat(void) const { return (this->_float); }
double	Data::getDouble(void) const { return (this->_double); }
Data::~Data(void) { std::cout << RED << "Destructor called" << RESET << std::endl; }

Data::Data(void)
{
	std::cout << GREEN << "Constructor called" << RESET << std::endl;
	this->_int = 42;
	this->_char = '*';
	this->_float = 42.0f;
	this->_double = 42.0;
}

Data::Data(Data const &ref)
{
	std::cout << GREEN << "Copy Constructor called" << RESET << std::endl;
	*this = ref;
}

Data	&Data::operator=(Data const &ref)
{
	std::cout << GREEN << "Copy Assignment Operator called" << RESET << std::endl;
	this->_int = ref._int;
	this->_char = ref._char;
	this->_float = ref._float;
	this->_double = ref._double;
	return (*this);
}

std::ostream	&operator<<(std::ostream &output, const Data &ref)
{
	output << CYAN << "char   : " << RESET;
	output << CYAN << "'" << ref.getChar() << "'" << RESET << std::endl;
	output << CYAN << "int    : " << RESET;
	output << CYAN << ref.getInt() << RESET << std::endl;
	output << CYAN << "float  : " << RESET;
	output << CYAN << ref.getFloat() << RESET << std::endl;
	output << CYAN << "double : " << RESET;
	output << CYAN << ref.getDouble() << RESET << std::endl;
	return (output);
}
