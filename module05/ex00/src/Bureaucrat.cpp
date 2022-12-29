/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 18:13:29 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/29 15:24:41 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("no name"), _grade(lowestGrade)
{
	std::cout << "Bureaucrat " << this->getName() << " with grade " << this->getGrade() << " was created" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, const int grade)
	: _name(name), _grade(grade)
{
	if (grade < highestGrade)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > lowestGrade)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Bureaucrat " << this->getName() << " at grade " << this->getGrade() << " was created" << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat & rhs )
{
	*this = rhs;	
	std::cout << "Bureaucrat was created by copy" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat was destroyed" << std::endl;
}

Bureaucrat & Bureaucrat::operator=( const Bureaucrat & rhs )
{
	_name = rhs.getName();
	_grade = rhs.getGrade();
	std::cout << "Bureaucrat was assigned to another Bureaucrat" << std::endl;
	return *this;
}

std::string Bureaucrat::getName(void) const
{
	return _name;
}

int Bureaucrat::getGrade(void) const
{
	return _grade;
}

void Bureaucrat::lowerGrade(void)
{
	if (this->_grade + 1 > lowestGrade)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += 1;
}

void Bureaucrat::upperGrade(void)
{
	if (this->_grade - 1 < highestGrade)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= 1;
}

const char *	Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high!";
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low!";
}

std::ostream & operator<<(std::ostream &o, const Bureaucrat & ref)
{
	o << ref.getName() << ", bureaucrat grade " << ref.getGrade() << ".";
	return o;
}
