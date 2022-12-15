/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:20:51 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/15 13:10:14 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

//---------------- EX 00 ----------------
Fixed::Fixed() : _raw_bits( 0 )
{
	this->_raw_bits = 0;
}

Fixed::Fixed( Fixed const & rhs )
{
	*this = rhs;
}

Fixed::~Fixed()
{
}

// Surcharge de l’opérateur d’affectation
Fixed & Fixed::operator=( Fixed const & rhs)
{
	this->_raw_bits = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	return (this->_raw_bits);
}

void Fixed::setRawBits( int const raw )
{
	this->_raw_bits = raw;
}


//---------------- EX 01 ----------------
//
// https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/

Fixed::Fixed( int const n )
{
	this->setRawBits( n << this->_fixed_point_fractional_bits);
}

Fixed::Fixed( float const n )
{
	this->setRawBits((int)(roundf(n * (1 << this->_fixed_point_fractional_bits))));
}

float Fixed::toFloat( void ) const
{
	return ((float)(this->getRawBits() / (float)(1 << this->_fixed_point_fractional_bits)));
}

int Fixed::toInt( void ) const
{
	return (this->getRawBits() >> this->_fixed_point_fractional_bits);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}


//---------------- EX 02 ----------------


bool Fixed::operator>( Fixed const & rhs)
{
	if (this->_raw_bits > rhs.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<( Fixed const & rhs)
{
	if (this->_raw_bits < rhs.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>=( Fixed const & rhs)
{
	if (this->_raw_bits >= rhs.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<=( Fixed const & rhs)
{
	if (this->_raw_bits <= rhs.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator==( Fixed const & rhs)
{
	if (this->_raw_bits == rhs.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator!=( Fixed const & rhs)
{
	if (this->_raw_bits != rhs.getRawBits())
		return (true);
	return (false);
}

Fixed Fixed::operator+( Fixed const & rhs)
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator*( Fixed const & rhs)
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/( Fixed const & rhs)
{
	return Fixed(this->toFloat() / rhs.toFloat());
}