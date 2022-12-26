/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:03:03 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/26 17:50:05 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	_type = "Animal";
	std::cout << "An Animal has been created" << std::endl;
}

Animal::Animal(std::string type)
{
	_type = type;
}

Animal::Animal( const Animal & rhs )
{
	*this = rhs;
	std::cout << "An Animal has been created" << std::endl;
}

Animal::~Animal()
{
	std::cout << "An Animal has been destroyed" << std::endl;
}

Animal & Animal::operator=( const Animal & rhs )
{
	_type = rhs.getType();
	std::cout << "An Animal has been created" << std::endl;
	return *this;
}

std::string Animal::getType() const
{
	return _type;
}

void	Animal::makeSound() const
{
	std::cout << "Animal making noise" << std::endl;
}
