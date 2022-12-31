/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 12:29:06 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/31 14:29:30 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
	: Form("Robotomy Request", 72, 45, "untitled target")
{
	
}

		
RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form("Robotomy Request", 72, 45, target)
{
	
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & rhs )
	: Form(rhs)
{
	
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & rhs)
{
	Form::operator=(rhs);
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	this->beExecuted(executor);
	std::cout << " *Drill noise* " << std::endl;
	
	std::srand(std::time(NULL));
	if (std::rand() % 2)
		std::cout << this->getTarget() << " has been robotomized" << std::endl;
	else
		std::cout << "Failed to robotomize " << this->getTarget() << std::endl;
}
