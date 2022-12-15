/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:31:07 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/15 22:16:49 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.h"

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
		case DEBUG:
			harlou.complain("debug");
		case INFO:
			harlou.complain("info");
		case WARNING:
			harlou.complain("warning");
		case ERROR:
			harlou.complain("error");
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}