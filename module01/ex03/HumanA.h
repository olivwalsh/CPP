/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:30:40 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/15 17:07:44 by owalsh           ###   ########.fr       */
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
		
		void		attack( void );
		
};

#endif