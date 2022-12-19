/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:08:10 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/19 14:17:11 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

Point::Point() : _x(0), _y(0) 
{
	
}

Point::Point( const float x, const float y) : _x(x), _y(y)
{

}

Point::Point ( const Point & rhs)
{
	*this = rhs;
}

Point & Point::operator=( const Point & rhs )
{
	// if (this == &rhs)
	// 	return *this;
	
	Fixed *x = (Fixed *)&this->_x;
	Fixed *y = (Fixed *)&this->_y;
	
	*x = rhs._x;
	*y = rhs._y;
	return *this;
}

Point::~Point()
{
	
}

const Fixed Point::getX() const
{
	return _x;
}

const Fixed Point::getY() const
{
	return _y;
}
