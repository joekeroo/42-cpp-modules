/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:57:54 by jhii              #+#    #+#             */
/*   Updated: 2022/07/21 14:33:48 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(DiamondTrap const &dp) { *this = dp; }

DiamondTrap::DiamondTrap(std::string name): ScavTrap(), FragTrap(), _name(name)
{
	ClapTrap::_name = name + "_clap_name";
	this->_hPoint = FragTrap::getHealth();
	this->_ePoint = ScavTrap::getEnergy();
	this->_atkDamage = FragTrap::getAttack();
	std::cout << "DiamondTrap " << name << " Spawned" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->_name << " Despawned" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &dp)
{
	this->_name = dp._name;
	this->_hPoint = dp._hPoint;
	this->_ePoint = dp._ePoint;
	this->_atkDamage = dp._atkDamage;
	return (*this);
}

void	DiamondTrap::attack(const std::string &target) { ScavTrap::attack(target); }

void	DiamondTrap::takeDamage(unsigned int amount)
{
	std::cout << "DiamondTrap " << this->_name;
	std::cout << " took " << amount;
	std::cout << " points of damage!" << std::endl;
	if (amount > (unsigned int)this->_hPoint)
		this->_hPoint = 0;
	else
		this->_hPoint = this->_hPoint - amount;
}

void	DiamondTrap::beRepaired(unsigned int amount)
{
	if (this->_ePoint > 0 && this->_hPoint > 0)
	{
		std::cout << "DiamondTrap " << this->_name;
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
		std::cout << "DiamondTrap " << this->_name;
		std::cout << " fails to Heal; has 0 Health" << std::endl;
	}
	else if (this->_ePoint == 0)
	{
		std::cout << "DiamondTrap " << this->_name;
		std::cout << " fails to Heal; has 0 Energy" << std::endl;
	}
}

void	DiamondTrap::guardgate(void)
{
	std::cout << "DiamondTrap " << this->_name;
	std::cout << " is now in Gate Keeper mode!" << std::endl;
}

void	DiamondTrap::highFivesGuys(void)
{
	std::cout << "DiamondTrap " << this->_name;
	std::cout << " requests for a High 5!" << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "ClapTrap Name: " << ClapTrap::_name << std::endl;
	std::cout << "DiamondTrap Name: " << this->_name << std::endl;
}
