/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:03:27 by jhii              #+#    #+#             */
/*   Updated: 2022/07/20 15:09:48 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

// private attributes must start with an underscore (_)
class	ClapTrap
{
	protected:
		std::string	_name;
		int			_hPoint;
		int			_ePoint;
		int			_atkDamage;

	public:
		ClapTrap(void);
		ClapTrap(std::string);
		ClapTrap(ClapTrap const &);
		~ClapTrap(void);

		ClapTrap	&operator=(ClapTrap const &);

		std::string	getName(void);
		int			getHealth(void);
		int			getEnergy(void);
		int			getAttack(void);
		void		attack(const std::string &);
		void		takeDamage(unsigned int);
		void		beRepaired(unsigned int);
};

#endif
