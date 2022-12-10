/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:26:32 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/10 17:58:01 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <cstdlib>

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

std::string	addInput(std::string info)
{
	std::string	input;
	
	while (true)
	{
		std::cout << info;
		std::getline (std::cin,input);
		if (std::cin.eof()) 
			quick_exit (1);
		if (input.empty())
			std::cout << "This field cannot be empty!" <<std::endl;
		else
			break;
	}
	return (input);
}

void	PhoneBook::addContact()
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;

	firstName = addInput("First name: ");
	lastName = addInput("Last name: ");
	nickname = addInput("Nickname: ");
	phoneNumber = addInput("Phone number: ");
	darkestSecret = addInput("Darkest secret: ");
	
	Contact newContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
	if (PhoneBook::contactsNb < 8)
	{
		PhoneBook::contacts[contactsNb] = newContact;
		PhoneBook::contactsNb++;
	}
	else
	{
		int i;
		for (i = 0; i < 7; i++)
			PhoneBook::contacts[i] = PhoneBook::contacts[i + 1];
		PhoneBook::contacts[i] = newContact;
	}
}

bool	is_digit(std::string input)
{
	for (unsigned long i = 0; i < input.length(); i++)
	{
		if (!isdigit(input[i]))
			return (false);
	}
	return (true);
}

void	PhoneBook::searchContact()
{
	std::string input;
	int	index;

	PhoneBook::displayPhoneBook();
	std::cout << "Provide the index of the contact you would like to be displayed." << std::endl;
	while (true)
	{
		std::stringstream	convert;
		std::getline (std::cin,input);
		if (std::cin.eof()) 
			exit (1);
		convert << input;
		convert >> index;
		if (input.empty())
			std::cout << "No index provided!" <<std::endl;
		else if (!is_digit(input))
			std::cout << "Input is not numeric" <<std::endl;
		else if (index >= PhoneBook::contactsNb)
			std::cout << "Index is out of range" << std::endl;
		else
			break;
	}
	PhoneBook::contacts[index].displayContact();
}

std::string	displayColumn(std::string text)
{
	std::string	spaces;
	int			textLen;

	spaces = "          ";
	textLen = text.length();
	if (textLen > 10)
		text = text.substr(0, 9) + ".";
	if (textLen < 10)
		spaces = spaces.substr(textLen, 10);
	else
		spaces = spaces.substr(0, 0);
	return (spaces + text);
}

void	PhoneBook::displayPhoneBook()
{
	
	std::string			index;

	if (PhoneBook::contactsNb == 0)
	{
		std::cout << "No contacts in PhoneBook" << std::endl;
		return ;
	}
	std::cout \
		<< displayColumn("index") << "|" \
		<< displayColumn("first name") << "|" \
		<< displayColumn("last name") << "|" \
		<< displayColumn("nickname") \
		<< std::endl;
	for (int i = 0; i < PhoneBook::contactsNb; i++)
	{
		std::stringstream	convert;
		convert << i;
		convert >> index;
		std::cout << displayColumn(index) << "|" \
			<< displayColumn(PhoneBook::contacts[i].getFirstName()) << "|" \
			<< displayColumn(PhoneBook::contacts[i].getLastName()) << "|" \
			<< displayColumn(PhoneBook::contacts[i].getNickname()) \
			<< std::endl;
	}
}
