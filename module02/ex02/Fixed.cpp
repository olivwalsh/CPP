/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:20:51 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/19 16:39:30 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

//---------------- EX 00 ----------------
Fixed::Fixed() : _raw_bits( 0 )
{

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


bool Fixed::operator>( Fixed const & rhs) const
{
	if (this->toFloat() > rhs.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator<( Fixed const & rhs) const
{
	if (this->toFloat() < rhs.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator>=( Fixed const & rhs) const
{
	if (this->toFloat() >= rhs.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator<=( Fixed const & rhs) const
{
	if (this->toFloat() <= rhs.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator==( Fixed const & rhs) const
{
	if (this->toFloat() == rhs.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator!=( Fixed const & rhs) const
{
	if (this->toFloat() != rhs.toFloat())
		return (true);
	return (false);
}

Fixed Fixed::operator+( Fixed const & rhs) const
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-( Fixed const & rhs) const
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*( Fixed const & rhs) const
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/( Fixed const & rhs) const
{
	if (rhs.toFloat() == 0.0)
	{
		std::cout << "Cannot divide a number by zero" << std::endl;
		exit(1);
	}
	return Fixed(this->toFloat() / rhs.toFloat());
}

// https://en.cppreference.com/w/cpp/language/operator_incdec

// pre increment
Fixed & Fixed::operator++( void )
{
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}

// post increment
Fixed Fixed::operator++( int )
{
	Fixed temp = *this;
	
	this->setRawBits(this->getRawBits() + 1);
	return temp;
}

// pre decrement
Fixed & Fixed::operator--( void )
{
	this->setRawBits(this->getRawBits() -1);
	return *this;
}

// post decrement
Fixed Fixed::operator--( int )
{
	Fixed temp = *this;
	
	this->setRawBits(this->getRawBits() - 1);
	return temp;
}

const Fixed &Fixed::max( Fixed const & f1, Fixed const & f2)
{
	
	if (f1 > f2)
		return f1;
	return f2;
}

const Fixed &Fixed::min( Fixed const & f1, Fixed const & f2)
{
	
	if (f1 < f2)
		return f1;
	return f2;
}

Fixed &Fixed::max( Fixed & f1, Fixed & f2)
{
	
	if (f1.toFloat() > f2.toFloat())
		return f1;
	return f2;
}

Fixed &Fixed::min( Fixed & f1, Fixed & f2)
{
	
	if (f1.toFloat() < f2.toFloat())
		return f1;
	return f2;
}
