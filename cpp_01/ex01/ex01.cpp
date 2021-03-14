/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 05:45:22 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/12 23:36:33 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/* 	to compile use:

	clang++ -g -Wall -Wextra -Werror -std=c++98 *.cpp

*/

// void MyMemoryLeak()
// {
// 	std::string panther = "String panther";
// 	std::cout << panther << std::endl;
// }

void memoryLeak()
{
	std::string* panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}

// int main()
// {
// 	MyMemoryLeak();
// 	memoryLeak();

// 	return (0);
// }