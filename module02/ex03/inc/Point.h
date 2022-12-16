/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:08:15 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/16 17:41:31 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.h"

class Point
{
	private:
		const Fixed x;	
		const Fixed y;

	public:
		Point() : x(0), y(0) {};
		Point( const float f1, const float f2);
		Point ( const Point & rhs);
		~Point();


};
