/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 16:31:09 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/30 16:59:05 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const Target) :
Form("presidential pardon", 25, 5, Target)
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &PPform) :
Form("presidential pardon", 25, 5, PPform.getTarget())
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm& PresidentialPardonForm::operator = (PresidentialPardonForm const &PPform)
{
	if (this == &PPform)
		return (*this);
	this->setBo(this->getBo());
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->getBo() == false)
		throw Form::FormDoesNotSignedException();
	if (this->getFGradeExec() < executor.getGrade())
		throw Form::GradeTooLowToExecException();

	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

