/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 21:02:27 by owalsh            #+#    #+#             */
/*   Updated: 2023/01/04 15:24:46 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <iostream>
# include <algorithm>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack<T>(void);
		MutantStack<T>(const MutantStack &ref);
		~MutantStack<T>(void);

		MutantStack & operator=(const MutantStack &ref);

		typedef typename std::stack<T>::container_type::iterator	iterator;

		iterator	begin() { return this->c.begin(); }
		iterator	end()   { return this->c.end(); }		
};

template<typename T>
MutantStack<T>::MutantStack(void)
	: std::stack<T>()
{

}

template<typename T> 
MutantStack<T>::MutantStack(const MutantStack &ref)
	: std::stack<T>(ref)
{
	
}

template<typename T> 
MutantStack<T>::~MutantStack(void)
{
	
}

template<typename T>
MutantStack<T> & MutantStack<T>::operator=(const MutantStack &ref)
{
	std::stack<T>::operator=(ref);
	return *this;	
}

			
#endif