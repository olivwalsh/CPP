/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:30:50 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/15 22:23:40 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

std::string	Weapon::getType( void )
{
	return _type;
}

void Weapon::setType( std::string type )
{ 
	_type = type;
}
