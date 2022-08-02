/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:57:19 by jhii              #+#    #+#             */
/*   Updated: 2022/07/27 13:40:39 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# define RESET		"\033[0m"
# define BLACK		"\033[30m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define MAGENTA	"\033[35m"
# define CYAN		"\033[36m"
# define WHITE		"\033[37m"

# include <iostream>

// private attributes must start with an underscore (_)
class	WrongAnimal
{
	protected:
		std::string	_type;

	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &);
		~WrongAnimal(void);

		WrongAnimal	&operator=(WrongAnimal const &);

		virtual void	makeSound(void) const;
		std::string		getType(void) const;
};

std::ostream	&operator<<(std::ostream &, const WrongAnimal &);

#endif
