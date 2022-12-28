/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:50:17 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/28 17:39:34 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
}

Cure::Cure( const Cure & rhs ) : AMateria(rhs)
{
}

Cure::~Cure(void)
{
}

Cure & Cure::operator=( const Cure & rhs )
{
	_type = rhs.getType();
	return *this;
}

AMateria * Cure::clone() const
{
	return new Cure(*this);
}

void	Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
