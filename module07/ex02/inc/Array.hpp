/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 20:40:00 by owalsh            #+#    #+#             */
/*   Updated: 2023/01/03 19:15:07 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <cstdlib>

template<class T>
class Array
{
	public:
		Array(void) 
			: _array(NULL), _size(0) {}
		Array(unsigned int n)
			: _array(new T[n]), _size(n) {}
		Array(const Array &ref)	{ *this = ref; }
		~Array(void) 			{ delete [] _array; }

		Array & operator=(const Array &ref)
		{
			_size = ref.size();
			_array = new T[_size];
			for (int i = 0; i < ref.size(); i++)
				_array[i] = ref._array[i];
			return *this;
		}
		
		T & 	operator[](const int index)
		{
			if (!_array || index < 0 || index >= _size)
				throw OutOfRange();
			return _array[index];
		}
		
		T		size(void) const { return _size; }
		
		void	print()
		{
			if (!_array)
				return;
			for (int i = 0; i < _size; i++)
				std::cout << _array[i] << std::endl;
		}
	
	private:
		T		*_array;
		int		_size;

	public:
		class OutOfRange : public std::exception
		{
			public:
				virtual const char * what() const throw() { return "index is out of range"; } 
		};

};

#endif