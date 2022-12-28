/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 18:21:03 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/28 18:21:17 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat		paul = Bureaucrat("Paul", 1);
		std::cout << paul << std::endl;
		paul.lowerGrade();
		std::cout << paul << std::endl;
		paul.upperGrade();
		std::cout << paul << std::endl;
		paul.upperGrade();
		std::cout << paul << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	
	try
	{
		Bureaucrat		paul = Bureaucrat("Paul", 150);
		std::cout << paul << std::endl;
		paul.upperGrade();
		std::cout << paul << std::endl;
		paul.lowerGrade();
		std::cout << paul << std::endl;
		paul.lowerGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	
	try
	{
		Bureaucrat		paul = Bureaucrat("Paul", 0);
		std::cout << paul << std::endl;
		paul.lowerGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	
	try
	{
		Bureaucrat		paul = Bureaucrat("Paul", 151);
		std::cout << paul << std::endl;
		paul.upperGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}