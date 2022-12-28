/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:30:14 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/28 17:33:24 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource( const MateriaSource & rhs );
		virtual ~MateriaSource(void);
		
		MateriaSource & operator=( const MateriaSource & rhs );
		
		void		learnMateria(AMateria* material);
		AMateria*	createMateria(std::string const & type);

	private:
		AMateria	*_materials[4];
		
};

#endif