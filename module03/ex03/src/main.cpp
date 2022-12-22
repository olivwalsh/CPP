/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:08:05 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/22 17:49:37 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void) 
{
	DiamondTrap	serge("serge");
	DiamondTrap	serge_cpy;

	serge_cpy.whoAmI();
	serge_cpy = DiamondTrap("new");
	serge_cpy.whoAmI();

	serge.whoAmI();
	serge.highFivesGuys();
	serge.guardGate();
	serge.takeDamage(100);
	serge.attack("bosby");
	serge.takeDamage(50);
	serge.beRepaired(0);

	return 0;
}
