/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:30:27 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/13 12:56:27 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie
{
	private:
		std::string	_name;
	
	public:
		Zombie();
		~Zombie();
		Zombie(std::string name);
		std::string	getName() { return _name; };
		void		setName(std::string n) { _name = n; };
		void 		announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif