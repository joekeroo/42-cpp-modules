/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:03:27 by jhii              #+#    #+#             */
/*   Updated: 2022/10/31 13:49:24 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# define RESET		"\033[0m"
# define BLACK		"\033[30m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define MAGENTA	"\033[35m"
# define CYAN		"\033[36m"
# define WHITE		"\033[37m"

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
