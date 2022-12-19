/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:12:15 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/19 15:14:19 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

// https://www.tutorialspoint.com/Check-whether-a-given-point-lies-inside-a-Triangle

bool	isTriangleEdge( Point vertex1, Point vertex2, Point cross )
{
	float deltaX_cross = cross.getX() - vertex1.getX();
	float deltaY_cross = cross.getY() - vertex1.getY();
	float deltaX_line = vertex2.getX() - vertex1.getX();
	float deltaY_line = vertex2.getY() - vertex1.getY();
	
	if ((deltaX_cross * deltaY_line) - (deltaY_cross * deltaX_line))
		return false;
	return true;
}

float	triangleArea( Point const p1, Point const p2, Point const p3 )
{
	float area;

	area = (p1.getX() * (p2.getY() - p3.getY())
		+ p2.getX() * (p3.getY() - p1.getY())
		+ p3.getX() * (p1.getY() - p2.getY())) / 2;
	if (area < 0)
		area *= -1;
	return (area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float	realArea = triangleArea(a, b, c);
	float	area1 = triangleArea(point, b, c);
	float	area2 = triangleArea(a, point, c);
	float	area3 = triangleArea(a, b, point);

	if (realArea == (area1 + area2 + area3) &&
		!isTriangleEdge(a, b, point) && 
		!isTriangleEdge(a, c, point) && 
		!isTriangleEdge(b, c, point))
		return true;
	return false;
}
