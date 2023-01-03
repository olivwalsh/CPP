/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 17:33:20 by owalsh            #+#    #+#             */
/*   Updated: 2023/01/03 18:07:40 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <cstdlib>

template<typename T>
void iter(T array[], int size, void (*fct)(T &))
{
	for (int i = 0; i < size; i++)
	{
		(*fct)(array[i]);
	}
}

template<typename T>
void print(T &a)
{
	std::cout << a << std::endl;
}


#endif