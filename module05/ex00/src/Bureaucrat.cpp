/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 18:13:29 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/28 18:20:49 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("no name"), _grade(150)
{
	std::cout << "Bureaucrat was created" << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat & rhs )
{
	*this = rhs;	
	std::cout << "Bureaucrat was created" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat was destroyed" << std::endl;
}

Bureaucrat & Bureaucrat::operator=( const Bureaucrat & rhs )
{
	_name = rhs.getName();
	_grade = rhs.getGrade();
	std::cout << "Bureaucrat was created" << std::endl;
}

std::string const	Bureaucrat::getName(void) const
{
	return _name;
}

int					Bureaucrat::getGrade(void) const
{
	return _grade;
}
