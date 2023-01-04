/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 21:01:25 by owalsh            #+#    #+#             */
/*   Updated: 2023/01/04 12:16:30 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <list>

class Span
{
	public:
		Span(unsigned int max_sixe);
		Span(const Span &);
		~Span(void);
		
		Span & operator=(const Span &);

		void	addNumber(int n);
		int		shortestSpan();
		int		longestSpan();

	private:
		unsigned int	_max_size;
		std::list<int>	_list;

	public:
		class SpanIsFull : public std::exception
		{
			virtual const char * what() const throw();
		};
		class CannotFindSpan : public std::exception
		{
			virtual const char * what() const throw();	
		};
};

#endif