/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:12:15 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/19 14:42:57 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

// https://www.tutorialspoint.com/Check-whether-a-given-point-lies-inside-a-Triangle

float	triangleArea( Point const p1, Point const p2, Point const p3 )
{
	float area;

	area = (p1.getX().toFloat() * (p2.getY().toFloat() - p3.getY().toFloat())
		+ p2.getX().toFloat() * (p3.getY().toFloat() - p1.getY().toFloat())
		+ p3.getX().toFloat() * (p1.getY().toFloat() - p2.getY().toFloat())) / 2;
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

	if (realArea == (area1 + area2 + area3))
		return true;
	return false;
}
