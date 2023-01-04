/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 21:01:35 by owalsh            #+#    #+#             */
/*   Updated: 2023/01/04 11:50:49 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#define GREEN(s) "\033[1;32m" s "\033[m"
#define BLUE(s) "\033[1;34m" s "\033[m"
#define RED(s) "\033[1;31m" s "\033[m"

template<typename T>
void print(T container, int value)
{
    std::cout << value << " was " 
			<< (easyfind(container, value) ? GREEN("found ") : RED("not found")) 
			<<  " in container" 
		<< std::endl;
}

int main()
{
	std::list<int> list;

   	list.push_back(1);
	list.push_back(2);
	list.push_back(3);
	
	std::cout << BLUE("Testing easyfind for list container") << std::endl;
    print(list, 2);
    print(list, -3);
    print(list, 42);

	std::vector<int> vector;

   	vector.push_back(1);
	vector.push_back(2);
	vector.push_back(3);
	
	std::cout << BLUE("Testing easyfind for vector container") << std::endl;
    print(vector, 42);
    print(vector, -3);
    print(vector, 3);

	std::deque<int> deck;

   	deck.push_back(1);
	deck.push_back(2);
	deck.push_back(3);
	
	std::cout << BLUE("Testing easyfind for deck container") << std::endl;
    print(deck, 5);
    print(deck, 1);
    print(deck, 42);
	
    return 0;
}
