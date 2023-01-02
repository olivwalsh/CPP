/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 13:40:16 by owalsh            #+#    #+#             */
/*   Updated: 2023/01/02 14:15:34 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{

}

Base * generate(void)
{
	std::srand(std::time(NULL));

	int		id = std::rand() % 3;
	
	if (id == 0)
		return new A();
	if (id == 1)
		return new B();
	if (id == 2)
		return new C();

	return NULL;
}

void identify(Base* p)
{
	A * a = dynamic_cast<A *>(p);
	B * b = dynamic_cast<B *>(p);
	C * c = dynamic_cast<C *>(p);
	
	if (a != NULL)
		std::cout << "A" << std::endl;
	else if (b != NULL)
		std::cout << "B" << std::endl;
	else if (c != NULL)
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A & a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		(void)a;
		return ;
	}
	catch(const std::exception& e)
	{
		// std::cerr << e.what() << '\n';
	}
	try
	{
		B & b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		(void)b;
		return ;
	}
	catch(const std::exception& e)
	{
		// std::cerr << e.what() << '\n';
	}
	try
	{
		C & c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		(void)c;
		return ;
	}
	catch(const std::exception& e)
	{
		// std::cerr << e.what() << '\n';
	}
}
