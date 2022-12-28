/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:50:21 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/28 17:39:45 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice( const Ice & rhs ) : AMateria(rhs)
{

}

Ice::~Ice()
{
}

Ice & Ice::operator=( const Ice & rhs )
{
	_type = rhs.getType();
	return *this;
}

AMateria * Ice::clone(void) const
{
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}
