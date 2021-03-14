/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 23:49:10 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/13 23:09:11 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

/* 	to compile use:

	clang++ -g -Wall -Wextra -Werror -std=c++98 *.cpp

*/

int main()
{
	Human bob;
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
}