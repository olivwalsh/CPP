/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 21:01:14 by owalsh            #+#    #+#             */
/*   Updated: 2023/01/04 18:33:46 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#define GREEN(s) "\033[1;32m" s "\033[m"
#define BLUE(s) "\033[1;34m" s "\033[m"
#define RED(s) "\033[1;31m" s "\033[m"

int main(void) 
{
	Span	sp = Span(5);     // list of 5 elements max

	std::cout << "List at initialization: " << sp << std::endl;
	try
	{
		std::cout << BLUE("Test: ") << "Trying to get shortest span of an empty list:" << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED("Error: ") << e.what() << std::endl;
	}

	std::cout << BLUE("Test: ") << "Now adding one number" << std::endl;
	sp.addNumber(5);
	std::cout << sp << std::endl;
	try
	{
		std::cout << BLUE("Test: ") << "Trying to get shortest span in list:" << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED("Error: ") << e.what() << std::endl;
	}
	
	std::cout << BLUE("Test: ") << "Now adding more numbers one by one:" << std::endl;
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(7);
	sp.addNumber(11);
	std::cout << sp << std::endl;
	try
	{
		std::cout << BLUE("Test: ") << "Trying to add one more number:" << std::endl;
		sp.addNumber(42);
	}
	catch (std::exception &e)
	{
		std::cout << RED("Error: ") << e.what() << std::endl;
	}

	try
	{
		std::cout << BLUE("Test: ") << "Trying to get shortest span in list" << std::endl;
		std::cout << "Shortest span: [" << sp.shortestSpan() << "]" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED("Error: ") << e.what() << std::endl;
	}
	
	
	std::cout << BLUE("Lets create a new list and add multiple numbers at once:") << std::endl;
	Span newList(10);
	
	newList.addMultipleNumbersAtOnce(2, 5);
	sp.addMultipleNumbersAtOnce(2, 5);
	std::cout << "New list:\n" << newList << std::endl;
	std::cout << "New list:\n" << sp << std::endl;

	std::cout << "Shortest span: [" << newList.shortestSpan() << "]" << std::endl;
	std::cout << "Longest span:  [" << newList.longestSpan() << "]" << std::endl;
	std::cout << std::endl;


	return 0;
}
