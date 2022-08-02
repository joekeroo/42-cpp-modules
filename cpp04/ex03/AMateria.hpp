/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:45:17 by jhii              #+#    #+#             */
/*   Updated: 2022/08/02 21:39:26 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "Utils.hpp"
# include "ICharacter.hpp"

class	ICharacter;

// private attributes must start with an underscore (_)
class	AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria(std::string const &);
		AMateria(AMateria const &);
		virtual ~AMateria(void);

		AMateria	&operator=(AMateria const &);

		std::string const	&getType(void) const;
		virtual void		use(ICharacter &);
		virtual AMateria	*clone(void) const = 0;
};

std::ostream	&operator<<(std::ostream &, const AMateria &);

#endif
