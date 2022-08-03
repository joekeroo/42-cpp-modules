/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:16:19 by jhii              #+#    #+#             */
/*   Updated: 2022/08/03 15:00:09 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Common.hpp"
#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void	testPdf(void)
{
	const	int	number = 6;
	AAnimal		*meta[number];

	// creates Cat and Dog type objects for Animal[]
	for (int i = 0; i < number; ++i)
	{
		if (i % 2 == 0)
			meta[i] = new Cat();
		else
			meta[i] = new Dog();
	}

	// prints the Animal type for the following objects
	for (int i = 0; i < number; ++i)
		std::cout << *meta[i] << std::endl;

	// runs makeSound() function
	for (int i = 0; i < number; ++i)
		meta[i]->makeSound();

	// frees allocated memory for meta
	for (int i = number - 1; i >= 0; --i)
		delete (meta[i]);
}

int	main(void)
{
	testAnimal();
	std::cout << std::endl;
	testCat();
	std::cout << std::endl;
	testDog();
	std::cout << std::endl;
	testPdf();
	system("leaks animal");
	return (0);
}
