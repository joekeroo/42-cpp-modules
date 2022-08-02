/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:39:47 by jhii              #+#    #+#             */
/*   Updated: 2022/07/26 18:26:09 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

// private attributes must start with an underscore (_)
class	Dog: public Animal
{
	public:
		Dog(void);
		Dog(Dog const &);
		~Dog(void);

		Dog	&operator=(Dog const &);

		void	makeSound(void) const;
};

#endif
