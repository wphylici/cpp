/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 01:54:13 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/28 15:28:52 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Bureaucrat;
# include "Bureaucrat.hpp"

class Form
{
	public:
		Form(std::string const Name, int const GradeSign, int const GradeExec);
		Form(Form const &form);
		~Form();
		Form &operator = (Form const &form);
		std::string getName() const;
		int getFGradeSign() const;
		bool getBo() const;
		void beSigned(Bureaucrat &bureaucrat);
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

	private:
		Form();
		std::string const _name;
		int const _fGradeSign;
		int const _fGradeExec;
		bool _bo;

};

std::ostream &operator << (std::ostream &out, const Form &form);

#endif
