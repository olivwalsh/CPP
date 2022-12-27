/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:02:51 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/27 13:38:40 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

#define NB_ANIMALS 10

int main()
{
	std::string		str1 = "great idea!";
	std::string		str2 = "bad idea!";
	Animal 			*animals[NB_ANIMALS];

	/*
		créez et remplissez un tableau d’objets Animal 
		dont la moitié est composée d’objets Dog 
		et l’autre moitié d’objets Cat.
	*/ 
	for (int i = 0; i < NB_ANIMALS; i++)
	{
		if (i < NB_ANIMALS / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	std::cout << "-- Display Ideas --" << std::endl;
	int j = 0;
	for (; j < NB_ANIMALS; j++)
	{
		std::cout << "Animal n." << j << " (" << animals[j]->getType() << ")" << std::endl;
		for (int i = 0; i < NB_IDEAS; i++)
			std::cout << " idea n." << i << ": " << animals[j]->getIdea(i);
		std::cout << std::endl;
	}
	std::cout << std::endl;
	
	for (int i = 0; i < NB_IDEAS; i++) {
		animals[NB_ANIMALS - 1]->setIdea(i, str2);
		animals[0]->setIdea(i, str1);	// because dogs are better than cats
	}

	// Check wether setIdea works properly
	// std::cout << "-- Display Ideas --" << std::endl;
	// j = 0;
	// for (; j < NB_ANIMALS; j++)
	// {
	// 	std::cout << "Animal n." << j << " (" << animals[j]->getType() << ")" << std::endl;
	// 	for (int i = 0; i < NB_IDEAS; i++)
	// 		std::cout << " idea n." << i << ": " << animals[j]->getIdea(i);
	// 	std::cout << std::endl;
	// }
	// std::cout << std::endl;


	// testing copy constructor
	Cat        *ricky = new Cat(*(dynamic_cast<Cat*>(animals[NB_ANIMALS - 1])));
	
	for (int i = 0; i < NB_IDEAS; i++) 
		std::cout << "ricky: " << ricky->getIdea(i) << std::endl;
	
	// testing assignment operator
	Cat		rico;
	rico = *ricky;
	
	rico.setIdea(0, "lol");
	for (int i = 0; i < NB_IDEAS; i++)
		std::cout << "by copy: " << rico.getIdea(i) << std::endl;
	
	
	delete ricky;

	/*
		Vous devez delete directement 
		les chiens et les chats en tant qu’Animal. 
		Les destructeurs correspondants
		doivent être appelés dans le bon ordre.
	*/
	for (int i = 0; i < NB_ANIMALS; i++)
		delete animals[i];

	return 0;
}