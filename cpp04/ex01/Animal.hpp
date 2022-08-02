/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:49:36 by jhii              #+#    #+#             */
/*   Updated: 2022/08/01 14:41:33 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "Common.hpp"

// private attributes must start with an underscore (_)
class	Animal
{
	protected:
		std::string	_type;

	public:
		Animal(void);
		Animal(Animal const &);
		virtual ~Animal(void);

		Animal	&operator=(Animal const &);

		virtual void	makeSound(void) const;
		std::string		getType(void) const;
};

std::ostream	&operator<<(std::ostream &, const Animal &);

#endif
