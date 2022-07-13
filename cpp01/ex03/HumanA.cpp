/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 19:26:24 by jhii              #+#    #+#             */
/*   Updated: 2022/07/11 21:39:54 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// to initialized the attributes do this:
HumanA::HumanA(std::string str, Weapon &weapon): _name(str), _weapon(weapon)
{
	std::cout << this->_name << " spawned" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << this->_name << " died" << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << this->_name;
	std::cout << " attacks with their ";
	std::cout << this->_weapon.getType();
	std::cout << std::endl;
}
