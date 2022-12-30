/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 12:29:06 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/30 15:50:46 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	:	Form("robotomy", 72, 45),
		_name("robotomy"),
		_grade_to_sign(72),
		_grade_to_execute(45)
{
	(void)target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & rhs)
	:	Form(rhs),
		_name(rhs.getName()),
		_signed(rhs.isSigned()),
		_grade_to_sign(rhs.getSignatureGrade()),
		_grade_to_execute(rhs.getExecutionGrade())
{
	
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & rhs)
{
	std::string	*_name = (std::string *)&this->_name;
	int			*_grade_to_sign = (int *)&this->_grade_to_sign;
	int			*_grade_to_execute = (int *)&this->_grade_to_execute;
	
	*_name = rhs.getName();
	_signed = rhs.isSigned();
	*_grade_to_sign = rhs.getSignatureGrade();
	*_grade_to_execute = rhs.getExecutionGrade();
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->isSigned())
		throw Form::FormIsNotSignedException();
	if (executor.getGrade() > this->getExecutionGrade())
		throw Form::GradeTooLowException();
	std::cout << " *Bruit de perceuse* " << std::endl;
	int random = rand();
	if (random % 2)
		std::cout << "Target has been robotomized" << std::endl;
	else
		std::cout << "Failed to robotomize target" << std::endl;
}
