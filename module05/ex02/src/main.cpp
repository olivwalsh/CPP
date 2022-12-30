/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 18:21:03 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/30 15:56:22 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	Form			*form = NULL;
	Bureaucrat		bob("bob", 1);
	Bureaucrat		phil("phil", 40);
	Bureaucrat		luc("luc", 150);

	// try
	// {
	// 	form = new PresidentialPardonForm("28A");
	// 	form->execute(bob);
	// 	delete form;
	// 	form = NULL;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }


	try
	{
		form = new RobotomyRequestForm("28B");
		form->execute(phil);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	// try
	// {
	// 	form = new ShrubberyCreationForm("28C");
	// 	form->execute(luc);
	// 	delete form;
	// 	form = NULL;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }

	// bob.executeForm(PresidentialPardonForm("45GCD"));
	// phil.executeForm(PresidentialPardonForm("45GCD"));

	bob.executeForm(RobotomyRequestForm("74A"));
	phil.executeForm(RobotomyRequestForm("74A"));
	
	// phil.executeForm(ShrubberyCreationForm("T408"));

	return 0;
}
