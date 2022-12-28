/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:06:07 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/27 14:03:27 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "A Dog has been created" << std::endl;
}

Dog::Dog(const Dog & rhs ) : Animal(rhs)
{
	std::cout << "A Dog has been created" << std::endl;
}

Dog::~Dog()
{
	std::cout << "A Dog has been destroyed" << std::endl;
}

Dog & Dog::operator=( const Dog & rhs)
{
	_type = rhs.getType();
	std::cout << "A Dog has been created" << std::endl;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Woof woof" << std::endl;
}