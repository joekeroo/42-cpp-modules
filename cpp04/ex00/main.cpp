/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:16:19 by jhii              #+#    #+#             */
/*   Updated: 2022/07/26 18:41:52 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void	testAnimal(void)
{
	Animal animal;

	animal.makeSound();
	std::cout << animal << std::endl;
}

void	testCat(void)
{
	Cat cat;

	cat.makeSound();
	std::cout << cat << std::endl;
}

void	testDog(void)
{
	Dog dog;

	dog.makeSound();
	std::cout << dog << std::endl;
}

void	testWrongAnimal(void)
{
	WrongAnimal wrongAnimal;

	wrongAnimal.makeSound();
	std::cout << wrongAnimal << std::endl;
}

void	testWrongCat(void)
{
	WrongCat wrongCat;

	wrongCat.makeSound();
	std::cout << wrongCat << std::endl;
}

void	testPdf(void)
{
	const Animal	*meta = new Animal();
	const Animal	*i = new Cat();
	const Animal	*j = new Dog();

	// prints the Animal type for the following objects
	std::cout << *i << std::endl;
	std::cout << *j << std::endl;
	std::cout << *meta << std::endl;

	// runs makeSound() function
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	// frees allocated memory i, j and meta
	delete (i);
	delete (j);
	delete (meta);
}

int	main(void)
{
	testAnimal();
	std::cout << std::endl;
	testCat();
	std::cout << std::endl;
	testDog();
	std::cout << std::endl;
	testWrongAnimal();
	std::cout << std::endl;
	testWrongCat();
	std::cout << std::endl;
	testPdf();
	return (0);
}
