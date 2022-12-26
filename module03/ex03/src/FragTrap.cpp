/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:34:04 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/26 13:13:02 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("no name")
{
	std::cout << "FragTrap " << _name << " was born!" << std::endl;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap " << _name << " was born!" << std::endl;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap & rhs) : ClapTrap(rhs)
{
	std::cout << "FragTrap " << _name << " was born!" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << _name << " was destructed!" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap & rhs)
{
	_name = rhs._name;
	_hit_points = rhs._hit_points;
	_energy_points = rhs._energy_points;
	_attack_damage = rhs._attack_damage;
	std::cout << "FragTrap " << _name << " was born!" << std::endl;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	if (this->_hit_points > 0)
		std::cout << "FragTrap " << _name << ": \"gimme a high five!\"" << std::endl;
}
