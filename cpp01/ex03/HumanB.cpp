/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 19:26:54 by jhii              #+#    #+#             */
/*   Updated: 2022/07/11 21:41:00 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// to initialized the attributes do this:
HumanB::HumanB(std::string str): _name(str)
{
	std::cout << this->_name << " spawned" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << this->_name << " died" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack(void)
{
	std::cout << this->_name;
	std::cout << " attacks with their ";
	std::cout << this->_weapon->getType();
	std::cout << std::endl;
}
