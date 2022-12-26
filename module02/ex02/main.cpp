/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:19:42 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/19 16:49:23 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

int main( void ) 
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	std::cout << "a before assignation : " << a << std::endl;
	a = Fixed(1234.4321f);
	std::cout << "a after assignation :  " << a << std::endl;
	std::cout << std::endl;

	std::cout << "a :       " << a << std::endl;
	std::cout << "a (int) : " << a.toInt() << std::endl;
	std::cout << "b :       " << b << std::endl;
	std::cout << "a (int) : " << b.toInt() << std::endl;
	std::cout << "c :       " << c << std::endl;
	std::cout << "a (int) : " << c.toInt() << std::endl;
	std::cout << "d :       " << d << std::endl;
	std::cout << "a (int) : " << d.toInt() << std::endl;
	std::cout << std::endl;

	std::cout << b << " <  " << c << " : " << (b < c) << std::endl;
	std::cout << b << " <= " << c << " : " << (b <= c) << std::endl;
	std::cout << b << " >  " << c << " : " << (b > c) << std::endl;
	std::cout << b << " >= " << c << " : " << (b >= c) << std::endl;
	std::cout << Fixed(c) << " <= " << c << " : " << (Fixed(c) <= c) << std::endl;
	std::cout << Fixed(c) << " >= " << c << " : " << (Fixed(c) >= c) << std::endl;
	std::cout << Fixed(10) << " == " << b << " : " << (Fixed(10) == b) << std::endl;
	std::cout << Fixed(10) << " != " << b << " : " << (Fixed(10) != b) << std::endl;
	std::cout << Fixed(10.01f) << " == " << b << " : " << (Fixed(10.01f) == b) << std::endl;
	std::cout << Fixed(10.01f) << " != " << b << " : " << (Fixed(10.01f) != b) << std::endl;
	std::cout << std::endl;

	std::cout << c << " + " << Fixed(34) << " : " << (c + Fixed(34)) << std::endl;
	std::cout << c << " - (" << Fixed(-34.45f) << ") : " << (c - Fixed(-34.45f)) << std::endl;
	std::cout << c << " * " << Fixed(2) << " : " << (c * Fixed(2)) << std::endl;
	std::cout << c << " / " << Fixed(2) << " : " << (c / Fixed(2)) << std::endl;
	// std::cout << c << " / " << Fixed(0) << " : " << (c / Fixed(0)) << std::endl;
	std::cout << std::endl;

	a = Fixed(0);
	std::cout << "a before post incrementation : " << a++ << std::endl;
	std::cout << "a after post incrementation :  " << a << std::endl;
	std::cout << "a after pre incrementation :   " << ++a << std::endl;
	std::cout << "a after pre decrementation :   " << --a << std::endl;
	std::cout << "a before post decrementation : " << a-- << std::endl;
	std::cout << "a after post decrementation :  " << a << std::endl;
	std::cout << std::endl;

	std::cout << "min(" << c << ", " << b << ") : " << Fixed::min(c, b) << std::endl;
	std::cout << "max(" << c << ", " << b << ") : " << Fixed::max(c, b) << std::endl;
	std::cout << "a :       " << Fixed(-1.5f) << std::endl;
}
