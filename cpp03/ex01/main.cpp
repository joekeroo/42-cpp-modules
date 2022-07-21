/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:03:32 by jhii              #+#    #+#             */
/*   Updated: 2022/07/21 14:25:34 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	shiny("Shiny");
	ClapTrap	rusty("Rusty");

	shiny.attack("Rusty");
	rusty.takeDamage(shiny.getAttack());
	rusty.attack("Shiny");
	shiny.guardgate();
	return (0);
}
