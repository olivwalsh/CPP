/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:30:25 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/13 13:11:55 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name)
{
	_name = name;
}

Zombie::~Zombie()
{
	std::cout << Zombie::getName() << " destructed" << std::endl;
}

void Zombie::announce( void )
{
	std::cout << Zombie::getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
