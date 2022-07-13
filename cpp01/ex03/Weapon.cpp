/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 19:25:45 by jhii              #+#    #+#             */
/*   Updated: 2022/07/11 20:44:59 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
	this->_type = str;
}

Weapon::~Weapon(void)
{
	std::cout << "Destroyed weapon with type: " << this->_type << std::endl;
}

void	Weapon::setType(std::string str)
{
	this->_type = str;
}

const std::string	&Weapon::getType(void)
{
	const std::string	&temp = this->_type;
	return (temp);
}
