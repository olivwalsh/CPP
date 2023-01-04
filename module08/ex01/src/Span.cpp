/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 21:01:28 by owalsh            #+#    #+#             */
/*   Updated: 2023/01/04 12:23:30 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int max_sixe)
	: _max_size(max_sixe)
{
}

Span::Span(const Span &ref)
{
	*this = ref;
}

Span::~Span(void)
{
}

Span & Span::operator=(const Span &ref)
{
	_max_size = ref._max_size;
	return *this;
}

void Span::addNumber(int n)
{
	if (_list.size() + 1 > _max_size)
	{
		throw SpanIsFull();
		return;
	}
	_list.push_back(n);
}

int Span::shortestSpan()
{
	if (_list.size() <= 1)
	{
		throw CannotFindSpan();
		return ;
	}
	_list.sort();
	std::list<int>::iterator it = _list.begin();
	std::advance(it, 1);
	return (*it - *_list.begin());
}

int Span::longestSpan()
{
	if (_list.size() <= 1)
	{
		throw CannotFindSpan();
		return ;
	}
	_list.sort();
	return (*_list.end() - *_list.begin());
}

const char * Span::SpanIsFull::what() const throw()
{
	return "Cannot add more numbers, Span already contains max size!";
}
 
const char * Span::CannotFindSpan::what() const throw()
{
	return "Not enough numbers in class, to calculate this span!";
}