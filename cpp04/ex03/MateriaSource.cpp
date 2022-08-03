/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:11:17 by jhii              #+#    #+#             */
/*   Updated: 2022/08/03 14:58:42 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(MateriaSource const &ref) { *this = ref; }

MateriaSource::MateriaSource(void): _max(0)
{
	for (int i = 0; i < 4; ++i)
		this->_materia[i] = NULL;
	std::cout << GREEN << "MateriaSource " << RESET;
	std::cout << GREEN << " constructed" << RESET << std::endl;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_materia[i])
			delete (this->_materia[i]);
		this->_materia[i] = NULL;
	}
	std::cout << RED << "MateriaSource" << RESET;
	std::cout << RED << " destructed" << RESET << std::endl;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &ref)
{
	for (int i = 0; i < 4; ++i)
		this->_materia[i] = ref._materia[i]->clone();
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	if (this->_max < 4)
	{
		this->_materia[this->_max] = materia->clone();
		std::cout << CYAN << "MateriaSource" << RESET;
		std::cout << BLUE << ": Learnt " << materia->getType() << RESET;
		std::cout << BLUE << " Materia" << RESET << std::endl;
		this->_max++;
	}
	else
	{
		std::cout << CYAN << "MateriaSource" << RESET;
		std::cout << BLUE << ": No materia slots available" << RESET << std::endl;
	}
	delete (materia);
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_materia[i]->getType() == type)
		{
			std::cout << CYAN << "MateriaSource" << RESET;
			std::cout << BLUE << ": Created " << type << RESET;
			std::cout << BLUE << " Materia" << RESET << std::endl;
			return (this->_materia[i]->clone());
		}
	}
	std::cout << CYAN << "MateriaSource" << RESET;
	std::cout << BLUE << ": Unknown " << type << RESET;
	std::cout << BLUE << " Materia" << RESET << std::endl;
	return (0);
}
