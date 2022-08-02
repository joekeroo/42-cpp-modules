/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:58:18 by jhii              #+#    #+#             */
/*   Updated: 2022/08/02 18:07:15 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

// private attributes must start with an underscore (_)
class	Ice: public	AMateria
{
	public:
		Ice(void);
		Ice(Ice const &);
		~Ice(void);

		Ice	&operator=(Ice const &);

		AMateria	*clone(void) const;
};

#endif
