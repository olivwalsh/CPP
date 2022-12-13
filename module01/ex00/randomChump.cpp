/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 11:47:56 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/13 12:17:13 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

void	randomChump (std::string name)
{
	Zombie	random = Zombie(name);
	random.announce();
}