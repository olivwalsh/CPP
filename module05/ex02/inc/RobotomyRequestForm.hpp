/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owalsh <owalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 12:29:06 by owalsh            #+#    #+#             */
/*   Updated: 2022/12/30 15:17:38 by owalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm & rhs);
		virtual ~RobotomyRequestForm();

		RobotomyRequestForm & operator=(const RobotomyRequestForm & rhs);

		void		execute(Bureaucrat const & executor) const;
		
	private:
		const std::string	_name;
		bool				_signed;
		const int			_grade_to_sign;
		const int			_grade_to_execute;
};

#endif