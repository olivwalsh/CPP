/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 21:01:25 by owalsh            #+#    #+#             */
/*   Updated: 2023/01/04 19:26:28 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <cstdlib>

class Span
{
	public:
		Span(unsigned int max_sixe);
		Span(const Span &);
		~Span(void);
		
		Span & operator=(const Span &);

		std::vector<int> const & getList() const;

		void	addNumber(int n);
		void	addMultipleNumbersAtOnce(std::vector<int>::const_iterator, std::vector<int>::const_iterator);
		int		shortestSpan();
		int		longestSpan();

	private:
		unsigned int		_max_size;
		std::vector<int>	_list;

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

std::ostream &	operator<<(std::ostream &, Span const &);

#endif