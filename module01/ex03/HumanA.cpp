/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:30:37 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/13 15:52:51 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"

HumanA::~HumanA()
{
	
}

void		HumanA::attack( void )
{
	std::cout << getName() << " attacks with their " << getWeapon().getType() << std::endl;
}