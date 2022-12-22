/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 16:00:38 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/22 19:06:44 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
	:	ClapTrap(),
		FragTrap(),
		ScavTrap(),
		_name("no name")
{
	_hit_points = FragTrap::_hit_points;
	_energy_points = ScavTrap::_energy_points;
	_attack_damage = FragTrap::_attack_damage;
	this->ClapTrap::_name = _name + "_clap_name";
	std::cout << "DiamondTrap " << _name << " was born!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
	:	ClapTrap(name + "_clap_name"),
		FragTrap(name),
		ScavTrap(name),
		_name(name)
{
	_hit_points = FragTrap::_hit_points;
	_energy_points = ScavTrap::_energy_points;
	_attack_damage = FragTrap::_attack_damage;
	std::cout << "DiamondTrap " << _name << " was born!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & rhs)
	:	ClapTrap(rhs._name + "_clap_name"),
		FragTrap(rhs._name),
		ScavTrap(rhs._name),
		_name(rhs._name)
{
	_hit_points = rhs._hit_points;
	_energy_points = rhs._energy_points;
	_attack_damage = rhs._attack_damage;
	std::cout << "DiamondTrap " << _name << " was born!" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << _name << " was destroyed!" << std::endl;	
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &rhs)
{
	_name = rhs._name;
	this->ClapTrap::_name = _name + "_clap_name";
	_hit_points = rhs._hit_points;
	_energy_points = rhs._energy_points;
	_attack_damage = rhs._attack_damage;
	return *this;
}

void DiamondTrap::attack(const std::string& target)
{
	this->ScavTrap::attack(target);
}


void DiamondTrap::whoAmI()
{
	std::cout
		<< "Hello, my name is " << _name
		<< " my ClapTrap's name is " << ClapTrap::_name 
	<< std::endl;
}
