/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:03:30 by jhii              #+#    #+#             */
/*   Updated: 2022/10/31 14:07:36 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("_clap_name"), _hPoint(10), _ePoint(10), _atkDamage(0) {}
ClapTrap::ClapTrap(ClapTrap const &cp) { *this = cp; }

ClapTrap::ClapTrap(std::string name): _name(name), _hPoint(10), _ePoint(10), _atkDamage(0)
{
	std::cout << GREEN << "ClapTrap " << name << " Spawned" << RESET << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << GREEN << "ClapTrap " << this->_name << " Despawned" << RESET << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &cp)
{
	this->_name = cp._name;
	this->_hPoint = cp._hPoint;
	this->_ePoint = cp._ePoint;
	this->_atkDamage = cp._atkDamage;
	return (*this);
}

std::string	ClapTrap::getName(void) { return (this->_name); }
int	ClapTrap::getHealth(void) { return (this->_hPoint); }
int	ClapTrap::getEnergy(void) { return (this->_ePoint); }
int	ClapTrap::getAttack(void) { return (this->_atkDamage); }

void	ClapTrap::attack(const std::string &target)
{
	if (this->_ePoint > 0 && this->_hPoint > 0)
	{
		std::cout << CYAN << "ClapTrap " << this->_name << RESET;
		std::cout << CYAN << " attacks " << target << RESET;
		std::cout << CYAN << ", causing " << this->_atkDamage << RESET;
		std::cout << CYAN << " points of damage!" << RESET << std::endl;
		this->_ePoint = this->_ePoint - 1;
	}
	else if (this->_hPoint == 0)
	{
		std::cout << CYAN << "ClapTrap " << this->_name << RESET;
		std::cout << CYAN << " fails to Attack; has 0 Health" << RESET << std::endl;
	}
	else if (this->_ePoint == 0)
	{
		std::cout << CYAN << "ClapTrap " << this->_name << RESET;
		std::cout << CYAN << " fails to Attack; has 0 Energy" << RESET << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << CYAN << "ClapTrap " << this->_name << RESET;
	std::cout << CYAN << " took " << amount << RESET;
	std::cout << CYAN << " points of damage!" << RESET << std::endl;
	if (amount > (unsigned int)this->_hPoint)
		this->_hPoint = 0;
	else
		this->_hPoint = this->_hPoint - amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_ePoint > 0 && this->_hPoint > 0)
	{
		std::cout << CYAN << "ClapTrap " << RESET << this->_name;
		std::cout << CYAN << " repaired " << amount << RESET;
		std::cout << CYAN << " points of hp!" << RESET << std::endl;
		if (this->_hPoint + amount < 10)
			this->_hPoint = this->_hPoint + amount;
		else
			this->_hPoint = 10;
		this->_ePoint = this->_ePoint - 1;
	}
	else if (this->_hPoint == 0)
	{
		std::cout << CYAN << "ClapTrap " << this->_name << RESET;
		std::cout << CYAN << " fails to Heal; has 0 Health" << RESET << std::endl;
	}
	else if (this->_ePoint == 0)
	{
		std::cout << CYAN << "ClapTrap " << this->_name << RESET;
		std::cout << CYAN << " fails to Heal; has 0 Energy" << RESET << std::endl;
	}
}
