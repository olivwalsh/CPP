/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 17:32:35 by owalsh            #+#    #+#             */
/*   Updated: 2023/01/03 19:35:24 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#define SIZE 10

int	main(void)
{
	int		array[SIZE];
	
	for (int i = 0; i < SIZE; ++i)
		array[i] = i;
	
	iter(array, SIZE, print);
	return 0;
}