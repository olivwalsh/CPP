/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:20:51 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/19 15:31:33 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed() : _raw_bits( 0 )
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const & rhs )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

// https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/

Fixed::Fixed( int const n )
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits( n << this->_fixed_point_fractional_bits);
}

Fixed::Fixed( float const n )
{
	std::cout << "Float constructor called" << std::endl;
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

// Surcharge de l’opérateur d’affectation
Fixed & Fixed::operator=( Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_raw_bits = rhs.getRawBits();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}

int Fixed::getRawBits( void ) const
{
	return (this->_raw_bits);
}

void Fixed::setRawBits( int const raw )
{
	this->_raw_bits = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

const int Fixed::_fixed_point_fractional_bits = 8;