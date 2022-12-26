/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:46:44 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/26 13:12:44 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("no name")
{
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	std::cout << "ScavTrap " << _name << " was born!" << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	std::cout << "ScavTrap " << _name << " was born!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & rhs) : ClapTrap(rhs)
{
	std::cout << "ScavTrap " << _name << " was born!" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & rhs)
{
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	std::cout << "ScavTrap " << _name << " was born!" << std::endl;
	return (*this);	
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " destroyed!" << std::endl;	
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_hit_points <= 0)
	{
		std::cout
			<< "ScavTrap " << this->_name
			<< " cannot attack, because he's dead" << std::endl;
		return ;
	}
	if (this->_energy_points >= 1)
	{
		this->_energy_points -= 1;
		std::cout
			<< "ScavTrap " << this->_name
			<< " attacks " << target
			<< ", causing " << this->_attack_damage 
			<< " points of damage!" << std::endl;
	}
	else
		std::cout
			<< "ScavTrap " << this->_name
			<< " does not have enough energy to attack " << target << std::endl;
}

void ScavTrap::guardGate()
{
	if (this->_hit_points <= 0)
	{
		std::cout
			<< "ScavTrap " << _name
			<< " cannot get in Gate Keeper mode, because he's dead" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name << " mode: Gate Keeper" << std::endl;
}
