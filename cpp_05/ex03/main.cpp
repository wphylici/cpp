/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 17:57:24 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/30 18:24:50 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"

int main()
{
	Intern someRandomIntern;
	Form* rrf = NULL;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	std::cout << std::endl;

	Form* rrf2 = NULL;
	try
	{
		rrf2 = someRandomIntern.makeForm("bla bla", "Bender");
	}
	catch(const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;

	Bureaucrat Ellie("Ellie", 20);

	Form* scf = NULL;
	try
	{
		scf = someRandomIntern.makeForm("shrubbery creation", "Palm");
		scf->beSigned(Ellie);
		Ellie.executeForm(*scf);
	}
	catch(const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;

	Bureaucrat Mari("Mari", 40);

	Form* ppf = NULL;
	try
	{
		ppf = someRandomIntern.makeForm("presidential pardon", "Kraios");
		//ppf->beSigned(Ellie);
		Mari.executeForm(*ppf);
	}
	catch(const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;

	Bureaucrat Sergo("Sergo", 21);

	Form* rrf3 = NULL;
	try
	{
		rrf3 = someRandomIntern.makeForm("robotomy request", "Robot Fedor");
		rrf3->beSigned(Sergo);
		Sergo.executeForm(*rrf3);
	}
	catch(const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;

	Form *ppf2 = NULL;
	try
	{
		ppf2 = someRandomIntern.makeForm("presidential pardon", "Kraios");
		ppf2->beSigned(Sergo);
		Sergo.executeForm(*ppf2);
	}
	catch(const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;


	if (rrf) {delete rrf; rrf = NULL;}
	if (rrf2) {delete rrf2; rrf2 = NULL;}
	if (rrf3) {delete rrf3; rrf3 = NULL;}
	if (ppf) {delete ppf; ppf = NULL;}
	if (ppf2) {delete ppf2; ppf2 = NULL;}
	if (scf) {delete scf; scf = NULL;}

	return (0);
}
