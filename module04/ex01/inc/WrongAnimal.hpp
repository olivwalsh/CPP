/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:05:46 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/26 17:46:46 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal( const WrongAnimal & rhs );
		virtual ~WrongAnimal();
		WrongAnimal & operator=( const WrongAnimal & rhs );
		
		std::string	getType() const;
		void	makeSound() const;

	protected:
		std::string _type;
};

#endif