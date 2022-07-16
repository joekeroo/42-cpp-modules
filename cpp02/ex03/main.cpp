/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:31:58 by jhii              #+#    #+#             */
/*   Updated: 2022/07/16 16:51:06 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// BSP - Binaryspace partitioning
int	main(void)
{
	Point	p1(1, 5), p2(5, 5), p3(5, 1);
	Point	point(2, 4);

	std::cout << "point(" << point.getX() << ", " << point.getY() << ")";
	if (bsp(p1, p2, p3, point))
		std::cout << " in triangle" << std::endl;
	else
		std::cout << " not in triangle" << std::endl;
	return (0);
}
