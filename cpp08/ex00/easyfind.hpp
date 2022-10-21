/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:25:06 by jhii              #+#    #+#             */
/*   Updated: 2022/10/21 20:06:12 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# define RESET		"\033[0m"
# define BLACK		"\033[30m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define MAGENTA	"\033[35m"
# define CYAN		"\033[36m"
# define WHITE		"\033[37m"

# include <fstream>
# include <iostream>

template <class T> class Array
{
	private:
		T		*_arr;
		size_t	_size;

		class	OutOfBoundsException: public std::exception
		{ virtual const char	*what(void) const throw(); };

	public:
		Array(void);
		Array(size_t);
		Array(Array const &);
		~Array(void);

		Array 	&operator=(Array const &);
		T		&operator[](size_t);

		size_t	getSize(void) const;
};

template <typename T> void easyfind(Array<T> &arr, T needle)
{
	int	count = std::count(&arr[0], &arr[arr.getSize() - 1], needle);
	if (count)
	{
		std::cout << GREEN "SUCCESS" RESET;
		std::cout << CYAN " easyfind " RESET;
		std::cout << BLUE << needle << RESET;
		std::cout << CYAN << " : Array[" << RESET;
		for (size_t i = 0; i < arr.getSize() - 1; i++)
			std::cout << CYAN << arr[i] << ", " << RESET;
		std::cout << CYAN << arr[arr.getSize() - 1] << "]" << RESET << std::endl;
	}
	else
	{
		std::cout << RED "FAILURE" RESET;
		std::cout << CYAN " easyfind " RESET;
		std::cout << BLUE << needle << RESET;
		std::cout << CYAN << " : Array[" << RESET;
		for (size_t i = 0; i < arr.getSize() - 1; i++)
			std::cout << CYAN << arr[i] << ", " << RESET;
		std::cout << CYAN << arr[arr.getSize() - 1] << "]" << RESET << std::endl;
	}
}

#endif
