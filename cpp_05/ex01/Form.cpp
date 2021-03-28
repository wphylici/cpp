/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 02:02:10 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/28 15:31:26 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const Name, int const GradeSign, int const GradeExec) : _name(Name),
_fGradeSign(GradeSign), _fGradeExec(GradeExec), _bo(false)
{
	if (this->_fGradeSign < 1 || this->_fGradeExec < 1)
		throw Form::GradeTooHighException();
	if (this->_fGradeSign > 150 || this->_fGradeExec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &form) : _name(form._name), _fGradeSign(form._fGradeSign),
_fGradeExec(form._fGradeExec), _bo(form._bo)
{

}

Form::~Form()
{

}

Form& Form::operator = (Form const &form)
{
	if(this == &form)
		return (*this);
	this->_bo = form._bo;
	return (*this);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Form exception: Grade too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Form exception: Grade too low");
}

std::string Form::getName() const
{
	return (this->_name);
}

int Form::getFGradeSign() const
{
	return (this->_fGradeSign);
}

bool Form::getBo() const
{
	return (this->_bo);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->getFGradeSign())
		this->_bo = true;
	else
	{
		this->_bo = false;
	}
}

std::ostream &operator << (std::ostream &out, const Form &form)
{
	out << "*---------- State of the form ----------* " << std::endl << "Name: " << form.getName() << std::endl <<
	"Grade: " << form.getFGradeSign() <<  std::endl << "Signed status: " << form.getBo();
	return (out);
}
