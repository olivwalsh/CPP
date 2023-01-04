/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 21:01:28 by owalsh            #+#    #+#             */
/*   Updated: 2023/01/04 14:59:44 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int max_sixe)
	: _max_size(max_sixe), _list(0)
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
	_list = ref._list;
	return *this;
}

std::list<int> const & Span::getList() const
{
	return _list;
}

void Span::addNumber(int n)
{
	if (_list.size() + 1 > _max_size)
		throw SpanIsFull();

	_list.push_back(n);
}

int generateRandomNumber(void)
{
	return (std::rand() % 100);
}

void Span::addMultipleNumbersAtOnce()
{
	if (_list.size() + 1 > _max_size)
		throw SpanIsFull();

	unsigned int i = 0;
	while (i++ < _max_size - _list.size())
	{
		int value = generateRandomNumber();
		this->addNumber(value);
	}
	// this->assign(7,100);
}

int Span::shortestSpan()
{
	if (_list.size() < 2)
		throw CannotFindSpan();


	Span tmp(*this);

	tmp._list.sort();
	
	std::list<int>::const_iterator it;
	
	int span = tmp.longestSpan();
	
	int last = tmp._list.front();
	int i = 0;
	for ( it = tmp._list.begin(); it != tmp._list.end(); ++it)
	{
		if (i > 0)
		{
			if (*it - last < span)
				span = *it - last;
			last = *it;
		}
		i++;
	}
	return span;
}

int Span::longestSpan()
{
	if (_list.size() < 2)
		throw CannotFindSpan();

	Span tmp(*this);
	tmp._list.sort();
	return (tmp._list.back() - tmp._list.front());
}

const char * Span::SpanIsFull::what() const throw()
{
	return "Cannot add more numbers, Span is full!";
}
 
const char * Span::CannotFindSpan::what() const throw()
{
	return "Not enough numbers in class, to calculate this span!";
}

std::ostream &	operator<<(std::ostream &o, Span const &ref)
{
	std::list<int>::const_iterator	it = ref.getList().begin();

	o << "[ ";
	for (; it != ref.getList().end() ; ++it)
	{
		o << *it;
		o << " ";
	}
	o << "]";
	
	return o;
}
