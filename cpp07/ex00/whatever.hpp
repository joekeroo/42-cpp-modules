/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:25:06 by jhii              #+#    #+#             */
/*   Updated: 2022/10/19 15:51:45 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

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
