/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 17:45:36 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/14 03:19:18 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define RESET		"\e[0m"
#define BHI_YELLOW 	"\e[1;93m"

/* 	to compile use:

	clang++ -g -Wall -Wextra -Werror -std=c++98 *.cpp

*/

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *pointer = &string;
	std::string &reference = string;

	std::cout << BHI_YELLOW << "Output using the pointer -> " << RESET;
	std::cout << *pointer << std::endl << std::endl;

	std::cout << BHI_YELLOW << "Output using the reference -> " << RESET;
	std::cout << reference << std::endl << std::endl;

	return (0);
}