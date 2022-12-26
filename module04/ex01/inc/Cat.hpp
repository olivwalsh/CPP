/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:06:09 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/26 19:05:38 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat( const Cat & rhs );
		virtual ~Cat();
		
		Cat & operator=(const Cat & rhs );

		virtual void		makeSound() const;
		virtual void		setIdea(int index, std::string idea);
		virtual std::string getIdea(int index) const;
	
	private:
		Brain* _brain;
};

#endif