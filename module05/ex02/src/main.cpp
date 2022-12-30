/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 18:21:03 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/30 17:56:48 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#define RED(s) "\033[1;31m" s "\033[m"
#define GREEN(s) "\033[1;32m" s "\033[m"
#define YELLOW(s) "\033[1;33m" s "\033[m"
#define BLUE(s) "\033[1;34m" s "\033[m"
#define PURPLE(s) "\033[1;35m" s "\033[m"

void	testRobotomy()
{
	RobotomyRequestForm		original("28B");
	RobotomyRequestForm		form("jkh");
	Bureaucrat				luc("Luc", 70);
	Bureaucrat				boss("Boss", 1);

	form = original;
	std::cout << form << std::endl;
	std::cout << std::endl;
	
	std::cout << BLUE("Luc tries to execute form RobotomyRequest") << std::endl;
	luc.executeForm(form);
	std::cout << std::endl;
	
	std::cout << BLUE("Luc tries to sign form RobotomyRequest first") << std::endl;
	luc.signForm(form);
	std::cout << std::endl;
	
	std::cout << BLUE("Now that it is signed, Luc tries to execute form once again") << std::endl;
	luc.executeForm(form);
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BLUE("Hence, Boss will now try to execute form RobotomyRequest") << std::endl;
	boss.executeForm(form);
	std::cout << std::endl;
}

int	main(void)
{
	testRobotomy();

	return 0;
}
