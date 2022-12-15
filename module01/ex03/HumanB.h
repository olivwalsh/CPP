/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:30:45 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/15 17:48:11 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.h"

#ifndef HUMAN_B_H
#define HUMAN_B_H

class	HumanB
{
	private:
		std::string	_name;
		Weapon*		_weapon;

	public:
		HumanB(std::string name) : _name(name) {};
		HumanB(std::string name, Weapon &weapon)
			: 	_name(name),
				_weapon(&weapon) {};
		~HumanB();

		void		attack( void );
		void		setWeapon( Weapon &weapon );
};

#endif