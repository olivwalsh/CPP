/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 15:27:28 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/31 14:24:21 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void)
	:	_name("untitled"),
		_target("no target"),
		_signed(false),
		_grade_to_sign(Bureaucrat::lowestGrade),
		_grade_to_execute(Bureaucrat::lowestGrade)
{

}

Form::Form(std::string name, const int grade_to_sign, const int grade_to_execute)
	:	_name(name),
		_target("no target"),
		_signed(false),
		_grade_to_sign(grade_to_sign),
		_grade_to_execute(grade_to_execute)
{
	if (grade_to_sign < Bureaucrat::highestGrade
		|| grade_to_execute < Bureaucrat::highestGrade)
		throw Form::GradeTooHighException();
	else if (grade_to_sign > Bureaucrat::lowestGrade
		|| grade_to_execute > Bureaucrat::lowestGrade)
		throw Form::GradeTooLowException();
}

Form::Form(std::string name, const int grade_to_sign, const int grade_to_execute, std::string target)
	:	_name(name),
		_target(target),
		_signed(false),
		_grade_to_sign(grade_to_sign),
		_grade_to_execute(grade_to_execute)
{
	if (grade_to_sign < Bureaucrat::highestGrade
		|| grade_to_execute < Bureaucrat::highestGrade)
		throw Form::GradeTooHighException();
	else if (grade_to_sign > Bureaucrat::lowestGrade
		|| grade_to_execute > Bureaucrat::lowestGrade)
		throw Form::GradeTooLowException();
}

Form::Form( const Form & rhs)
	:	_name(rhs.getName()),
		_target(rhs.getTarget()),
		_signed(rhs.isSigned()),
		_grade_to_sign(rhs.getSignatureGrade()),
		_grade_to_execute(rhs.getExecutionGrade())
{
}

Form::~Form()
{
}

Form & Form::operator=(const Form & rhs)
{
	// std::string *_name = (std::string *)&this->_name;
	// int			*_grade_to_sign = (int *)&this->_grade_to_sign;
	// int			*_grade_to_execute = (int *)&this->_grade_to_execute;

	_signed = rhs.isSigned();
	_target = rhs.getTarget();
	// *_name = rhs.getName();
	// *_grade_to_sign = rhs.getSignatureGrade();
	// *_grade_to_execute = rhs.getExecutionGrade();
	return *this;
}

const std::string Form::getName() const
{
	return _name;
}

std::string	Form::getTarget() const
{
	return _target;
}

bool Form::isSigned() const
{
	return _signed;
}

int Form::getSignatureGrade() const
{
	return _grade_to_sign;
}

int Form::getExecutionGrade() const
{
	return _grade_to_execute;
}

std::ostream & operator<<(std::ostream & o, const Form & ref)
{
	o << "Form " << ref.getName();
	o << " is " << (ref.isSigned() ? "" : "not ") << "signed";
	o << ".\ngrade to sign: " << ref.getSignatureGrade();
	o << "\ngrade to execute: " << ref.getExecutionGrade() << std::endl;
	return o;
}

void Form::beSigned( const Bureaucrat & ref )
{
	if (_signed)
		std::cout << "Form already signed!" << std::endl;
	else if (ref.getGrade() <= this->getSignatureGrade())
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

void Form::beExecuted( const Bureaucrat & ref ) const
{
	if (!this->isSigned())
		throw Form::FormIsNotSignedException();
	if (ref.getGrade() > this->getExecutionGrade())
		throw Form::GradeTooLowException();
}

const char * Form::GradeTooLowException::what() const throw()
{
	return "Grade too low!";
}

const char * Form::GradeTooHighException::what() const throw()
{
	return "Grade too high!";
}

const char * Form::FormIsNotSignedException::what() const throw()
{
	return "Form is not signed!";
}
