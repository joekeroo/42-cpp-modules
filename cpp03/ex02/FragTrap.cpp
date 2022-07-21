/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:06:15 by jhii              #+#    #+#             */
/*   Updated: 2022/07/21 14:32:12 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(FragTrap const &fp) { *this = fp; }

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_hPoint = 100;
	this->_ePoint = 100;
	this->_atkDamage = 30;
	std::cout << "FragTrap " << name << " Spawned" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name << " Despawned" << std::endl;
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
		std::cout << "FragTrap " << this->_name;
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

void	FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FragTrap " << this->_name;
	std::cout << " took " << amount;
	std::cout << " points of damage!" << std::endl;
	if (amount > (unsigned int)this->_hPoint)
		this->_hPoint = 0;
	else
		this->_hPoint = this->_hPoint - amount;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (this->_ePoint > 0 && this->_hPoint > 0)
	{
		std::cout << "FragTrap " << this->_name;
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

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name;
	std::cout << " requests for a High 5!" << std::endl;
}
