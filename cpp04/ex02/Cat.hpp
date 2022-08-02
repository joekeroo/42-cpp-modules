/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:39:42 by jhii              #+#    #+#             */
/*   Updated: 2022/08/02 14:35:02 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

// private attributes must start with an underscore (_)
class	Cat: public AAnimal
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
