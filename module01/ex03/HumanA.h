/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:30:40 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/13 18:34:25 by owalsh           ###   ########.fr       */
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
		Weapon			&_weapon;

	public:
		HumanA(const std::string name, Weapon& weapon);
		~HumanA();
		
		std::string	getName() { return _name; };
		Weapon		getWeapon() { return _weapon; };
		
		void		attack( void );
		
};

#endif