/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:31:04 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/15 17:51:19 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

enum {
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

class Harl;

typedef void (Harl::*pointer)(void);

struct functionRef {
	std::string	level;
	pointer		function;
};

class	Harl
{
	private:
		functionRef	which[4];
		void 		debug( void );
		void 		info( void );
		void 		warning( void );
		void 		error( void );
	
	public:
		Harl();
		~Harl();
		void complain( std::string level );
		int	getLevel(std::string filterLevel);
};
