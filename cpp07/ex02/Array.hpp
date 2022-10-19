/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:56:16 by jhii              #+#    #+#             */
/*   Updated: 2022/10/19 18:21:47 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

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

template <class T> class Array
{
	private:
		T				*_arr;
		unsigned int	_size;

		class	OutOfBoundsException: public std::exception
		{ virtual const char	*what(void) const throw(); };

	public:
		Array(void);
		Array(unsigned int);
		Array(Array const &);
		~Array(void);

		Array	&operator=(Array const &);
		T		&operator[](unsigned int);

		unsigned int	size(void) const;
};

#endif
