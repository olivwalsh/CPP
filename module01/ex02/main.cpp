/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:30:34 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/13 13:47:16 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;
	// std::string& stringREF; // IMPOSSIBLE
	
	std::cout << "Adresse de la string en memoire: " << &str << std::endl;	
	std::cout << "Adresse stockée dans stringPTR: " << stringPTR << std::endl;	
	std::cout << "Adresse stockée dans stringREF: " << &stringREF << std::endl;

	std::cout << "Valeur de la string: " << str << std::endl;
	std::cout << "Valeur pointée par stringPTR: " << *stringPTR << std::endl;	
	std::cout << "Valeur pointée par stringREF: " << stringREF << std::endl;

	return (0);
}
