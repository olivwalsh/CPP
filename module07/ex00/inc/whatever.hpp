/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 17:33:20 by owalsh            #+#    #+#             */
/*   Updated: 2023/01/02 17:44:16 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

template<typename T>
T max( T const & x, T const & y)
{
	return ((x > y) ? x : y);
}

template<typename T>
T min( T const & x, T const & y)
{
	return ((x < y) ? x : y);
}

template<typename T>
void swap( T & x, T & y)
{
	T tmp;

	tmp = x;
	x = y;
	y = tmp;
}


#endif