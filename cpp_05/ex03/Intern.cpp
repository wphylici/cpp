/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 00:50:37 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/30 18:22:55 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	for (int i = 0; i < 3; i++)
		this->_form[i] = NULL;
}

Intern::Intern(Intern const &intern)
{
	*this = intern;
}

Intern::~Intern()
{
	delete [] *this->_form;
}

Intern& Intern::operator = (Intern const &intern)
{
	if (this == &intern)
		return (*this);
	return (*this);
}

const char *Intern::InvalidFormNameExeption::what() const throw()
{
	return ("Invalid form name");
}

Form* Intern::makeForm(const std::string Name, const std::string Target)
{
	this->_form[0] = new ShrubberyCreationForm(Target);
	this->_form[1] = new RobotomyRequestForm(Target);
	this->_form[2] = new PresidentialPardonForm(Target);

	for (int i = 0; i < 3; i++)
	{
		if (Name == this->_form[i]->getName())
		{
			int res = i++;
			while (i < 3)
			{
				delete this->_form[i];
				this->_form[i++] = NULL;
			}
			std::cout << "Intern creates " << Name << std::endl;
			return (this->_form[res]);
		}
		delete this->_form[i];
		this->_form[i] = NULL;
	}
	throw Intern::InvalidFormNameExeption();
}
