/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 17:57:06 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/28 15:24:14 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Form;
# include "Form.hpp"

class Bureaucrat
{
	public:
		Bureaucrat(std::string Name, int Grade);
		Bureaucrat(Bureaucrat const &bureaucrat);
		~Bureaucrat();
		Bureaucrat &operator = (Bureaucrat const &bureaucrat);
		std::string getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
		void signForm(Form &form);
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
		Bureaucrat();
		std::string _name;
		int _grade;

};

std::ostream &operator << (std::ostream &out, const Bureaucrat &bureaucrat);

#endif
