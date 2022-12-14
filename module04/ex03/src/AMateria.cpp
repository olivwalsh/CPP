/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 14:17:59 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/28 17:39:12 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type)
{
}

AMateria::AMateria( const AMateria & rhs )
{
	*this = rhs;
}

AMateria::~AMateria()
{
}

AMateria & AMateria::operator=( const AMateria & rhs )
{
	_type = rhs.getType();
	return *this;
}

std::string const & AMateria::getType() const
{
	return _type;
}

void AMateria::use(ICharacter & target)
{
	(void)target;
}