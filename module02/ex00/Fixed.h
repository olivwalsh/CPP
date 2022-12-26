/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:20:21 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/19 15:54:57 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef FIXED_H
#define FIXED_H

class Fixed
{
	private:
		int					_rawBits;
		const static int	_remainder;
		
	public:
		Fixed();
		Fixed( Fixed const & rhs );
		~Fixed();
		
		Fixed & operator=( Fixed const & rhs );

		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif