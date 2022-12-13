/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 19:15:43 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/13 12:29:03 by owalsh           ###   ########.fr       */
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
		void 		announce( void );
};

void	randomChump (std::string name);
Zombie	*newZombie(std::string name);

#endif