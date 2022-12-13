/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 19:15:26 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/13 12:30:18 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main()
{
	Zombie	*zombie = newZombie("Hoju");

	zombie->announce();
	randomChump("Kuku");
	delete zombie;
	return (0);
}