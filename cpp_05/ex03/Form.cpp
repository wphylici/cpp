/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 02:02:10 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/29 21:18:28 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const Name, int const GradeSign, int const GradeExec, std::string const Target) :
_name(Name), _target(Target), _fGradeSign(GradeSign), _fGradeExec(GradeExec), _bo(false)
{
	if (this->_fGradeSign < 1 || this->_fGradeExec < 1)
		throw Form::GradeTooHighException();
	if (this->_fGradeSign > 150 || this->_fGradeExec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &form) : _name(form._name), _target(form._target), _fGradeSign(form._fGradeSign),
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

const char *Form::FormDoesNotSignedException::what() const throw()
{
	return ("Form does not signed. Form not executed");
}

const char *Form::GradeTooLowToExecException::what() const throw()
{
	return ("Grade exec too low");
}

std::string Form::getName() const
{
	return (this->_name);
}

int Form::getFGradeSign() const
{
	return (this->_fGradeSign);
}

int Form::getFGradeExec() const
{
	return (this->_fGradeExec);
}

bool Form::getBo() const
{
	return (this->_bo);
}

std::string Form::getTarget() const
{
	return (this->_target);
}

void Form::setBo(bool Bo)
{
	this->_bo = Bo;
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->getFGradeSign())
		this->_bo = true;
	else
		this->_bo = false;
}

std::ostream &operator << (std::ostream &out, const Form &form)
{
	out << "*---------- State of the form ----------* " << std::endl << "Name: " << form.getName() << std::endl <<
	"Grade: " << form.getFGradeSign() <<  std::endl << "Signed status: " << form.getBo();
	return (out);
}
