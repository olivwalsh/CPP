/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 13:04:43 by owalsh            #+#    #+#             */
/*   Updated: 2023/01/02 13:25:00 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
	:	_c(0), _i(0), _d(0)
{
	
}

Data::Data(char c, int i, double d)
	:	_c(c), _i(i), _d(d)
{
	
}

Data::Data(const Data &rhs)
{
	*this = rhs;
}

Data::~Data()
{
}

Data & Data::operator=(const Data &rhs)
{
	_c = rhs._c;
	_i = rhs._i;
	_d = rhs._d;
	return *this;
}

char Data::getChar() const
{
	return _c;
}

int Data::getInt() const
{
	return _i;	
}

double Data::getDouble() const
{
	return _d;
}

uintptr_t	serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}