/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:08:15 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/17 21:11:12 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.h"

class Point
{
	private:
		Fixed const x;	
		Fixed const y;

	public:
		Point() : x(0), y(0) {};
		Point( const float f1, const float f2);
		Point ( const Point & rhs);
		~Point();

		Point & operator=( const Point & rhs );

		const Fixed getX();
		const Fixed getY();

};
