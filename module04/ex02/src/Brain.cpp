/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:10:09 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/27 13:56:47 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < NB_IDEAS; i++)
		_ideas[i].clear();
	std::cout << "A Brain has been created" << std::endl;
}

Brain::Brain( const Brain & rhs )
{
	std::cout << "A Brain has been created" << std::endl;
	*this = rhs;
}

Brain::~Brain()
{
	std::cout << "A Brain has been destroyed" << std::endl;
}

Brain & Brain::operator=( const Brain & rhs )
{
	for (int i = 0; i < NB_IDEAS; i++)
		_ideas[i] = rhs._ideas[i];
	std::cout << "A Brain has been created" << std::endl;
	return *this;
}

std::string Brain::getIdea(int index) const
{
	if (index < 0 || index > NB_IDEAS)
	{
		std::cout << "You did not provide an idea index ranging from 0 to 99" << std::endl;
		std::cout << "Will return first idea, as default" << std::endl;
		return (_ideas[0]);
	}
	return (_ideas[index]);
}

void	Brain::setIdea(int index, std::string idea)
{
	if (index < 0 || index > NB_IDEAS)
	{
		std::cout << "You did not provide an idea index ranging from 0 to 99" << std::endl;
		std::cout << "Will change content of first idea, as default" << std::endl;
		_ideas[0] = idea;
	}
	_ideas[index] = idea;
}
