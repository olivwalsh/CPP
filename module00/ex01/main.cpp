/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:28:46 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/09 11:38:51 by owalsh           ###   ########.fr       */
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
		std::cout << "\033[1;36m\u2794 \033[m Awesome Phonebook: what would you like to do? (ADD, SEARCH or EXIT)" << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof()) 
			exit (1);
		if (!input.compare("ADD"))
			phonebook.addContact();
		else if (!input.compare("SEARCH"))
			phonebook.searchContact();
		else if (!input.compare("EXIT"))
			break;
	}
	return (0);
}