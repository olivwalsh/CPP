/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 18:13:38 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/30 15:52:42 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(const std::string name, const int grade);
		Bureaucrat( const Bureaucrat & rhs );
		~Bureaucrat(void);

		Bureaucrat & operator=( const Bureaucrat & rhs );

		std::string	getName(void) const;
		int			getGrade(void) const;

		void		lowerGrade();
		void		upperGrade();
		void		signForm( Form &);
		void		executeForm(Form const & form);

		const static int	lowestGrade = 150;
		const static int	highestGrade = 1;

	private:
		std::string	_name;
		int			_grade;
	
	public:
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *	what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *	what() const throw();
		};

};

std::ostream & operator<<(std::ostream & o, const Bureaucrat & ref);

#endif