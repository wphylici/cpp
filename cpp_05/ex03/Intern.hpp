/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 00:49:15 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/30 04:25:09 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern const &intern);
		~Intern();
		Intern &operator = (Intern const &intern);

		Form *makeForm(std::string Name, std::string Target);
		class InvalidFormNameExeption : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

	private:
		Form *_form[3];
};

std::ostream &operator << (std::ostream &out, const Intern &intern);

#endif
