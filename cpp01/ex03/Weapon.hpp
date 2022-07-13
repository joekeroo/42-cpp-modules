/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 19:25:42 by jhii              #+#    #+#             */
/*   Updated: 2022/07/11 20:42:11 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

// private attributes must start with an underscore (_)
class	Weapon
{
	private:
		std::string	_type;

	public:
		Weapon(std::string);
		~Weapon(void);
		void	setType(std::string);
		const std::string	&getType(void);
};

#endif
