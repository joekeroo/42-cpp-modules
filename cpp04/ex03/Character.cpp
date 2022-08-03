/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:04:31 by jhii              #+#    #+#             */
/*   Updated: 2022/08/03 21:01:53 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(Character const &ref) { *this = ref; }

Character::Character(std::string const &name): _name(name)
{
	this->_unequiped = NULL;
	for (int i = 0; i < 4; ++i)
		this->_inventory[i] = NULL;
	std::cout << GREEN << "Character " << RESET;
	std::cout << GREEN << this->_name << RESET;
	std::cout << GREEN << " constructed" << RESET << std::endl;
}

Character::~Character(void)
{
	if (this->_unequiped)
		delete (this->_unequiped);
	this->_unequiped = NULL;
	for (int i = 0; i < 4; ++i)
	{
		if (this->_inventory[i])
			delete (this->_inventory[i]);
		this->_inventory[i] = NULL;
	}
	std::cout << RED << "Character " << RESET;
	std::cout << RED << this->_name << RESET;
	std::cout << RED << " destructed" << RESET << std::endl;
}

Character	&Character::operator=(Character const &ref)
{
	this->_name = ref._name;
	if (ref._unequiped)
		this->_unequiped = ref._unequiped->clone();
	else
		this->_unequiped = NULL;
	for (int i = 0; i < 4; ++i)
	{
		if (ref._inventory[i])
			this->_inventory[i] = ref._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	return (*this);
}

std::string const	&Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	int	index = -1;

	for (int i = 0; i < 4; ++i)
	{
		if (!this->_inventory[i])
		{
			index = i;
			break ;
		}
	}
	if (index != -1)
	{
		this->_inventory[index] = m->clone();
		std::cout << CYAN << this->_name << RESET;
		std::cout << BLUE << ": equiped " << RESET;
		std::cout << BLUE << m->getType() << RESET;
		std::cout << BLUE << " AMateria" << RESET << std::endl;
	}
	else
	{
		std::cout << CYAN << this->_name << RESET;
		std::cout << BLUE << ": equip: Inventory full" << RESET << std::endl;
	}
}

void	Character::unequip(int idx)
{
	if (idx < 4)
	{
		if (this->_inventory[idx])
		{
			if (!this->_unequiped)
				this->_unequiped = this->_inventory[idx]->clone();
			else
			{
				delete (this->_unequiped);
				this->_unequiped = this->_inventory[idx]->clone();
			}
			delete (this->_inventory[idx]);
			this->_inventory[idx] = NULL;
			std::cout << CYAN << this->_name << RESET;
			std::cout << BLUE << ": unequiped " << RESET;
			std::cout << BLUE << this->_unequiped->getType() << RESET;
			std::cout << BLUE << " AMateria" << RESET << std::endl;
		}
		else
		{
			std::cout << CYAN << this->_name << RESET;
			std::cout << BLUE << ": unequip: Inventory slot " << RESET;
			std::cout << BLUE << idx << RESET;
			std::cout << BLUE << " is empty" << RESET << std::endl;
		}
	}
	else
	{
		std::cout << CYAN << this->_name << RESET;
		std::cout << BLUE << ": unequip: Index out of bounds" << RESET << std::endl;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 4)
	{
		if (this->_inventory[idx])
		{
			std::cout << CYAN << this->_name << RESET;
			std::cout << BLUE << ": " << RESET;
			this->_inventory[idx]->use(target);
		}
		else
		{
			std::cout << CYAN << this->_name << RESET;
			std::cout << BLUE << ": use: Inventory slot " << RESET;
			std::cout << BLUE << idx << RESET;
			std::cout << BLUE << " is empty" << RESET << std::endl;
		}
	}
	else
	{
		std::cout << CYAN << this->_name << RESET;
		std::cout << BLUE << ": use: Index out of bounds" << RESET << std::endl;
	}
}
