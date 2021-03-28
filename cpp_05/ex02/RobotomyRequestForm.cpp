/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 16:28:32 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/28 19:45:50 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const Target) :
Form("RobotomyRequestForm", 72, 45, Target)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &RRform)
{
	this->setBo(this->getBo());
	*this = RRform;
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
	int action = rand() % 1;
	switch (action)
	{
		case (0):
		{
			std::cout << "* drrrrrrrrrrrrrrrrrrrrrrrr *" << std::endl;
			std::cout << this->getTarget() << " has been robotomized successfully";
			break;
		}
		case (1):
		{
			std::cout << "Failed to robotomize " << this->getTarget() << std::endl;
			break;
		}
	}
}
