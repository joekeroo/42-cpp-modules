/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:06:15 by jhii              #+#    #+#             */
/*   Updated: 2022/10/31 14:01:04 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	this->_hPoint = 100;
	this->_ePoint = 50;
	this->_atkDamage = 20;
	std::cout << GREEN << "FragTrap " << FragTrap::getName() << " Spawned" << RESET << std::endl;
}

FragTrap::FragTrap(FragTrap const &fp) { *this = fp; }

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_hPoint = 100;
	this->_ePoint = 100;
	this->_atkDamage = 30;
	std::cout << GREEN << "FragTrap " << name << " Spawned" << RESET << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << GREEN << "FragTrap " << this->_name << " Despawned" << RESET << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &fp)
{
	this->_name = fp._name;
	this->_hPoint = fp._hPoint;
	this->_ePoint = fp._ePoint;
	this->_atkDamage = fp._atkDamage;
	return (*this);
}

void	FragTrap::attack(const std::string &target)
{
	if (this->_ePoint > 0 && this->_hPoint > 0)
	{
		std::cout << BLUE << "FragTrap " << this->_name << RESET;
		std::cout << BLUE << " attacks " << target << RESET;
		std::cout << BLUE << ", causing " << this->_atkDamage << RESET;
		std::cout << BLUE << " points of damage!" << RESET << std::endl;
		this->_ePoint = this->_ePoint - 1;
	}
	else if (this->_hPoint == 0)
	{
		std::cout << BLUE << "FragTrap " << this->_name << RESET;
		std::cout << BLUE << " fails to Attack; has 0 Health" << RESET << std::endl;
	}
	else if (this->_ePoint == 0)
	{
		std::cout << BLUE << "FragTrap " << this->_name << RESET;
		std::cout << BLUE << " fails to Attack; has 0 Energy" << RESET << std::endl;
	}
}

void	FragTrap::takeDamage(unsigned int amount)
{
	std::cout << BLUE << "FragTrap " << this->_name << RESET;
	std::cout << BLUE << " took " << amount << RESET;
	std::cout << BLUE << " points of damage!" << RESET << std::endl;
	if (amount > (unsigned int)this->_hPoint)
		this->_hPoint = 0;
	else
		this->_hPoint = this->_hPoint - amount;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (this->_ePoint > 0 && this->_hPoint > 0)
	{
		std::cout << BLUE << "FragTrap " << this->_name << RESET;
		std::cout << BLUE << " repaired " << amount << RESET;
		std::cout << BLUE << " points of hp!" << std::endl << RESET;
		if (this->_hPoint + amount < 100)
			this->_hPoint = this->_hPoint + amount;
		else
			this->_hPoint = 100;
		this->_ePoint = this->_ePoint - 1;
	}
	else if (this->_hPoint == 0)
	{
		std::cout << BLUE << "FragTrap " << this->_name << RESET;
		std::cout << BLUE << " fails to Heal; has 0 Health" << RESET << std::endl;
	}
	else if (this->_ePoint == 0)
	{
		std::cout << BLUE << "FragTrap " << this->_name << RESET;
		std::cout << BLUE << " fails to Heal; has 0 Energy" << RESET << std::endl;
	}
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << BLUE << "FragTrap " << this->_name << RESET;
	std::cout << BLUE << " requests for a High 5!" << RESET << std::endl;
}
