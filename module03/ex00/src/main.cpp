/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:08:05 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/22 14:20:05 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap	unknown;
	ClapTrap	franck("Franck");
	ClapTrap	eddie("Eddie");

	franck.attack(unknown.getName());
	franck.attack(eddie.getName());
	franck.takeDamage(20);
	franck.beRepaired(10);
	franck.takeDamage(10);
	franck.beRepaired(10);
	return 0;
}
