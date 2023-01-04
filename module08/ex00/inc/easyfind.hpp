/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 21:01:32 by owalsh            #+#    #+#             */
/*   Updated: 2023/01/04 18:00:50 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <list>
# include <vector>
# include <deque>
# include <algorithm>

template<typename T>
bool easyfind(T container, int value)
{
	typedef const typename T::const_iterator GenericIterator;
	
	GenericIterator it = std::find(container.begin(), container.end(), value);

	if (it != container.end())
		return true;
    return false;
}

#endif
