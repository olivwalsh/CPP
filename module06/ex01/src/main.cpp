/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 13:02:34 by owalsh            #+#    #+#             */
/*   Updated: 2023/01/02 13:33:11 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int	main(void)
{
	Data		*ptr1 = new Data(42, 4242, 42.42);
	Data		*ptr2;

	ptr2 = deserialize(serialize(ptr1));

	std::cout << "ptr1: " << ptr1 << " serialized: " << serialize(ptr1) << std::endl;
	std::cout << "  values: char: " << ptr1->getChar() 
						<< " int: " << ptr1->getInt()
						<< " double: " << ptr1->getDouble()
				<< std::endl;
	
	std::cout << "ptr2: " << ptr2 << " serialized: " << serialize(ptr2) << std::endl;
	std::cout << "  values: char: " << ptr2->getChar()
						<< " int: " << ptr2->getInt()
						<< " double: " << ptr2->getDouble()
				<< std::endl;

	delete ptr1;

}