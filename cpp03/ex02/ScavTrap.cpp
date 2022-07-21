/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:40:14 by jhii              #+#    #+#             */
/*   Updated: 2022/07/21 14:32:29 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(ScavTrap const &sp) { *this = sp; }

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_hPoint = 100;
	this->_ePoint = 50;
	this->_atkDamage = 20;
	std::cout << "ScavTrap " << name << " Spawned" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->_name << " Despawned" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &sp)
{
	this->_name = sp._name;
	this->_hPoint = sp._hPoint;
	this->_ePoint = sp._ePoint;
	this->_atkDamage = sp._atkDamage;
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_ePoint > 0 && this->_hPoint > 0)
	{
		std::cout << "ScavTrap " << this->_name;
		std::cout << " attacks " << target;
		std::cout << ", causing " << this->_atkDamage;
		std::cout << " points of damage!" << std::endl;
		this->_ePoint = this->_ePoint - 1;
	}
	else if (this->_hPoint == 0)
	{
		std::cout << "FragTrap " << this->_name;
		std::cout << " fails to Attack; has 0 Health" << std::endl;
	}
	else if (this->_ePoint == 0)
	{
		std::cout << "FragTrap " << this->_name;
		std::cout << " fails to Attack; has 0 Energy" << std::endl;
	}
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "ScavTrap " << this->_name;
	std::cout << " took " << amount;
	std::cout << " points of damage!" << std::endl;
	if (amount > (unsigned int)this->_hPoint)
		this->_hPoint = 0;
	else
		this->_hPoint = this->_hPoint - amount;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_ePoint > 0 && this->_hPoint > 0)
	{
		std::cout << "ScavTrap " << this->_name;
		std::cout << " repaired " << amount;
		std::cout << " points of hp!" << std::endl;
		if (this->_hPoint + amount < 100)
			this->_hPoint = this->_hPoint + amount;
		else
			this->_hPoint = 100;
		this->_ePoint = this->_ePoint - 1;
	}
	else if (this->_hPoint == 0)
	{
		std::cout << "FragTrap " << this->_name;
		std::cout << " fails to Heal; has 0 Health" << std::endl;
	}
	else if (this->_ePoint == 0)
	{
		std::cout << "FragTrap " << this->_name;
		std::cout << " fails to Heal; has 0 Energy" << std::endl;
	}
}

void	ScavTrap::guardgate(void)
{
	std::cout << "ScavTrap " << this->_name;
	std::cout << " is now in Gate Keeper mode!" << std::endl;
}
