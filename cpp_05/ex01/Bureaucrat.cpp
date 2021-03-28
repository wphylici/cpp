/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 17:57:27 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/28 20:20:22 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string Name, int Grade) : _name(Name), _grade(Grade)
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat &Bureaucrat::operator = (Bureaucrat const &bureaucrat)
{
	if (this == &bureaucrat)
		return (*this);
	this->_name = bureaucrat._name;
	this->_grade = bureaucrat._grade;
	return (*this);
}

Bureaucrat::Bureaucrat(Bureaucrat const &bureaucrat)
{
	this->_name = bureaucrat._name;
	this->_grade = bureaucrat._grade;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Exception: Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Exception: Grade too low");
}

Bureaucrat::~Bureaucrat()
{

}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

std::ostream &operator << (std::ostream &out, const Bureaucrat &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade "
	<< bureaucrat.getGrade() << "." << std::endl;
	return (out);
}

void Bureaucrat::incrementGrade()
{
	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
	this->_grade++;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form &form)
{
	form.beSigned(*this);
	if (form.getBo() == true)
	{
		std::cout << this->getName() <<  " signs " << form.getName() << std::endl;
	}
	else
	{
		std::cout << this->getName() <<  " cannot sign " << form.getName() <<
		" because grade too low" << std::endl;
		throw Form::GradeTooLowException();
	}
}
