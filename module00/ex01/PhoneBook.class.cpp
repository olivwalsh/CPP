/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:26:32 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/08 17:31:12 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	this->contactsNb = 0;
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

void	PhoneBook::addContact()
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;

	std::cout << "Enter new contact information: " << std::endl;
	std::cout << "First name: " << std::endl;
	std::cin >> firstName;
	std::cout << "Last name: " << std::endl;
	std::cin >> lastName;
	std::cout << "Nickname: " << std::endl;
	std::cin >> nickname;
	std::cout << "Phone number: " << std::endl;
	std::cin >> phoneNumber;
	std::cout << "Darkest secret: " << std::endl;
	std::cin >> darkestSecret;
	
	Contact newContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
	if (PhoneBook::contactsNb < 8)
		PhoneBook::contacts[contactsNb] = newContact;
	else
		std::cout << "Phonebook is full" << std::endl;
	PhoneBook::contactsNb++;
}

void	PhoneBook::displayPhoneBook()
{
	std::cout << "PhoneBook contains following contact" << std::endl;
	for (int i = 0; i < PhoneBook::contactsNb; i++)
		PhoneBook::contacts[i].displayContact();
}
