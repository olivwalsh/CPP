/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:50:08 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/28 17:29:41 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include "AMateria.hpp"
# include <iostream>

class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter() {}
		
		virtual std::string const &		getName() const = 0;
		virtual void 					equip(AMateria * m) = 0;
		virtual void 					unequip(int idx) = 0;
		virtual void 					use(int idx, ICharacter& target) = 0;
};

#endif