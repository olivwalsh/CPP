/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 19:42:20 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/30 20:13:06 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{

}

Intern::Intern(const Intern & rhs)
{
	*this = rhs;
}

Intern::~Intern()
{
	
}
		
Intern & Intern::operator=(const Intern & rhs)
{
	(void)rhs;
	return *this;
}

struct nameToForm
{
	std::string name;
	Form		*form;
};

Form * Intern::makeForm(std::string formName, std::string target)
{
	nameToForm	map[] = {
		{"robotomy request", new RobotomyRequestForm(target)},
		{"shrubbery creation", new ShrubberyCreationForm(target)},
		{"presidential pardon", new PresidentialPardonForm(target)}
	};
	int found = -1;

	for (int i = 0; i < 3; i++)
	{
		if (formName != map[i].name)
			delete map[i].form;
		else
			found = i;
	}
	
	if (found == -1)
	{
		std::cout << "Intern could not find a form matching \"" << formName << "\" provided name" << std::endl;
		return NULL;
	}
	std::cout << "Intern creates " << formName << std::endl;
	return map[found].form;
}
