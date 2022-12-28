/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 18:13:38 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/28 18:20:35 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat( const Bureaucrat & rhs );
		~Bureaucrat(void);

		Bureaucrat & operator=( const Bureaucrat & rhs );

		const std::string	getName(void) const;
		int					getGrade(void) const;

	private:
		const std::string	_name;
		const int			_grade;
};

#endif