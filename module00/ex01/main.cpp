/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:28:46 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/06 19:20:17 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

int	main()
{
	PhoneBook	phonebook;
	std::string	input;

	while (true)
	{
		std::cout << "Awesome Phonebook: what would you like to do? (ADD, SEARCH or EXIT)" << std::endl;
		std::cin >> input;
		if (!input.compare("ADD"))
		{
			std::cout << "Add a contact" << std::endl;
		}
		else if (!input.compare("SEARCH"))
		{
			std::cout << "Search a contact" << std::endl;
		}
		else if (!input.compare("EXIT"))
			break;
		else
			std::cout << "Awesome Phonebook: unknown command" << std::endl;
	}
	return (0);
}