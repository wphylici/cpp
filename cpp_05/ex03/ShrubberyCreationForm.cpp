/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 16:27:06 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/30 16:59:47 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const Target) :
Form("shrubbery creation", 145, 137, Target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &SCform) :
Form("shrubbery creation", 145, 137, SCform.getTarget())
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm& ShrubberyCreationForm::operator = (ShrubberyCreationForm const &SCform)
{
	if (this == &SCform)
		return (*this);
	this->setBo(this->getBo());
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->getBo() == false)
		throw Form::FormDoesNotSignedException();
	if (this->getFGradeExec() < executor.getGrade())
		throw Form::GradeTooLowToExecException();

	std::ofstream fout;
	fout.open(this->getTarget() + "_shrubbery");
	if (!fout.is_open())
	{
		std::cout << "ERROR: failed to open the file" << std::endl;
		exit(EXIT_FAILURE);
	}
	fout << "        __ _.--..--._ _" << std::endl;
	fout << "     .-' _/   _/\\_   \\_'-." << std::endl;
	fout << "    |__ /   _/\\__/\\_   \\__|" << std::endl;
	fout << "       |___/\\_\\__/  \\___|" << std::endl;
	fout << "             \\__/" << std::endl;
	fout << "              \\__/" << std::endl;
	fout << "               \\__/" << std::endl;
	fout << "               \\__/" << std::endl;
	fout << "           ____\\__/___" << std::endl;
	fout << "       . - '             ' -." << std::endl;
	fout << "      /                      \\" << std::endl;
	fout << "~~~~~~~  ~~~~~ ~~~~~  ~~~ ~~~  ~~~~~" << std::endl;
	fout << " ~~~   ~~~~~   ~~~~   ~~ ~  ~ ~ ~" << std::endl;

	fout.close();
}
