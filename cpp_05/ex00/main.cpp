/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 17:57:24 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/28 01:22:24 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat Anton("Anton", 10);
		std::cout << Anton << std::endl;
		for (int i = 0; i < 150; i++)
		{
			if (i == 149)
				std::cout << Anton << std::endl;
			Anton.decrementGrade();
		}
	}
	catch (Bureaucrat::GradeTooHighException &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat Sergo("Sergo", 140);
		std::cout << Sergo << std::endl;
		for (int i = 0; i < 150; i++)
			Sergo.incrementGrade();
	}
	catch (Bureaucrat::GradeTooHighException &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat Sergo("Sergo", -42);
	}
	catch (Bureaucrat::GradeTooHighException &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &ex)
	{
		std::cout << ex.what() << std::endl;
	}
}
