/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 21:01:32 by owalsh            #+#    #+#             */
/*   Updated: 2023/01/04 11:48:48 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <list>
# include <vector>
# include <deque>

template<typename T>
bool easyfind(T container, int value)
{
	if (*std::find(container.begin(), container.end(), value) == value)
		return true;
    return false;
}

#endif
