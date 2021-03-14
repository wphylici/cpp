/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 05:08:47 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/11 19:49:57 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
	Phonebook logic;
	std::string input;

	while (1)
	{
		std::cout << "Enter command (usage: ADD SEARCH EXIT) -> ";
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << "  \b\b" << std::endl;
			exit(EXIT_SUCCESS);
		}
		if (input != "ADD" && input != "SEARCH" && input != "EXIT" && input != "")
			std::cout << "ERROR : command not found" << std::endl;
		if (input == "EXIT")
			exit(EXIT_SUCCESS);
		else if (input == "ADD")
			logic.CreateContact();
		else if (input == "SEARCH")
			logic.Display();
	}
	return (0);
}