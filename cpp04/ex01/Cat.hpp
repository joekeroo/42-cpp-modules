/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:39:42 by jhii              #+#    #+#             */
/*   Updated: 2022/08/01 18:25:54 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

// private attributes must start with an underscore (_)
class	Cat: public Animal
{
	private:
		Brain	*_catBrain;

	public:
		Cat(void);
		Cat(Cat const &);
		~Cat(void);

		Cat	&operator=(Cat const &);

		void	makeSound(void) const;
};

#endif
