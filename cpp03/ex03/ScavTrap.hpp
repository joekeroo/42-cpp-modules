/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:40:03 by jhii              #+#    #+#             */
/*   Updated: 2022/07/20 15:09:56 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

// private attributes must start with an underscore (_)
class	ScavTrap: public virtual	ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string);
		ScavTrap(ScavTrap const &);
		~ScavTrap(void);

		ScavTrap	&operator=(ScavTrap const &);

		void	attack(const std::string &);
		void	takeDamage(unsigned int);
		void	beRepaired(unsigned int);
		void	guardgate(void);
};

#endif
