/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:30:40 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/13 15:55:11 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.h"

#ifndef HUMAN_A_H
#define HUMAN_A_H

class	HumanA
{
	private:
		std::string		_name;
		const Weapon*	_weapon;

	public:
		HumanA(
			const Weapon&	weapon)
			: _weapon(&weapon) {};
		HumanA(
			std::string 	name,
			const Weapon&	weapon)
			: _name(name), _weapon(&weapon) {};
		~HumanA();
		void		attack( void );
		std::string	getName() { return _name; };
		Weapon		getWeapon() { return *_weapon; };
		
};

#endif