/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:26:32 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/08 19:28:38 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>

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
	std::cout << "First name: ";
	std::cin >> firstName;
	std::cout << "Last name: ";
	std::cin >> lastName;
	std::cout << "Nickname: ";
	std::cin >> nickname;
	std::cout << "Phone number: ";
	std::cin >> phoneNumber;
	std::cout << "Darkest secret: ";
	std::cin >> darkestSecret;
	
	Contact newContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
	if (PhoneBook::contactsNb < 8)
		PhoneBook::contacts[contactsNb] = newContact;
	else
		std::cout << "Phonebook is full" << std::endl;
	PhoneBook::contactsNb++;
}

std::string	displayColumn(std::string text)
{
	std::string	spaces;
	int			textLen;

	spaces = "          ";
	textLen = text.length();
	if (textLen > 10)
		text = text.substr(0, 9) + ".";
	spaces = spaces.substr(textLen, 10);
	// std::cout << text << spaces;
	return (text + spaces);
}

void	PhoneBook::displayPhoneBook()
{
	std::stringstream	convert;
	std::string			index;

	if (PhoneBook::contactsNb == 0)
	{
		std::cout << "No contacts in PhoneBook" << std::endl;
		return ;
	}
	std::cout << "PhoneBook contains following contact" << std::endl;
	std::cout << "index     |first name|last name |nickname  " << std::endl;
	for (int i = 0; i < PhoneBook::contactsNb; i++)
	{
		convert << i;
		convert >> index;
		std::cout << displayColumn(index) << "|" \
			<< displayColumn(PhoneBook::contacts[i].firstName) << "|" \
			<< displayColumn(PhoneBook::contacts[i].lastName) << "|" \
			<< displayColumn(PhoneBook::contacts[i].nickname) \
			<< std::endl;
	}
		// PhoneBook::contacts[i].displayContact();
	
}
