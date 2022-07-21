/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:06:09 by jhii              #+#    #+#             */
/*   Updated: 2022/07/20 15:10:05 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

// private attributes must start with an underscore (_)
class	FragTrap: public virtual	ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string);
		FragTrap(FragTrap const &);
		~FragTrap(void);

		FragTrap	&operator=(FragTrap const &);

		void	attack(const std::string &);
		void	takeDamage(unsigned int);
		void	beRepaired(unsigned int);
		void	highFivesGuys(void);
};

#endif
