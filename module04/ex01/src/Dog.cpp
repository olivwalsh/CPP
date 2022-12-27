/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:06:07 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/27 12:53:45 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), _brain(new Brain)
{
	std::cout << "A Dog has been created" << std::endl;
}

Dog::Dog(const Dog & rhs ) : Animal(rhs)
{
	this->_brain = new Brain(*(rhs._brain)); // deep copy
	// *this = rhs; // shallow copy
	std::cout << "A Dog has been created" << std::endl;
}

Dog::~Dog()
{
	std::cout << "A Dog has been destroyed" << std::endl;
}

Dog & Dog::operator=( const Dog & rhs)
{
	_type = rhs.getType();
	for (int i = 0; i < NB_IDEAS; i++)
		_brain->setIdea(i, rhs._brain->getIdea(i));
	std::cout << "A Dog has been created" << std::endl;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Woof woof" << std::endl;
}

void Dog::setIdea(int index, std::string idea)
{
	this->_brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const
{
	return this->_brain->getIdea(index);
}