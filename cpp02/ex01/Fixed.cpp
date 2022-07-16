/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:32:14 by jhii              #+#    #+#             */
/*   Updated: 2022/07/15 14:16:45 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixed = 0;
}

Fixed::Fixed(const int val)
{
	int	pow = 2;

	std::cout << "Int constructor called" << std::endl;
	for (int i = 1; i < this->_fraction; ++i)
		pow = pow * 2;
	this->_fixed = val * pow;
}

Fixed::Fixed(const float val)
{
	int		pow;
	float	temp;

	pow = 2;
	std::cout << "Float constructor called" << std::endl;
	for (int i = 1; i < this->_fraction; ++i)
		pow = pow * 2;
	temp = val * pow;
	if (temp != (int)temp)
		temp = std::roundf(temp);
	this->_fixed = (int)temp;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &fix) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fix;
}

Fixed	&Fixed::operator=(Fixed const &fix)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixed = fix._fixed;
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (this->_fixed);
}

void	Fixed::setRawBits(const int raw)
{
	this->_fixed = raw;
}

float	toDecimal(int decimal, int bit)
{
	int		fixedpoint[32];
	int		i = 0, j = -1, len = 0;
	float	res = 0, remainder = 0, product = 1;

    while (decimal != 0)
	{
		fixedpoint[len++] = decimal % 2;
		decimal = decimal / 2;
	}
	while (++j < bit)
		product = product / 2;
	while (i < len)
	{
		remainder = fixedpoint[i++] * product;
		res = res + remainder;
		product = product * 2;
	}
	return (res);
}

int	Fixed::toInt(void) const
{
	int	temp;

	temp = toDecimal(this->_fixed, this->_fraction);
	return (temp);
}

float	Fixed::toFloat(void) const
{
	float	temp;

	temp = toDecimal(this->_fixed, this->_fraction);
	return (temp);
}

std::ostream	&operator<<(std::ostream &output, const Fixed &fix)
{
	output << fix.toFloat();
	return (output);
}
