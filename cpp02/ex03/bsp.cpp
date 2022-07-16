/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:53:18 by jhii              #+#    #+#             */
/*   Updated: 2022/07/16 15:57:21 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float	sign(Point const p1, Point const p2, Point const p3)
{
	float	result;
	float	a, b, c, d;

	a = p1.getX() - p3.getX();
	b = p2.getY() - p3.getY();
	c = p2.getX() - p3.getX();
	d = p1.getY() - p3.getY();
	result = (a * b) - (c * d);
    return (result);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	d1, d2, d3;
    bool	hasNegative, hasPositive;

    d1 = sign(point, a, b);
    d2 = sign(point, b, c);
    d3 = sign(point, c, a);

    hasNegative = (d1 <= 0) || (d2 <= 0) || (d3 <= 0);
    hasPositive = (d1 >= 0) || (d2 >= 0) || (d3 >= 0);

    return !(hasNegative && hasPositive);
}
