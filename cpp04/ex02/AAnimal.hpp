/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:49:36 by jhii              #+#    #+#             */
/*   Updated: 2022/08/02 14:34:39 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include "Common.hpp"

// private attributes must start with an underscore (_)
class	AAnimal
{
	protected:
		std::string	_type;

	public:
		AAnimal(void);
		AAnimal(AAnimal const &);
		virtual ~AAnimal(void);

		AAnimal	&operator=(AAnimal const &);

		virtual void	makeSound(void) const = 0;
		std::string		getType(void) const;
};

std::ostream	&operator<<(std::ostream &, const AAnimal &);

#endif
