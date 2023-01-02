/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 13:03:30 by owalsh            #+#    #+#             */
/*   Updated: 2023/01/02 13:22:55 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <stdint.h>

class Data
{
	public:
		Data(void);
		Data(char c, int i, double d);
		Data(const Data &);
		~Data(void);

		Data & operator=(const Data &);

		char	getChar() const;
		int		getInt() const;
		double	getDouble() const;
	
	private:
		char	_c;
		int		_i;
		double	_d;
};

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif