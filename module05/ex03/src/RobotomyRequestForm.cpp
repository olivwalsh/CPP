/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 12:29:06 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/30 17:08:33 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	:	Form("RobotomyRequest", 72, 45, target)
{
	
}

RobotomyRequestForm::~RobotomyRequestForm()
{
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
