/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:32:14 by jhii              #+#    #+#             */
/*   Updated: 2022/07/16 16:13:10 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) { this->_fixed = 0; }
Fixed::~Fixed(void) {}
Fixed::Fixed(Fixed const &fix) { *this = fix; }

int		Fixed::getRawBits(void) const { return (this->_fixed); }
void	Fixed::setRawBits(const int raw) { this->_fixed = raw; }

Fixed::Fixed(const int val)
{
	int	pow = 2;

	for (int i = 1; i < this->_fraction; ++i)
		pow = pow * 2;
	this->_fixed = val * pow;
}

Fixed::Fixed(const float val)
{
	int		pow;
	float	temp;

	pow = 2;
	for (int i = 1; i < this->_fraction; ++i)
		pow = pow * 2;
	temp = val * pow;
	if (temp != (int)temp)
		temp = std::roundf(temp);
	this->_fixed = temp;
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

Fixed	&Fixed::min(Fixed &fix1, Fixed &fix2)
{
	float	pow1 = 2, pow2 = 2;
	float	res1 = 0, res2 = 0;

	for (int i = 1; i < fix1._fraction; ++i)
		pow1 = pow1 * 2;
	for (int i = 1; i < fix2._fraction; ++i)
		pow2 = pow2 * 2;
	res1 = fix1._fixed / pow1;
	res2 = fix2._fixed / pow2;
	if (res1 < res2)
		return (fix1);
	return (fix2);
}

Fixed	&Fixed::max(Fixed &fix1, Fixed &fix2)
{
	float	pow1 = 2, pow2 = 2;
	float	res1 = 0, res2 = 0;

	for (int i = 1; i < fix1._fraction; ++i)
		pow1 = pow1 * 2;
	for (int i = 1; i < fix2._fraction; ++i)
		pow2 = pow2 * 2;
	res1 = fix1._fixed / pow1;
	res2 = fix2._fixed / pow2;
	if (res1 > res2)
		return (fix1);
	return (fix2);
}

Fixed	&Fixed::min(const Fixed &fix1, const Fixed &fix2)
{
	Fixed	*temp1, *temp2;
	float	pow1 = 2, pow2 = 2;
	float	res1 = 0, res2 = 0;

	temp1 = new Fixed(fix1.toFloat());
	temp2 = new Fixed(fix2.toFloat());
	for (int i = 1; i < temp1->_fraction; ++i)
		pow1 = pow1 * 2;
	for (int i = 1; i < temp2->_fraction; ++i)
		pow2 = pow2 * 2;
	res1 = temp1->_fixed / pow1;
	res2 = temp2->_fixed / pow2;
	if (res1 < res2)
	{
		delete (temp2);
		return (*temp1);
	}
	delete (temp1);
	return (*temp2);
}

Fixed	&Fixed::max(const Fixed &fix1, const Fixed &fix2)
{
	Fixed	*temp1, *temp2;
	float	pow1 = 2, pow2 = 2;
	float	res1 = 0, res2 = 0;

	temp1 = new Fixed(fix1.toFloat());
	temp2 = new Fixed(fix2.toFloat());
	for (int i = 1; i < temp1->_fraction; ++i)
		pow1 = pow1 * 2;
	for (int i = 1; i < temp2->_fraction; ++i)
		pow2 = pow2 * 2;
	res1 = temp1->_fixed / pow1;
	res2 = temp2->_fixed / pow2;
	if (res1 > res2)
	{
		delete (temp2);
		return (*temp1);
	}
	delete (temp1);
	return (*temp2);
}

std::ostream	&operator<<(std::ostream &output, const Fixed &fix)
{
	output << fix.toFloat();
	return (output);
}

Fixed	&Fixed::operator=(Fixed const &fix)
{
	this->_fixed = fix._fixed;
	return (*this);
}

Fixed	Fixed::operator++()
{
	float	pow = 2, temp = this->_fixed;
	float	res1 = 0, res2 = 0;

	for (int i = 1; i < this->_fraction; ++i)
		pow = pow * 2;
	res1 = (temp / pow) + 0.00390625;
	res2 = ((temp / pow) + 0.00390625) * pow;
	if (res2 != (int)res2)
		res2 = std::roundf(res2);
	this->_fixed = res2;
	return (Fixed(res1));
}

Fixed	Fixed::operator++(int)
{
	Fixed	fix(this->toFloat());
	float	pow = 2, temp = this->_fixed;
	float	res1 = 0, res2 = 0;

	for (int i = 1; i < this->_fraction; ++i)
		pow = pow * 2;
	res1 = (temp / pow) + 0.00390625;
	res2 = ((temp / pow) + 0.00390625) * pow;
	if (res2 != (int)res2)
		res2 = std::roundf(res2);
	this->_fixed = res2;
	return (fix);
}

Fixed	Fixed::operator--()
{
	float	pow = 2, temp = this->_fixed;
	float	res1 = 0, res2 = 0;

	for (int i = 1; i < this->_fraction; ++i)
		pow = pow * 2;
	res1 = (temp / pow) - 0.00390625;
	res2 = ((temp / pow) - 0.00390625) * pow;
	if (res2 != (int)res2)
		res2 = std::roundf(res2);
	this->_fixed = res2;
	return (Fixed(res1));
}

Fixed	Fixed::operator--(int)
{
	Fixed	fix(this->toFloat());
	float	pow = 2, temp = this->_fixed;
	float	res1 = 0, res2 = 0;

	for (int i = 1; i < this->_fraction; ++i)
		pow = pow * 2;
	res1 = (temp / pow) - 0.00390625;
	res2 = ((temp / pow) - 0.00390625) * pow;
	if (res2 != (int)res2)
		res2 = std::roundf(res2);
	this->_fixed = res2;
	return (fix);
}

Fixed	Fixed::operator+(const Fixed &fix)
{
	Fixed	temp;
	float	pow = 2, res = 0;
	float	first = this->_fixed, second = fix._fixed;

	for (int i = 1; i < this->_fraction; ++i)
		pow = pow * 2;
	res = ((first / pow) + (second / pow)) * pow;
	if (res != (int)res)
		res = std::roundf(res);
	temp._fixed = res;
	return (temp);
}

Fixed	Fixed::operator-(const Fixed &fix)
{
	Fixed	temp;
	float	pow = 2, res = 0;
	float	first = this->_fixed, second = fix._fixed;

	for (int i = 1; i < this->_fraction; ++i)
		pow = pow * 2;
	res = ((first / pow) - (second / pow)) * pow;
	if (res != (int)res)
		res = std::roundf(res);
	temp._fixed = res;
	return (temp);
}

Fixed	Fixed::operator*(const Fixed &fix)
{
	Fixed	temp;
	float	pow = 2, res = 0;
	float	first = this->_fixed, second = fix._fixed;

	for (int i = 1; i < this->_fraction; ++i)
		pow = pow * 2;
	res = ((first / pow) * (second / pow)) * pow;
	if (res != (int)res)
		res = std::roundf(res);
	temp._fixed = res;
	return (temp);
}

Fixed	Fixed::operator/(const Fixed &fix)
{
	Fixed	temp;
	float	pow = 2, res = 0;
	float	first = this->_fixed, second = fix._fixed;

	for (int i = 1; i < this->_fraction; ++i)
		pow = pow * 2;
	res = ((first / pow) / (second / pow)) * pow;
	if (res != (int)res)
		res = std::roundf(res);
	temp._fixed = res;
	return (temp);
}

bool	Fixed::operator>(const Fixed &fix)
{
	float	pow = 2, res1 = 0, res2 = 0;

	for (int i = 1; i < this->_fraction; ++i)
		pow = pow * 2;
	res1 = this->_fixed / pow;
	res2 = fix._fixed / pow;
	if (res1 > res2)
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed &fix)
{
	float	pow = 2, res1 = 0, res2 = 0;

	for (int i = 1; i < this->_fraction; ++i)
		pow = pow * 2;
	res1 = this->_fixed / pow;
	res2 = fix._fixed / pow;
	if (res1 < res2)
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &fix)
{
	float	pow = 2, res1 = 0, res2 = 0;

	for (int i = 1; i < this->_fraction; ++i)
		pow = pow * 2;
	res1 = this->_fixed / pow;
	res2 = fix._fixed / pow;
	if (res1 >= res2)
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &fix)
{
	float	pow = 2, res1 = 0, res2 = 0;

	for (int i = 1; i < this->_fraction; ++i)
		pow = pow * 2;
	res1 = this->_fixed / pow;
	res2 = fix._fixed / pow;
	if (res1 <= res2)
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed &fix)
{
	float	pow = 2, res1 = 0, res2 = 0;

	for (int i = 1; i < this->_fraction; ++i)
		pow = pow * 2;
	res1 = this->_fixed / pow;
	res2 = fix._fixed / pow;
	if (res1 == res2)
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &fix)
{
	float	pow = 2, res1 = 0, res2 = 0;

	for (int i = 1; i < this->_fraction; ++i)
		pow = pow * 2;
	res1 = this->_fixed / pow;
	res2 = fix._fixed / pow;
	if (res1 != res2)
		return (true);
	return (false);
}
