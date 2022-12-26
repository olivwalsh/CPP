/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:20:21 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/19 16:11:24 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

#ifndef FIXED_H
#define FIXED_H

class Fixed
{
	private:
		int					_raw_bits;
		static const int	_fixed_point_fractional_bits = 8;
		
	public:
		Fixed();								// Canonical
		Fixed( int const n);					
		Fixed( float const n );
		Fixed( Fixed const & rhs );				// Canonical
		~Fixed();								// Canonical
		
		Fixed & operator=( Fixed const & rhs ); // Canonical
		
		Fixed operator+( Fixed const & rhs ) const;
		Fixed operator-( Fixed const & rhs ) const;
		Fixed operator*( Fixed const & rhs ) const;
		Fixed operator/( Fixed const & rhs ) const;

		bool operator>( Fixed const & rhs) const;
		bool operator<( Fixed const & rhs) const;
		bool operator>=( Fixed const & rhs) const;
		bool operator<=( Fixed const & rhs) const;
		bool operator==( Fixed const & rhs) const;
		bool operator!=( Fixed const & rhs) const;

		Fixed & operator++( void );
		Fixed operator++( int );
		Fixed & operator--( void );
		Fixed operator--( int );

		static Fixed &min( Fixed & f1, Fixed & f2);
		static const Fixed &min( Fixed const & f1, Fixed const & f2);
		static Fixed &max( Fixed & f1, Fixed & f2);
		static const Fixed &max( Fixed const & f1, Fixed const & f2);
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );

		float toFloat( void ) const;
		int toInt( void ) const;
};

// Cannot be a member function since ostream is an existing class
std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
