/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:30:43 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/15 17:48:08 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

HumanB::~HumanB()
{
	
}

void		HumanB::attack( void )
{
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " cannot attack without a weapon" << std::endl;
}

void		HumanB::setWeapon( Weapon &weapon ) 
{
	_weapon = &weapon;
}
