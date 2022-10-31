/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:40:14 by jhii              #+#    #+#             */
/*   Updated: 2022/10/31 14:00:30 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	this->_hPoint = 100;
	this->_ePoint = 50;
	this->_atkDamage = 20;
	std::cout << GREEN << "ScavTrap " << ScavTrap::getName() << " Spawned" << RESET << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &sp) { *this = sp; }

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_hPoint = 100;
	this->_ePoint = 50;
	this->_atkDamage = 20;
	std::cout << GREEN << "ScavTrap " << name << " Spawned" << RESET << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << GREEN << "ScavTrap " << this->_name << " Despawned" << RESET << std::endl;
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
		std::cout << CYAN << "ScavTrap " << this->_name << RESET;
		std::cout << CYAN << " attacks " << target << RESET;
		std::cout << CYAN << ", causing " << this->_atkDamage << RESET;
		std::cout << CYAN << " points of damage!" << RESET << std::endl;
		this->_ePoint = this->_ePoint - 1;
	}
	else if (this->_hPoint == 0)
	{
		std::cout << CYAN << "FragTrap " << this->_name << RESET;
		std::cout << CYAN << " fails to Attack; has 0 Health" << RESET << std::endl;
	}
	else if (this->_ePoint == 0)
	{
		std::cout << CYAN << "FragTrap " << this->_name;
		std::cout << CYAN << " fails to Attack; has 0 Energy" << RESET << std::endl;
	}
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << CYAN << "ScavTrap " << this->_name << RESET;
	std::cout << CYAN << " took " << amount << RESET;
	std::cout << CYAN << " points of damage!" << RESET << std::endl;
	if (amount > (unsigned int)this->_hPoint)
		this->_hPoint = 0;
	else
		this->_hPoint = this->_hPoint - amount;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_ePoint > 0 && this->_hPoint > 0)
	{
		std::cout << CYAN << "ScavTrap " << this->_name << RESET;
		std::cout << CYAN << " repaired " << amount << RESET;
		std::cout << CYAN << " points of hp!" << RESET << std::endl;
		if (this->_hPoint + amount < 100)
			this->_hPoint = this->_hPoint + amount;
		else
			this->_hPoint = 100;
		this->_ePoint = this->_ePoint - 1;
	}
	else if (this->_hPoint == 0)
	{
		std::cout << CYAN << "FragTrap " << this->_name << RESET;
		std::cout << CYAN << " fails to Heal; has 0 Health" << RESET << std::endl;
	}
	else if (this->_ePoint == 0)
	{
		std::cout << CYAN << "FragTrap " << this->_name << RESET;
		std::cout << CYAN << " fails to Heal; has 0 Energy" << RESET << std::endl;
	}
}

void	ScavTrap::guardgate(void)
{
	std::cout << CYAN << "ScavTrap " << this->_name << RESET;
	std::cout << CYAN << " is now in Gate Keeper mode!" << RESET << std::endl;
}
