/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:58:18 by jhii              #+#    #+#             */
/*   Updated: 2022/07/20 15:38:13 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

// private attributes must start with an underscore (_)
class	DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string	_name;

	public:
		DiamondTrap(std::string);
		DiamondTrap(DiamondTrap const &);
		~DiamondTrap(void);

		DiamondTrap	&operator=(DiamondTrap const &);

		void	attack(const std::string &);
		void	takeDamage(unsigned int);
		void	beRepaired(unsigned int);
		void	guardgate(void);
		void	highFivesGuys(void);
		void	whoAmI(void);
};

#endif
