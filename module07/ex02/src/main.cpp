/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 17:46:52 by owalsh            #+#    #+#             */
/*   Updated: 2023/01/03 19:06:05 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Array.hpp>

#define MAX_VAL 15
#define GREEN(s) "\033[1;32m" s "\033[m"
#define BLUE(s) "\033[1;34m" s "\033[m"

int main(void)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];

	srand((unsigned) time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
	std::cout << BLUE("-- size of numbers --") << std::endl;
	std::cout << numbers.size() << std::endl;

	std::cout << BLUE("-- printing numbers at initialization --") << std::endl;
	numbers.print();

    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);

		std::cout << BLUE("-- printing test --") << std::endl;
		test.print();
    }

	std::cout << BLUE("-- testing if values have been assigned correctly --") << std::endl;

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "not the same value" << std::endl;
            return 1;
        }
    }
	std::cout << BLUE("-- trying to access array at different index --") << std::endl;
    try
    {
        std::cout << "numbers[-2] = " << numbers[-2] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "numbers[MAX_VAL] = " << numbers[MAX_VAL + 5] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	try
    {
        std::cout << "numbers[MAX_VAL - 1] = " << numbers[MAX_VAL - 1] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    delete [] mirror;
    return 0;
}