/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 13:38:54 by owalsh            #+#    #+#             */
/*   Updated: 2023/01/02 16:26:29 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <cstdlib>
# include <ctime>

class Base
{
	public:
		virtual ~Base();
};

class A : public Base
{
	public:
		A(void) { std::cout << "A constructor called" << std::endl; }
};

class B : public Base
{
	public:
		B(void) { std::cout << "B constructor called" << std::endl; }
};

class C : public Base
{
	public:
		C(void) { std::cout << "C constructor called" << std::endl; }
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);
