/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:03:32 by jhii              #+#    #+#             */
/*   Updated: 2022/07/20 15:55:57 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	claptrap("Scrapy");
	ScavTrap	scavtrap("Rusty");
	FragTrap	fragtrap("Shiny");
	DiamondTrap	diamondtrap("Godly");

	fragtrap.attack("Rusty");
	scavtrap.takeDamage(fragtrap.getAttack());
	scavtrap.attack("Scrapy");
	claptrap.takeDamage(scavtrap.getAttack());
	claptrap.attack("Rusty");
	scavtrap.guardgate();
	fragtrap.highFivesGuys();

	diamondtrap.attack("Shiny");
	fragtrap.takeDamage(diamondtrap.getAttack());
	diamondtrap.beRepaired(5);
	diamondtrap.whoAmI();
	return (0);
}
