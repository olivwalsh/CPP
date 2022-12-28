/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:02:51 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/27 16:21:59 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

#define NB_ANIMALS 10

int main()
{
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
	
	for (int i = 0; i < NB_IDEAS; i++) 
	{
		animals[NB_ANIMALS - 1]->setIdea(i, "bad idea!");
		animals[0]->setIdea(i, "great idea!");	// because dogs are better than cats
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
	Cat        *minou = new Cat(*(dynamic_cast<Cat*>(animals[NB_ANIMALS - 1])));
	
	minou->setIdea(0, "lol");
	for (int i = 0; i < NB_IDEAS; i++)
	{
		std::cout << "minou: " << minou->getIdea(i);
		std::cout << "\tanimals[NB_ANIMALS - 1]: " << animals[NB_ANIMALS - 1]->getIdea(i) << std::endl;	
	}
	
	// testing assignment operator
	Cat		garfield;
	garfield = *minou;
	
	garfield.setIdea(0, "lol");
	for (int i = 0; i < NB_IDEAS; i++)
		std::cout << "garfield: " << garfield.getIdea(i) << std::endl;
	std::cout << std::endl;
	
	
	delete minou;

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