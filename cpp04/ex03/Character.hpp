/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:04:07 by jhii              #+#    #+#             */
/*   Updated: 2022/08/02 21:03:53 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

// private attributes must start with an underscore (_)
class	Character: public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_unequiped;
		AMateria	*_inventory[4];

	public:
		Character(std::string const &);
		Character(Character const &);
		~Character(void);

		Character	&operator=(Character const &);

		std::string const	&getName(void) const;
		void				equip(AMateria *);
		void				unequip(int);
		void				use(int, ICharacter &);
};

#endif
