/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:03:27 by jhii              #+#    #+#             */
/*   Updated: 2022/07/21 14:17:07 by jhii             ###   ########.fr       */
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
		ClapTrap(std::string);
		ClapTrap(ClapTrap const &);
		~ClapTrap(void);

		ClapTrap	&operator=(ClapTrap const &);

		void	attack(const std::string &);
		void	takeDamage(unsigned int);
		void	beRepaired(unsigned int);
};

#endif
