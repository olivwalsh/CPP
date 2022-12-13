/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:30:53 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/13 14:22:56 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WEAPON_H
#define WEAPON_H

class	Weapon
{
	private:
		std::string	_type;

	public:
		Weapon();
		Weapon(std::string type) { _type = type; };
		~Weapon();
		std::string	getType( void ) { return _type; };
		void		setType( std::string type ) { _type = type; }; 	
};

#endif