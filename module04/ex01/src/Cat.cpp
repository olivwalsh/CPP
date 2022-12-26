/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:06:09 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/26 19:09:17 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	_brain = new Brain(); 
	std::cout << "A Cat has been created" << std::endl;
}

Cat::Cat( const Cat & rhs )
{
	*this = rhs;
	std::cout << "A Cat has been created" << std::endl;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "A Cat has been destroyed" << std::endl;
}

Cat & Cat::operator=( const Cat & rhs )
{
	_type = rhs.getType();
	std::cout << "A Cat has been created" << std::endl;
	return *this;	
}

void Cat::makeSound() const
{
	std::cout << "Meooowwwwwww" << std::endl;
}

void Cat::setIdea(int index, std::string idea)
{
	this->_brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const
{
	return this->_brain->getIdea(index);
}