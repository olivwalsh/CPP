/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:31:02 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/14 16:27:54 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

#define RED "\033[1;31m"
#define BLUE "\033[1;34m"
#define YELLOW "\033[1;33m"
#define BOLD "\033[1m"
#define RESET "\033[m"

Harl::Harl()
{
	which[DEBUG].level = "debug";
	which[DEBUG].function = &Harl::debug;
	which[INFO].level = "info";
	which[INFO].function = &Harl::info;
	which[WARNING].level = "warning";
	which[WARNING].function = &Harl::warning;
	which[ERROR].level = "error";
	which[ERROR].function = &Harl::error;
}

Harl::~Harl()
{
	
}

void Harl::complain( std::string level)
{
	for (int i =0; i < 4; i++)
	{
		if (Harl::which[i].level == level)
			return ((this->*(this->which[i].function))());
	}	
}

void Harl::debug( void )
{
	std::cout << BOLD << "debug: " << RESET <<
	"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" \
	<< std::endl;
}

void Harl::info( void )
{
	std::cout << BLUE << "info: " << RESET <<
	"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" \
	<< std::endl;
}

void Harl::warning( void )
{
	std::cout << YELLOW << "warning: " << RESET <<
	"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month" \
	<< std::endl;
}

void Harl::error( void )
{
	std::cout << RED << "error: " << RESET <<
	"This is unacceptable ! I want to speak to the manager now." \
	<< std::endl;
}
