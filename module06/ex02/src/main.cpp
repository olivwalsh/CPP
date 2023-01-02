/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 13:39:49 by owalsh            #+#    #+#             */
/*   Updated: 2023/01/02 14:01:12 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main(void)
{
	Base	*ptr = generate();
	Base	&ref = *ptr;

	std::cout << "Identify by ptr: ";
	identify(ptr);
	
	std::cout << "Identify by ref: ";
	identify(ref);

	delete ptr;

	return 0;
}

