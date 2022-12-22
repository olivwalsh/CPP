/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:08:05 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/22 15:45:58 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) 
{
	ClapTrap	franck("Clap");
	FragTrap	frag("Frag");

	franck.attack("nobody");
	franck.takeDamage(10);
	franck.beRepaired(100);
	franck.takeDamage(100);
	frag.attack("nobody");
	frag.highFivesGuys();
	frag.takeDamage(100);
	frag.beRepaired(50);
	frag.takeDamage(100);
	frag.highFivesGuys();

	return 0;
}
