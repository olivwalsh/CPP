/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 15:27:09 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/31 14:17:48 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"
# include <cstdlib>
# include <ctime>

class Bureaucrat;

class Form
{
	public:
		Form(void);
		Form(std::string name, const int grade_to_sign, const int grade_to_execute);
		Form( const Form & rhs );
		virtual ~Form();

		Form & operator=( const Form & rhs );

		const std::string	getName() const;
		std::string			getTarget() const;
		bool				isSigned() const;
		int					getSignatureGrade() const;
		int					getExecutionGrade() const;

		void				beSigned( const Bureaucrat & ref );
		void				beExecuted( const Bureaucrat & ref ) const;
		virtual void		execute(Bureaucrat const & executor) const = 0;

	protected:
		Form(std::string name, const int grade_to_sign, const int grade_to_execute, std::string target);
		
	private:
		const std::string	_name;
		std::string			_target;
		bool				_signed;
		const int			_grade_to_sign;
		const int			_grade_to_execute;
	
	public:
		class FormException : public std::exception
		{
			public:
				virtual const char * what() const throw() = 0;
		};
		class GradeTooLowException : public FormException
		{
			public:
				virtual const char * what() const throw();
		};
		class GradeTooHighException : public FormException
		{
			public:
				virtual const char * what() const throw();
		};
		class FormIsNotSignedException : public FormException
		{
			public:
				virtual const char * what() const throw();
		};
};

std::ostream & operator<<(std::ostream &o, const Form & ref);

#endif