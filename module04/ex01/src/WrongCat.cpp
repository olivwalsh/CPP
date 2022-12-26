/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:05:49 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/26 17:49:55 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "A WrongCat has been created" << std::endl;
}

WrongCat::WrongCat( const WrongCat & rhs )
{
	*this = rhs;
	std::cout << "A WrongCat has been created" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "A WrongCat has been destroyed" << std::endl;
}

WrongCat & WrongCat::operator=( const WrongCat & rhs )
{
	_type = rhs.getType();
	std::cout << "A WrongCat has been created" << std::endl;
	return *this;	
}

void	WrongCat::makeSound() const
{
	std::cout << "Meooowwwwwww" << std::endl;
}
