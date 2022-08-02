/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:58:16 by jhii              #+#    #+#             */
/*   Updated: 2022/08/02 18:07:19 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

// private attributes must start with an underscore (_)
class	Cure: public	AMateria
{
	public:
		Cure(void);
		Cure(Cure const &);
		~Cure(void);

		Cure	&operator=(Cure const &);

		AMateria	*clone(void) const;
};

#endif
