/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:00:55 by jhii              #+#    #+#             */
/*   Updated: 2022/10/18 12:13:43 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int		Convert::getIntRes(void) const { return (this->_intRes); }
char	Convert::getCharRes(void) const { return (this->_charRes); }
float	Convert::getFloatRes(void) const { return (this->_floatRes); }
double	Convert::getDoubleRes(void) const { return (this->_doubleRes); }
bool	Convert::getIntStat(void) const { return (this->_intStat); }
bool	Convert::getCharStat(void) const { return (this->_charStat); }
bool	Convert::getFloatStat(void) const { return (this->_floatStat); }
bool	Convert::getDoubleStat(void) const { return (this->_doubleStat); }
bool	Convert::getCharDisplay(void) const { return (this->_charDisplay); }
bool	Convert::getFloatDisplay(void) const { return (this->_floatDisplay); }
bool	Convert::getDoubleDisplay(void) const { return (this->_doubleDisplay); }

Convert::Convert(Convert const &ref)
{
	std::cout << GREEN << "Copy Constructor called" << RESET << std::endl;
	*this = ref;
}

Convert::~Convert(void)
{
	std::cout << RED << "Destructor called" << RESET << std::endl;
}

Convert::Convert(char *input): _input(input)
{
	std::cout << GREEN << "Constructor called" << RESET << std::endl;
	this->_intRes = 0;
	this->_charRes = '\0';
	this->_floatRes = 0.0f;
	this->_doubleRes = 0.0;
	this->_intStat = false;
	this->_charStat = false;
	this->_floatStat = false;
	this->_doubleStat = false;
	this->_charDisplay = true;
	this->_floatDisplay = true;
	this->_doubleDisplay = true;
}

Convert	&Convert::operator=(Convert const &ref)
{
	std::cout << GREEN << "Copy Assignment Operator called" << RESET << std::endl;
	this->_input = ref._input;
	this->_intRes = ref._intRes;
	this->_charRes = ref._charRes;
	this->_floatRes = ref._floatRes;
	this->_doubleRes = ref._doubleRes;
	this->_intStat = ref._intStat;
	this->_charStat = ref._charStat;
	this->_floatStat = ref._floatStat;
	this->_doubleStat = ref._doubleStat;
	this->_charDisplay = ref._charDisplay;
	this->_floatDisplay = ref._floatDisplay;
	this->_doubleDisplay = ref._doubleDisplay;
	return (*this);
}

std::ostream	&operator<<(std::ostream &output, const Convert &ref)
{
	output << CYAN << "char   : " << RESET;
	if (ref.getCharStat() && ref.getCharDisplay())
		output << CYAN << "'" << ref.getCharRes() << "'" << RESET << std::endl;
	else if (ref.getCharStat() && !ref.getCharDisplay())
		output << CYAN << "non displayable" << RESET << std::endl;
	else
		output << CYAN << "impossible" << RESET << std::endl;
	output << CYAN << "int    : " << RESET;
	if (ref.getIntStat())
		output << CYAN << ref.getIntRes() << RESET << std::endl;
	else
		output << CYAN << "impossible" << RESET << std::endl;
	output << CYAN << "float  : " << RESET;
	if (ref.getFloatStat())
	{
		if (ref.getFloatDisplay())
			output << CYAN << ref.getFloatRes() << "f" << RESET << std::endl;
		else
			output << CYAN << ref.getFloatRes() << ".0f" << RESET << std::endl;
	}
	else
		output << CYAN << "impossible" << RESET << std::endl;
	output << CYAN << "double : " << RESET;
	if (ref.getDoubleStat())
	{
		if (ref.getDoubleDisplay())
			output << CYAN << ref.getDoubleRes() << RESET << std::endl;
		else
			output << CYAN << ref.getDoubleRes() << ".0" << RESET << std::endl;
	}
	else
		output << CYAN << "impossible" << RESET << std::endl;
	return (output);
}

void	Convert::toInt(void)
{
	std::string	str(this->_input);

	if (str == "nan" || str == "nanf")
		return ;
	double temp = static_cast<double>(std::strtod(this->_input, NULL));
	if (temp < std::numeric_limits<int>::min() || temp > std::numeric_limits<int>::max())
		return ;
	this->_intStat = true;
	this->_intRes = static_cast<int>(std::strtod(this->_input, NULL));
}

void	Convert::toChar(void)
{
	std::string	str(this->_input);

	if (str == "nan" || str == "nanf")
		return ;
	double temp = static_cast<double>(std::strtod(this->_input, NULL));
	if (temp < std::numeric_limits<char>::min() || temp > std::numeric_limits<char>::max())
		return ;
	if ((temp >= 0 && temp <= 31) || temp == 127)
		this->_charDisplay = false;
	this->_charStat = true;
	this->_charRes = static_cast<char>(std::strtod(this->_input, NULL));
}

void	Convert::toFloat(void)
{
	float temp = static_cast<float>(std::strtof(this->_input, NULL));
	if ((int)temp == temp)
		this->_floatDisplay = false;
	this->_floatStat = true;
	this->_floatRes = static_cast<float>(std::strtof(this->_input, NULL));
}

void	Convert::toDouble(void)
{
	double temp = static_cast<double>(std::strtod(this->_input, NULL));
	if ((int)temp == temp)
		this->_doubleDisplay = false;
	this->_doubleStat = true;
	this->_doubleRes = static_cast<double>(std::strtod(this->_input, NULL));
}

bool	Convert::checkInput(void)
{
	int	i = 0, j = 0, k = 0;
	int	point = 0, fpoint = 0;
	std::string	str(this->_input);

	if (str == "nan" || str == "nanf" || str == "inf" || str == "inff" ||
		str == "+inf" || str == "+inff" || str == "-inf" || str == "-inff")
		return (true);
	if (this->_input[0] != '+' || this->_input[0] != '-')
		i++;
	while (this->_input[i])
	{
		if (!isdigit(this->_input[i]) && this->_input[i] != '.' && this->_input[i] != 'f')
			return (false);
		if (this->_input[i] == '.')
			point++;
		if (this->_input[i] == 'f')
			fpoint++;
		i++;
	}
	if (point == 0 && fpoint == 0)
		return (true);
	if (point == 1 && fpoint == 0)
		return (true);
	if (point > 1 || fpoint > 1)
		return (false);
	if (point == 0 && fpoint == 1)
		return (false);
	if (point == 1 && fpoint == 1)
	{
		while (this->_input[j] != '.')
			j++;
		while (this->_input[k] != 'f')
			k++;
		if (k < j)
			return (false);
		if (k - j == 1)
			return (false);
	}
	return (true);
}

void	Convert::convert(void)
{
	if (!checkInput())
		return ;
	this->toInt();
	this->toChar();
	this->toFloat();
	this->toDouble();
}
