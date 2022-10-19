/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:25:06 by jhii              #+#    #+#             */
/*   Updated: 2022/10/19 16:23:20 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef iter_HPP
# define iter_HPP

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

template <typename T> void print(T &x)
{
	std::cout << x << std::endl;
}

template <typename T> void add(T &x)
{
	x++;
}

template <typename T> void minus(T &x)
{
	x--;
}

template <typename T> void iter(T x[], size_t size, void (*f)(T &))
{
	for (size_t i = 0; i < size; ++i)
		f(x[i]);
}

#endif
