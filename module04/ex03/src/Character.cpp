/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:52:31 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/28 17:39:24 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("no name"), _inventory_number(0)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}
		
Character::Character( const Character & rhs )
{
	*this = rhs;	
}

Character::~Character(void)
{
}

Character & Character::operator=( const Character & rhs )
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = rhs._inventory[i];
	_name = rhs.getName();
	_inventory_number = rhs._inventory_number;
	return *this;
}

std::string const & Character::getName() const
{
	return _name;
}

void Character::equip(AMateria *m)
{
	if (!m || _inventory_number == 4)
		return;
	int i = 0;
	while (_inventory[i])
		i++;
	_inventory[i] = m;
	_inventory_number++;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return;
	if (_inventory[idx])
		_inventory[idx] = NULL;
	_inventory_number--;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		return;
	if (_inventory[idx])
		_inventory[idx]->use(target);
}
