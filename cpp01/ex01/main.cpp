/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:35:51 by jhii              #+#    #+#             */
/*   Updated: 2022/07/11 18:47:17 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// system("leaks zombie");
int	main(void)
{
	Zombie	*zombies;
	Zombie	*first;

	zombies = zombieHorde(10, "Foo");
	first = zombies;
	for (int i = 0; i < 10; ++i)
	{
		zombies->announce();
		zombies++;
	}
	zombies = first;
	delete[] zombies;
	return (0);
}
