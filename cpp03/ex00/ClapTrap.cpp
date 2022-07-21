/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:03:30 by jhii              #+#    #+#             */
/*   Updated: 2022/07/21 14:29:54 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(ClapTrap const &cp) { *this = cp; }

ClapTrap::ClapTrap(std::string name): _name(name), _hPoint(10), _ePoint(10), _atkDamage(0)
{
	std::cout << "ClapTrap " << name << " Spawned" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_name << " Despawned" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &cp)
{
	this->_name = cp._name;
	this->_hPoint = cp._hPoint;
	this->_ePoint = cp._ePoint;
	this->_atkDamage = cp._atkDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_ePoint > 0 && this->_hPoint > 0)
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " attacks " << target;
		std::cout << ", causing " << this->_atkDamage;
		std::cout << " points of damage!" << std::endl;
		this->_ePoint = this->_ePoint - 1;
	}
	else if (this->_hPoint == 0)
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " fails to Attack; has 0 Health" << std::endl;
	}
	else if (this->_ePoint == 0)
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " fails to Attack; has 0 Energy" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name;
	std::cout << " took " << amount;
	std::cout << " points of damage!" << std::endl;
	if (amount > (unsigned int)this->_hPoint)
		this->_hPoint = 0;
	else
		this->_hPoint = this->_hPoint - amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_ePoint > 0 && this->_hPoint > 0)
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " repaired " << amount;
		std::cout << " points of hp!" << std::endl;
		if (this->_hPoint + amount < 10)
			this->_hPoint = this->_hPoint + amount;
		else
			this->_hPoint = 10;
		this->_ePoint = this->_ePoint - 1;
	}
	else if (this->_hPoint == 0)
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " fails to Heal; has 0 Health" << std::endl;
	}
	else if (this->_ePoint == 0)
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " fails to Heal; has 0 Energy" << std::endl;
	}
}
