/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 17:57:24 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/30 17:51:27 by wphylici         ###   ########.fr       */
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
	Bureaucrat Ellie("Ellie", 20);
	Bureaucrat Mari("Mari", 4);

	ShrubberyCreationForm Palm("Palm");
	PresidentialPardonForm Sorry("Kraios");
	RobotomyRequestForm RobotFedor("RobotFedor");

	try
	{
		Bureaucrat Kraios("Kraios", 300);
	}
	catch(const std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;

	Anton.executeForm(Palm);
	Palm.beSigned(Anton);
	Anton.executeForm(Palm);

	std::cout << std::endl;

	Sergo.executeForm(Sorry);
	Sorry.beSigned(Sergo);
	Sergo.executeForm(Sorry);

	std::cout << std::endl;

	Sorry.beSigned(Ellie);
	Ellie.executeForm(Sorry);

	std::cout << std::endl;

	Mari.executeForm(Sorry);

	std::cout << std::endl;

	RobotFedor.beSigned(Ellie);
	Ellie.executeForm(RobotFedor);

	return (0);
}
