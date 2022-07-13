/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 19:26:34 by jhii              #+#    #+#             */
/*   Updated: 2022/07/11 21:39:53 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

// private attributes must start with an underscore (_)
class	HumanA
{
	private:
		std::string	_name;
		Weapon	&_weapon;

	public:
		HumanA(std::string, Weapon&);
		~HumanA(void);
		void	attack(void);
};

#endif
