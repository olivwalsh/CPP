/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:06:07 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/26 19:04:59 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog( const Dog & rhs );
		Dog & operator=( const Dog & rhs );
		virtual ~Dog();
		
		virtual void		makeSound() const;
		virtual void		setIdea(int index, std::string idea);
		virtual std::string getIdea(int index) const;
	
	private:
		Brain* _brain;
};

#endif