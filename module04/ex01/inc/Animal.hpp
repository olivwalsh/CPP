/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:03:03 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/26 19:05:32 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
		Animal();
		Animal(std::string type);
		Animal( const Animal & rhs );
		virtual ~Animal();
		Animal & operator=( const Animal & rhs );
		
		std::string			getType() const;
		virtual void		makeSound() const;
		virtual void		setIdea(int index, std::string idea) = 0;
		virtual std::string getIdea(int index) const = 0;

	protected:
		std::string _type;	
};

#endif