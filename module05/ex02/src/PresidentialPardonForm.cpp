/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 12:28:58 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/31 14:30:24 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
	: Form("Presidential Pardon", 25, 5, "untitled target")
{
	
}

		
PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: Form("Presidential Pardon", 25, 5, target)
{
	
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & rhs )
	: Form(rhs)
{
	
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & rhs)
{
	Form::operator=(rhs);
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	this->beExecuted(executor);
	std::cout << this->getTarget() << " has been forgiven by Zaphod Beeblebrox" << std::endl;
}
