/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:05:46 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/26 17:50:00 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	_type = "WrongAnimal";
	std::cout << "A WrongAnimal has been created" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	_type = type;
}

WrongAnimal::WrongAnimal( const WrongAnimal & rhs )
{
	*this = rhs;
	std::cout << "A WrongAnimal has been created" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "A WrongAnimal has been destroyed" << std::endl;
}

WrongAnimal & WrongAnimal::operator=( const WrongAnimal & rhs )
{
	_type = rhs.getType();
	std::cout << "A WrongAnimal has been created" << std::endl;
	return *this;
}

std::string WrongAnimal::getType() const
{
	return _type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal making noise" << std::endl;
}