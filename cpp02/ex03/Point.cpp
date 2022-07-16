/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:53:27 by jhii              #+#    #+#             */
/*   Updated: 2022/07/16 16:52:01 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): _x(0), _y(0) {}
Point::Point(float x, float y): _x(x), _y(y) {}
Point::~Point(void) {}
Point::Point(Point const &point): _x(point.getX()), _y(point.getY()) {}

float	Point::getX(void) const { return (this->_x.toFloat()); }
float	Point::getY(void) const { return (this->_y.toFloat()); }

Point	&Point::operator=(Point const &point)
{
	if (this == &point)
		*this = point;
	return (*this);
}
