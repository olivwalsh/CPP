/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:28:46 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/08 18:31:36 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"


int	main()
{
	PhoneBook	phonebook;
	std::string	input;

	std::cout << "Awesome Phonebook: what would you like to do? (ADD, SEARCH or EXIT)" << std::endl;
	while (std::getline(std::cin, input))
	{
		if (!input.compare("ADD"))
		{
			std::cout << "Add a contact" << std::endl;
			phonebook.addContact();
		}
		else if (!input.compare("SEARCH"))
		{
			std::cout << "Search a contact" << std::endl;
		}
		else if (!input.compare("EXIT"))
			break;
		else
			std::cout << "unknown command" << std::endl;
		std::cout << "Awesome Phonebook: what would you like to do? (ADD, SEARCH or EXIT)" << std::endl;
	}
	phonebook.displayPhoneBook();
	return (0);
}