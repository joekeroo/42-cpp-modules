/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:57:30 by jhii              #+#    #+#             */
/*   Updated: 2022/08/03 21:11:29 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

void	testCharacter(void)
{
	IMateriaSource	*src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter	*kevin = new Character("kevin");
	ICharacter	*karen = new Character("karen");
	AMateria	*tmp;

	tmp = src->createMateria("ice");
	kevin->equip(tmp);
	delete (tmp);
	tmp = src->createMateria("fire");
	if (tmp)
	{
		kevin->equip(tmp);
		delete (tmp);
	}

	kevin->use(0, *karen);
	kevin->use(1, *karen);
	karen->use(0, *kevin);
	karen->use(1, *kevin);

	kevin->unequip(1);

	delete (kevin);
	delete (karen);
	delete (src);
}

void	testMateria(void)
{
	IMateriaSource	*src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());

	ICharacter	*kevin = new Character("kevin");
	ICharacter	*karen = new Character("karen");
	AMateria	*tmp;

	tmp = src->createMateria("ice");
	kevin->equip(tmp);
	delete (tmp);
	tmp = src->createMateria("cure");
	kevin->equip(tmp);
	delete (tmp);
	tmp = src->createMateria("fire");
	if (tmp)
	{
		kevin->equip(tmp);
		delete (tmp);
	}

	kevin->use(0, *karen);
	kevin->use(1, *karen);

	delete (kevin);
	delete (karen);
	delete (src);
}

void	testPdf(void)
{
	IMateriaSource	*src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter	*me = new Character("me");
	ICharacter	*bob = new Character("bob");
	AMateria	*tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	delete (tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	delete (tmp);

	me->use(0, *bob);
	me->use(1, *bob);

	delete (bob);
	delete (me);
	delete (src);
}
