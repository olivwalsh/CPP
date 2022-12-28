/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:04:44 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/27 13:52:42 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#define NB_IDEAS 100

class Brain
{
	public:
		Brain();
		Brain( const Brain & rhs );
		virtual ~Brain();
		Brain & operator=( const Brain & rhs );

		virtual std::string getIdea(int index) const;
		virtual void		setIdea(int index, std::string idea);

	private:
		std::string _ideas[NB_IDEAS];
};

#endif