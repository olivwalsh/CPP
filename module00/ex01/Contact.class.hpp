/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:24:34 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/10 17:57:21 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <iostream>

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;

	public:
		Contact(void);
		Contact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string	darkestSecret);
		~Contact(void);
		
		std::string	getFirstName() { return firstName; };
		std::string	getLastName() { return lastName; };
		std::string	getNickname() { return nickname; };
		std::string	getPhoneNumber() { return phoneNumber; };
		std::string	getDarkestSecret() { return darkestSecret; };
		void		setFirstName ( std::string inputFirstName ) { firstName = inputFirstName; };
		void		setLastName ( std::string inputLastName ) { lastName = inputLastName; };
		void		setNickname ( std::string inputNickname ) { nickname = inputNickname; };
		void		setPhoneNumber ( std::string inputPhoneNumber ) { phoneNumber = inputPhoneNumber; };
		void		setDarkestSecret ( std::string inputDarkestSecret ) { darkestSecret = inputDarkestSecret; };
		
		void	displayContact();
		

};

#endif