/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:42:30 by jhii              #+#    #+#             */
/*   Updated: 2022/08/01 16:04:51 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Common.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

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
