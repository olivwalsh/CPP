/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:08:05 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/22 15:30:34 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	
	ScavTrap	scav("Scav");
	ClapTrap	franck("Clap");

	franck.attack("nobody");
	franck.takeDamage(10);
	franck.beRepaired(100);
	franck.takeDamage(100);
	franck.takeDamage(10);
	franck.beRepaired(10);
	scav.attack("nobody");
	scav.guardGate();
	scav.takeDamage(100);
	scav.guardGate();
	scav.beRepaired(50);
	scav.takeDamage(100);
	scav.guardGate();

	return 0;
}
