/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:08:10 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/17 21:13:57 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

Point::Point() : x(0), y(0) 
{
	
}

Point::Point( const float x1, const float y1) : x(x1), y(y1)
{

}

Point::Point ( const Point & rhs)
{
	*this = rhs;
}

Point & Point::operator=( const Point & rhs )
{
	return *this;
}

Point::~Point()
{
	
}

const Fixed Point::getX()
{
	return x;
}

const Fixed Point::getY()
{
	return y;
}
