/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:20:21 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/19 15:54:46 by owalsh           ###   ########.fr       */
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
		static const int	_fixed_point_fractional_bits;
		
	public:
		Fixed();
		Fixed( Fixed const & rhs );
		Fixed( int const n);
		Fixed( float const n );
		~Fixed();
		
		Fixed & operator=( Fixed const & rhs );

		int getRawBits( void ) const;
		void setRawBits( int const raw );

		float toFloat( void ) const;
		int toInt( void ) const;
};

// Cannot be a member function since ostream is an existing class
std::ostream & operator<<(std::ostream & o, Fixed const & rhs);
#endif