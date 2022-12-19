/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:08:15 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/19 15:11:06 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.h"

#ifndef POINT_H
#define POINT_H

class Point
{
	private:
		Fixed const _x;	
		Fixed const _y;

	public:
		Point();
		Point( const float x, const float y);
		Point ( const Point & rhs);
		~Point();

		Point & operator=( const Point & rhs );

		float getX() const;
		float getY() const;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif