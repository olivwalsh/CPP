/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 11:47:55 by owalsh            #+#    #+#             */
/*   Updated: 2023/01/02 12:55:48 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter()
	:	_input(0)
{
}
	
Converter::Converter(const std::string input)
{
	_input = atof(input.c_str());
}

Converter::Converter(const Converter & rhs)
{
	*this = rhs;
}

Converter::~Converter()
{
}

Converter & Converter::operator=(const Converter &rhs)
{
	_input = rhs._input;
	return *this;
}

char Converter::toChar(void) const
{
	char c = static_cast<char>(_input);

	if (!std::isfinite(_input) || _input < CHAR_MIN || _input > CHAR_MAX)
		throw Converter::ImpossibleConversion();
	if (!isprint(c))
		throw Converter::NonPrintableConversion();
	return c;
}

int Converter::toInt(void) const
{
	int i = static_cast<int>(_input);
	
	if (!std::isfinite(_input) || _input < INT_MIN || _input > INT_MAX)
		throw Converter::ImpossibleConversion();
	return i;
}

float Converter::toFloat(void) const
{
	float f = static_cast<float>(_input);
	return f;	
}

double Converter::toDouble(void) const
{
	return _input;
}

void Converter::convert(void) const
{
	try
	{
		std::cout << "char: ";
		char c = this->toChar();
		std::cout << "'" << c << "'" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "int: ";
		int i = this->toInt();
		std::cout << i << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "float: " << std::fixed << std::setprecision(1) << this->toFloat() << "f" << std::endl;
	std::cout << "double: " << this->toDouble() << std::endl;
}

const char * Converter::ImpossibleConversion::what() const throw()
{
	return "impossible";
}

const char * Converter::NonPrintableConversion::what() const throw()
{
	return "Non displayable";
}
