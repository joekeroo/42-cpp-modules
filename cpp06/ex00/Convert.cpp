/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:00:55 by jhii              #+#    #+#             */
/*   Updated: 2022/09/30 15:42:49 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	Convert::getIntRes(void) const { return (this->_intRes); }
char	Convert::getCharRes(void) const { return (this->_charRes); }
float	Convert::getFloatRes(void) const { return (this->_floatRes); }
double	Convert::getDoubleRes(void) const { return (this->_doubleRes); }
Convert::~Convert(void) { std::cout << RED << "Destructor called" << RESET << std::endl; }

Convert::Convert(Convert const &ref)
{
	std::cout << GREEN << "Copy Constructor called" << RESET << std::endl;
	*this = ref;
}

Convert::Convert(std::string input): _input(input)
{
	std::cout << GREEN << "Constructor called" << RESET << std::endl;
	this->_intRes = 0;
	this->_charRes = '\0';
	this->_floatRes = 0.0f;
	this->_doubleRes = 0.0;
}

Convert	&Convert::operator=(Convert const &ref)
{
	std::cout << GREEN << "Copy Assignment Operator called" << RESET << std::endl;
	this->_input = ref._input;
	this->_intRes = ref._intRes;
	this->_charRes = ref._charRes;
	this->_floatRes = ref._floatRes;
	this->_doubleRes = ref._doubleRes;
	return (*this);
}

std::ostream	&operator<<(std::ostream &output, const Convert &ref)
{
	output << CYAN << "char   : " << RESET;
	output << CYAN << ref.getCharRes() << RESET << std::endl;
	output << CYAN << "int    : " << RESET;
	output << CYAN << ref.getIntRes() << RESET << std::endl;
	output << CYAN << "float  : " << RESET;
	output << CYAN << ref.getFloatRes() << RESET << std::endl;
	output << CYAN << "double : " << RESET;
	output << CYAN << ref.getDoubleRes() << RESET << std::endl;
	return (output);
}

void	Convert::toInt(void)
{
}

void	Convert::toChar(void)
{
}

void	Convert::toFloat(void)
{
}

void	Convert::toDouble(void)
{
}

void	Convert::convert(void)
{
	this->toInt();
	this->toChar();
	this->toFloat();
	this->toDouble();
}
