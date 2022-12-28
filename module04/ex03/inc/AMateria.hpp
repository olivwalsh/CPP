/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 14:18:11 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/28 17:59:23 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <sys/types.h>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	public:
		AMateria(std::string const & type);
		AMateria( const AMateria & rhs );
		virtual ~AMateria();
		
		AMateria & operator=( const AMateria & rhs );
	
		std::string const & 	getType() const;
		virtual AMateria*		clone() const = 0;
		virtual void 			use(ICharacter& target);
	
	protected:
		std::string _type;
};

#endif