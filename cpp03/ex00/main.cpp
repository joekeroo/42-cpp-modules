/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:03:32 by jhii              #+#    #+#             */
/*   Updated: 2022/07/21 14:13:05 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	shiny("Shiny");
	ClapTrap	rusty("Rusty");

	rusty.attack("Shiny");
	shiny.takeDamage(0);
	std::cout << std::endl;
	for (int i = 0; i < 10; ++i)
	{
		shiny.attack("Rusty");
		rusty.takeDamage(0);
	}
	std::cout << std::endl;
	rusty.beRepaired(1);
	shiny.attack("Rusty");
	return (0);
}
