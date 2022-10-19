/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:25:06 by jhii              #+#    #+#             */
/*   Updated: 2022/10/19 15:47:36 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

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

template <typename T> void swap(T &x, T &y)
{
	T	temp;
	temp = x;
	x = y;
	y = temp;
}

template <typename T> T min(T x, T y)
{
	if (x < y)
		return (x);
	else if (y < x)
		return (y);
	else
		return (y);
}

template <typename T> T max(T x, T y)
{
	if (x > y)
		return (x);
	else if (y > x)
		return (y);
	else
		return (y);
}

#endif
