/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:30:20 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/13 13:18:41 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main(void)
{
	Zombie *horde = zombieHorde(12, "random name");

	for (int i = 0; i < 12; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}