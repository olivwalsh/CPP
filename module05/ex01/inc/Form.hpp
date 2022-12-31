/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 15:27:09 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/31 14:09:06 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(void);
		Form(std::string name, const int grade_to_sign, const int grade_to_execute);
		Form( const Form & rhs );
		~Form();

		Form & operator=( const Form & rhs );

		const std::string	getName() const;
		bool				isSigned() const;
		int			getSignatureGrade() const;
		int			getExecutionGrade() const;

		void				beSigned( const Bureaucrat & ref );

	private:	
		const std::string	_name;
		bool				_signed;
		const int			_grade_to_sign;
		const int			_grade_to_execute;
	
	public:
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};

};

std::ostream & operator<<(std::ostream &o, const Form & ref);

#endif