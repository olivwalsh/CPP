/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:08:02 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/22 15:16:32 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	: _name("no name"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap " << _name << " was born!" << std::endl;
}

ClapTrap::ClapTrap(const std::string name)
	: _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap " << _name << " was born!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & rhs)
{
	*this = rhs;	
	std::cout << "ClapTrap " << _name << " was born!" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & rhs)
{
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	std::cout << "ClapTrap " << _name << " was born!" << std::endl;
	return (*this);	
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destroyed!" << std::endl;	
}

std::string ClapTrap::getName() const { return _name; }

void ClapTrap::attack(const std::string& target)
{
	if (this->_hit_points <= 0)
	{
		std::cout
			<< "ClapTrap " << this->_name
			<< " cannot attack, because he's dead" << std::endl;
		return ;
	}
	if (this->_energy_points >= 1)
	{
		this->_energy_points -= 1;
		std::cout
			<< "ClapTrap " << this->_name
			<< " attacks " << target
			<< ", causing " << this->_attack_damage 
			<< " points of damage!" << std::endl;
	}
	else
		std::cout
			<< "ClapTrap " << this->_name
			<< " does not have enough energy to attack " << target << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points <= 0)
	{
		std::cout
			<< "ClapTrap " << this->_name
			<< " cannot take any more damage, because he's already dead" << std::endl;
		return ;
	}
	this->_hit_points -= amount;
	std::cout 
		<< "ClapTrap " << this->_name
		<< " lost " << amount 
		<< " hit points, he has now " << this->_hit_points 
		<< " total hit points!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points <= 0)
	{
		std::cout
			<< "ClapTrap " << this->_name
			<< " cannot be repaired, because it is already dead" << std::endl;
		return ;
	}
	if (this->_energy_points >= 1)
	{
		this->_hit_points += amount;
		this->_energy_points -= 1;
		std::cout 
			<< "ClapTrap " << this->_name 
			<< " gained " << amount
			<< " hit points, he has now " << this->_hit_points 
			<< " total hit points!" << std::endl;
	}
	else
		std::cout 
			<< "ClapTrap " << this->_name
			<< " does not have enough energy to be repaired" << std::endl;
}
