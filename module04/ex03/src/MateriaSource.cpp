/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:30:14 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/28 17:25:36 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		_materials[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource & rhs )
{
	*this = rhs;
}

MateriaSource::~MateriaSource(void)
{

}

MateriaSource & MateriaSource::operator=( const MateriaSource & rhs )
{
	for (int i = 0; i < 4; i++)
		_materials[i] = rhs._materials[i];
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	int i = 0;
	
	while (_materials[i])
		i++;
	if (i == 4)
	{
		std::cout << "Cannot learn about any new materia. Brain is full" << std::endl;
		return;
	}
	_materials[i] = materia;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	int i = 0;

	while (_materials[i])
	{
		if (_materials[i]->getType() == type)
			return _materials[i]->clone();
		i++;
	}
	std::cout << "Could not create this materia, because could not recognize this type" << std::endl;
	return NULL;
}
