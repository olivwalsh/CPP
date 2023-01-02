/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 11:48:00 by owalsh            #+#    #+#             */
/*   Updated: 2023/01/02 12:54:18 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <climits>
# include <cmath>

class Converter
{
	public:
		Converter(void);
		Converter(const std::string);
		Converter(const Converter &);
		~Converter();

		Converter & operator=(const Converter &);

		char 	toChar(void) const;
		int 	toInt(void) const;
		float 	toFloat(void) const;
		double 	toDouble(void) const;
		
		void convert(void) const;
	
	private:
		double _input;

	public:
		class ImpossibleConversion : public std::exception
		{
			virtual const char * what() const throw() ;
		};
		class NonPrintableConversion : public std::exception
		{
			virtual const char * what() const throw() ;
		};
};

#endif