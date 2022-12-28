/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:52:55 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/28 17:29:22 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(void);
		Character(std::string name);
		Character( const Character & rhs );
		virtual ~Character(void);

		Character & operator=( const Character & rhs );

		std::string const & 	getName() const;
		void 					equip(AMateria *m);
		void 					unequip(int idx);
		void 					use(int idx, ICharacter& target);
		
	private:
		std::string		_name;
		AMateria 		*_inventory[4];
		int				_inventory_number;
};

#endif