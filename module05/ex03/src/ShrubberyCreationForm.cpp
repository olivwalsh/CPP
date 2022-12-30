/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 12:29:22 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/30 19:25:19 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form("Shrubbery Creation", 145, 137, target)
{
	
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	this->beExecuted(executor);
	std::ofstream targetFile((this->getTarget() + "_shrubbery").c_str());
	if (targetFile.fail())
	{
		std::cerr << "Fail to create file " << (this->getTarget() + "_shrubbery").c_str() << std::endl;
		return ;
	}
		
	const char	*tree1[] = {
		"               v .   ._, |_  .,\n",
        "   `-._/  .   /    |/_\n",
        "       \\  _, y |  //\n",
        " __.___\\, \\/ -.||\n",
        "   `7-,--.`._||  / / ,\n",
        "   /'     `-. `./ / |/_.'\n",
        "             |    |//\n",
        "             |_    /\n",
        "             |-   |\n",
        "             |   =|\n",
        "             |    |\n",
		"-----------/ ,  .  \\--------._\n",
		NULL
	};

	const char	*tree2[] = {
		"		               ,@@@@@@@,\n",
		"       ,,,.   ,@@@@@@/@@,  .oo8888o.\n",
		"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n",
		"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n",
		"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n",
		"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n",
		"   `&%\\ ` /%&'    |.|        \\ '|8'\n",
		"       |o|        | |         | |\n",
		"       |.|        | |         | |\n",
		"jgs \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n",
		NULL
	};

	for (int i = 0; i < 5; i++)
		targetFile << std::endl;
	targetFile << "\t\t\tdes arbres ASCII" << std::endl;
	for (int i = 0; i < 100; i++)
		targetFile << std::endl;
	targetFile << "just kidding" << std::endl;
	for (int i = 0; i < 15; i++)
		targetFile << std::endl;
	for (int i = 0; tree1[i]; i++)
		targetFile << tree1[i];
	for (int i = 0; i < 5; i++)
		targetFile << std::endl;
	for (int i = 0; tree2[i]; i++)
		targetFile << tree2[i];
	
	targetFile.close();
}
