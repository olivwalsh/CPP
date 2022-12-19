/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:08:02 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/19 20:46:09 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	: ClapTrap("no name")
{

}

ClapTrap::ClapTrap(const std::string name)
	: _name(name), _hit_points(10), _energy_points(10), _attack_damage(2)
{
	std::cout << "New ClapTrap created!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destroyed!" << std::endl;	
}

const std::string ClapTrap::getName() const
{
	return _name;
}

int	ClapTrap::getHitPoints() const
{
	return _hit_points;
}

int	ClapTrap::getAttackDamage() const
{
	return _attack_damage;
}

void ClapTrap::attack(const std::string& target)
{
	ClapTrap targetAttack(target);

	if (this->_energy_points >= 1)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << targetAttack.getAttackDamage() << " points of damage!" << std::endl;
		targetAttack.takeDamage(targetAttack.getAttackDamage());
		this->_energy_points -= 1;
	}
	else
		std::cout << "ClapTrap " << this->_name << " does not have enough hit points to attack " << target << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hit_points -= amount;	
	std::cout << "ClapTrap " << this->_name << " takes damage of " << amount << " hit points, causing " << this->_hit_points << " total hit points!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points >= 1)
	{
		this->_hit_points += amount;
		this->_energy_points -= 1;
		std::cout << "ClapTrap " << this->_name << " has been repaired of " << amount << " points, giving him a total of " << this->_hit_points << " total hit points!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " does not have enough energy to be repaired" << std::endl;
}
