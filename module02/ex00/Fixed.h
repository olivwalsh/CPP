/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:20:21 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/14 18:54:43 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
	private:
		int					_rawBits;
		static const int	_remainder = 8;
		
	public:
		Fixed();
		Fixed( Fixed const & rhs );
		~Fixed();
		
		Fixed & operator=( Fixed const & rhs );
		// Fixed	operator+( Fixed const & rhs ) const;

		int getRawBits( void ) const;
		void setRawBits( int const raw );
};


