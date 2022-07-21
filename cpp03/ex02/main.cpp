/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:03:32 by jhii              #+#    #+#             */
/*   Updated: 2022/07/20 14:33:18 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int	main(void)
{
	FragTrap	goldy("Goldy");
	ScavTrap	shiny("Shiny");
	ClapTrap	rusty("Rusty");

	goldy.attack("Shiny");
	shiny.takeDamage(goldy.getAttack());
	shiny.attack("Rusty");
	rusty.takeDamage(shiny.getAttack());
	rusty.attack("Shiny");
	shiny.guardgate();
	goldy.highFivesGuys();
	return (0);
}
