/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 01:54:13 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/28 20:08:58 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <fstream>
# include <time.h>

class Bureaucrat;
# include "Bureaucrat.hpp"

class Form
{
	public:
		Form();
		Form(std::string const Name, int const GradeSign, int const GradeExec,
		std::string const Target);
		Form(Form const &form);
		virtual ~Form();
		Form &operator = (Form const &form);
		std::string getName() const;
		int getFGradeSign() const;
		int getFGradeExec() const;
		bool getBo() const;
		std::string getTarget() const;
		void setBo(bool Bo);
		void beSigned(Bureaucrat &bureaucrat);
		virtual void execute(Bureaucrat const &executor) const = 0;
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
		class FormDoesNotSignedException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowToExecException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

	private:
		std::string const _name;
		std::string const _target;
		int const _fGradeSign;
		int const _fGradeExec;
		bool _bo;

};

std::ostream &operator << (std::ostream &out, const Form &form);

#endif
