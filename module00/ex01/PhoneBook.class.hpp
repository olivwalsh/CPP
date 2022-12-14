/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:23:54 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/10 17:28:33 by owalsh           ###   ########.fr       */
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
		void	searchContact();
		void	displayPhoneBook();
		
};

#endif
