/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:36:56 by jhii              #+#    #+#             */
/*   Updated: 2022/07/11 18:46:30 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie
{
	private:
		std::string	name;

	public:
		Zombie(void);
		~Zombie(void);
		void	announce(void);
		void	setName(std::string);
};

Zombie	*zombieHorde(int n, std::string name);

#endif
