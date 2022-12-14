/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:31:07 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/14 16:27:20 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.h"

int	main(void)
{
	Harl harlou;
	
	harlou.complain("debug");
	harlou.complain("info");
	harlou.complain("warning");
	harlou.complain("error");

	harlou.complain("lolilol");
	return (0);
}