/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 16:28:32 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/30 16:59:28 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const Target) :
Form("robotomy request", 72, 45, Target)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &RRform) :
Form("robotomy request", 72, 45, RRform.getTarget())
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm& RobotomyRequestForm::operator = (RobotomyRequestForm const &RRform)
{
	if (this == &RRform)
		return (*this);
	this->setBo(this->getBo());
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->getBo() == false)
		throw Form::FormDoesNotSignedException();
	if (this->getFGradeExec() < executor.getGrade())
		throw Form::GradeTooLowToExecException();

	srand(time(NULL));
	int action = rand() % 2;
	switch (action)
	{
		case (0):
		{
			std::cout << "* drrrrrrrrrrrrrrrrrrrrrrrr *" << std::endl;
			std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
			break;
		}
		case (1):
		{
			std::cout << "Failed to robotomize " << this->getTarget() << std::endl;
			break;
		}
	}
}
