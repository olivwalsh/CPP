/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:19:42 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/19 15:20:00 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"
#include "Point.h"

#define TESTS 7

int main( void ) 
{
	const Point		a;
	const Point		b(10, 30);
	const Point		c(20, 0);

	std::cout << "Triangle edge A (" << a.getX() << "," << a.getY() << ")" << std::endl;
	std::cout << "Triangle edge B (" << b.getX() << "," << b.getY() << ")" << std::endl;
	std::cout << "Triangle edge C (" << c.getX() << "," << c.getY() << ")" << std::endl;
	std::cout << std::endl;
	
	Point			*points = new Point[TESTS];

	points[0] = Point(10, 15);
	points[1] = Point(30, 15);
	points[2] = Point(0, 0);
	points[3] = Point(10, 30);
	points[4] = Point(20, 0);
	points[5] = Point(15, 2);
	points[6] = Point(10, 29);


	for (int i = 0; i < TESTS; ++i) {
		std::cout << "init (" << points[i].getX() << ", " << points[i].getY() << ")" << std::endl;
	}
	std::cout << std::endl;

	for (int i = 0; i < TESTS; ++i) {
		std::cout << "point (" << points[i].getX() << ", " << points[i].getY() << ") ";
		if (bsp(a, b, c, points[i]))
			std::cout << "is inside." << std::endl;
		else
			std::cout << "is NOT inside." << std::endl;
	}

	delete [] points;
	return 0;
}
