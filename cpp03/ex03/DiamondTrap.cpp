/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:57:54 by jhii              #+#    #+#             */
/*   Updated: 2022/10/31 14:02:51 by jhii             ###   ########.fr       */
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
	std::cout << MAGENTA << "DiamondTrap " << name << " Spawned" << RESET << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << MAGENTA << "DiamondTrap " << this->_name << " Despawned" << RESET << std::endl;
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
	std::cout << MAGENTA << "DiamondTrap " << this->_name << RESET;
	std::cout << MAGENTA << " took " << amount << RESET;
	std::cout << MAGENTA << " points of damage!" << RESET << std::endl;
	if (amount > (unsigned int)this->_hPoint)
		this->_hPoint = 0;
	else
		this->_hPoint = this->_hPoint - amount;
}

void	DiamondTrap::beRepaired(unsigned int amount)
{
	if (this->_ePoint > 0 && this->_hPoint > 0)
	{
		std::cout << MAGENTA << "DiamondTrap " << this->_name << RESET;
		std::cout << MAGENTA << " repaired " << amount << RESET;
		std::cout << MAGENTA << " points of hp!" << RESET << std::endl;
		if (this->_hPoint + amount < 100)
			this->_hPoint = this->_hPoint + amount;
		else
			this->_hPoint = 100;
		this->_ePoint = this->_ePoint - 1;
	}
	else if (this->_hPoint == 0)
	{
		std::cout << MAGENTA << "DiamondTrap " << this->_name << RESET;
		std::cout << MAGENTA << " fails to Heal; has 0 Health" << RESET << std::endl;
	}
	else if (this->_ePoint == 0)
	{
		std::cout << MAGENTA << "DiamondTrap " << this->_name << RESET;
		std::cout << MAGENTA << " fails to Heal; has 0 Energy" << RESET << std::endl;
	}
}

void	DiamondTrap::guardgate(void)
{
	std::cout << MAGENTA << "DiamondTrap " << this->_name << RESET;
	std::cout << MAGENTA << " is now in Gate Keeper mode!" << RESET << std::endl;
}

void	DiamondTrap::highFivesGuys(void)
{
	std::cout << MAGENTA << "DiamondTrap " << this->_name << RESET;
	std::cout << MAGENTA << " requests for a High 5!" << RESET << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << MAGENTA << "ClapTrap Name: " << ClapTrap::_name << RESET << std::endl;
	std::cout << MAGENTA << "DiamondTrap Name: " << this->_name << RESET << std::endl;
}
