/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 15:27:28 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/29 16:17:26 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, const int grade_to_sign, const int grade_to_execute)
	:	_name(name), _signed(false), \
		_grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute)
{
	std::cout << "Form " << name << " was created" << std::endl;
}

Form::Form( const Form & rhs)
{
	*this = rhs;
}

Form::~Form()
{
	
}

Form & Form::operator=(const Form & rhs)
{
	_name = rhs.getName();
	_signed = rhs.isSigned();
	_grade_to_sign = rhs.getSignatureGrade();
	_grade_to_execute = rhs.getExecutionGrade();
}

const std::string Form::getName() const
{
	return _name;
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
	if (ref.isSigned())
		o << " is signed ";
	else
		o << " is not signed";
	o << ". Minimum grade required to sign this form is: " << ref.getSignatureGrade();
	o << ". Minimum grade required to execute this form is: " << ref.getExecutionGrade();
	return o;
}

void Form::beSigned( const Bureaucrat & ref )
{
	if (ref.getGrade() <= this->getSignatureGrade())
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

const char * Form::GradeTooLowException::what() const throw()
{
	return "Bureaucrat's grade is too low to sign this form";
}
