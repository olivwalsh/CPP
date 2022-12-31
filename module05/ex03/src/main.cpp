/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 18:21:03 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/31 14:53:15 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

#define RED(s) "\033[1;31m" s "\033[m"
#define GREEN(s) "\033[1;32m" s "\033[m"

int	main(void)
{
	Bureaucrat boss("boss", 1);
	Intern	someRandomIntern;
	Form	*rrf;

	rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
	// rrf->execute(Bureaucrat("bob", 1));
	boss.signForm(*rrf);
	boss.executeForm(*rrf);
	delete rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	boss.executeForm(*rrf);
	// rrf->execute(Bureaucrat("phil", 1));
	delete rrf;

	rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	boss.signForm(*rrf);
	boss.executeForm(*rrf);
	// rrf->execute(Bureaucrat("lucas", 1));
	delete rrf;

	rrf = someRandomIntern.makeForm("not existing", "Bender");
	return 0;
}
