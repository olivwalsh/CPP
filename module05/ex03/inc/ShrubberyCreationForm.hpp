/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 12:29:22 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/31 14:19:53 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include "Form.hpp"
# include <iostream>
# include <fstream>

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm( const ShrubberyCreationForm & rhs );
		virtual ~ShrubberyCreationForm();

		ShrubberyCreationForm & operator=(const ShrubberyCreationForm & rhs);

		void		execute(Bureaucrat const & executor) const;
};

#endif