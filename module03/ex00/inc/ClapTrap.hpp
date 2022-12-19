/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:07:42 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/19 19:34:29 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		const std::string	_name;
		int					_hit_points;
		int					_energy_points;
		int					_attack_damage;
		
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();

		const std::string getName() const;
		int	getHitPoints() const;
		void setHitPoints( int points );
		int	getAttackDamage() const;
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
