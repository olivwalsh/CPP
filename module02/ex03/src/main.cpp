/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:19:42 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/19 14:42:04 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"
#include "Point.h"

int main( void ) 
{
	Point p1; 
	Point p2(20.0, 0.0), p3(10.0, 30.0);
	
	Point p(10.0, 30.0);
	// Point p(60.0, 70.0);
	if (bsp(p1, p2, p3, p))
		std::cout << "Point is inside the triangle" << std::endl;
	else
		std::cout << "Point is NOT inside the triangle" << std::endl;
	return 0;
}
