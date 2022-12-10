/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:51:00 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/10 17:56:06 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact()
{
	return;
}

Contact::Contact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret) 
	: firstName(firstName), lastName(lastName), nickname(nickname), phoneNumber(phoneNumber), darkestSecret(darkestSecret)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

void	Contact::displayContact()
{
	std::cout << "Contact info:" << std::endl;
	std::cout << "first name: " << this->getFirstName() << std::endl;
	std::cout << "last name: " << this->getLastName() << std::endl;
	std::cout << "nickname: " << this->getNickname() << std::endl;
	std::cout << "phone number: " << this->getPhoneNumber() << std::endl;
	std::cout << "darkest secret: " << this->getDarkestSecret() << std::endl;
}
