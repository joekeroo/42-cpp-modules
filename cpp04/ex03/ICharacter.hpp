/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:09:26 by jhii              #+#    #+#             */
/*   Updated: 2022/08/02 21:39:55 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include "Utils.hpp"
# include "AMateria.hpp"

class	AMateria;

// private attributes must start with an underscore (_)
class	ICharacter
{
	public:
		virtual ~ICharacter(void) {}

		virtual std::string const	&getName(void) const = 0;
		virtual void				equip(AMateria *) = 0;
		virtual void				unequip(int) = 0;
		virtual void				use(int, ICharacter &) = 0;
};

#endif
