/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 17:57:24 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/28 20:32:07 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
int main()
{
	Bureaucrat Anton("Anton", 130);
	Bureaucrat Sergo("Sergo", 40);
	Bureaucrat Ellie("Ellie", 40);

	ShrubberyCreationForm Palm("Palm");
	PresidentialPardonForm Sorry("Sorry");
	RobotomyRequestForm RobotFedor("RobotFedor");

	std::cout << std::endl;

	// Check sign high
	try
	{
		Palm.execute(Anton);
	}
	catch (Form::GradeTooHighException &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (Form::GradeTooLowException &ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;
	Anton.executeForm(Palm);
	std::cout << std::endl;


	// // Check sign low
	// try
	// {
	// 	Form f04("Form 04", 151, 1);
	// }
	// catch (Form::GradeTooHighException &ex)
	// {
	// 	std::cout << ex.what() << std::endl;
	// }
	// catch (Form::GradeTooLowException &ex)
	// {
	// 	std::cout << ex.what() << std::endl;
	// }

	// std::cout << std::endl;

	// // Check exec high
	// try
	// {
	// 	Form f05("Form 05", 0, 1);
	// }
	// catch (Form::GradeTooHighException &ex)
	// {
	// 	std::cout << ex.what() << std::endl;
	// }
	// catch (Form::GradeTooLowException &ex)
	// {
	// 	std::cout << ex.what() << std::endl;
	// }

	// std::cout << std::endl;

	// // Check exec low
	// try
	// {
	// 	Form f06("Form 06", 151, 1);
	// }
	// catch (Form::GradeTooHighException &ex)
	// {
	// 	std::cout << ex.what() << std::endl;
	// }
	// catch (Form::GradeTooLowException &ex)
	// {
	// 	std::cout << ex.what() << std::endl;
	// }

	// std::cout << std::endl;

	// // cannot sign
	// try
	// {
	// 	Anton.signForm(f01);
	// }
	// catch (Form::GradeTooHighException &ex)
	// {
	// 	std::cout << f01 << std::endl;
	// 	std::cout << ex.what() << std::endl;
	// }
	// catch (Form::GradeTooLowException &ex)
	// {
	// 	std::cout << f01 << std::endl;
	// 	std::cout << ex.what() << std::endl;
	// }

	// std::cout << std::endl;

	// // signed
	// try
	// {
	// 	Anton.signForm(f02);
	// }
	// catch (Form::GradeTooHighException &ex)
	// {
	// 	std::cout << f02 << std::endl;
	// 	std::cout << ex.what() << std::endl;
	// }
	// catch (Form::GradeTooLowException &ex)
	// {
	// 	std::cout << f02 << std::endl;
	// 	std::cout << ex.what() << std::endl;
	// }
	// std::cout << f02 << std::endl;

	return (0);
}
