/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:31:07 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/14 17:05:05 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.h"

int	Harl::getLevel(std::string filterLevel)
{
	for (int i = 0; i < 4; i++)
	{
		if (Harl::which[i].level == filterLevel)
			return (i);
	}
	return (-1);
}

int	main(int argc, char **argv)
{
	Harl 		harlou;
	int			level;
	std::string	filterLevel;

	if (argc == 1)
	{
		std::cout << "Program requires at least one argument: DEBUG, INFO, WARNING or ERROR" << std::endl;
		return (1);
	}
	filterLevel = argv[1];
	for (int i = 0; filterLevel[i]; i++)
		filterLevel[i] = std::tolower(filterLevel[i]);
	level = harlou.getLevel(filterLevel);
	switch (level)
	{
		case -1:
		{	
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		}
		case DEBUG:
			harlou.complain("debug");
		case INFO:
			harlou.complain("info");
		case WARNING:
			harlou.complain("warning");
		case ERROR:
			harlou.complain("error");
	}
	return (0);
}