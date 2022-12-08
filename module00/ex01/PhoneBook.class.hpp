/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:23:54 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/08 17:27:07 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.class.hpp"

class PhoneBook
{
public:

		PhoneBook(void);
		~PhoneBook(void);

		Contact	contacts[8];
		int		contactsNb;
		
		void	addContact();
		void	displayPhoneBook();
		
};

#endif
