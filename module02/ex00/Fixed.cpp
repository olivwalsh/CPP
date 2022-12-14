/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:20:51 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/14 18:56:12 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed() : _rawBits( 0 )
{
	this->_rawBits = 0;
	std::cout << "Default constructor called" << std::endl;
}

// Constructeur de recopie
Fixed::Fixed( Fixed const & rhs )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

Fixed::~Fixed()
{
	std::cout << "Deconstructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_rawBits);
}

// Surcharge de l’opérateur d’affectation
Fixed & Fixed::operator=( Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_rawBits = rhs.getRawBits();
	return *this;
}

void Fixed::setRawBits( int const raw )
{
	this->_rawBits = raw;
}
