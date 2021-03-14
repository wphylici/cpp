/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 03:15:16 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/12 23:32:49 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

/* 	to compile use:

	clang++ -g -Wall -Wextra -Werror -std=c++98 *.cpp

*/

void	ponyOnTheHeap(void)
{
	Pony *myPony = new Pony(/* Name */ "Rainbow Dash", /* Species */ "Pegasus", /* Color */ "Blue",
	/* PlaceOfResidence */ "Ponyville");
	myPony->PonyInformation();

	delete myPony;
	std::cout << HI_GREEN << "All allocated memory on the heap is freed" << RESET << std::endl;
}

void	ponyOnTheStack(void)
{
	Pony myPony(/* Name */ "Twilight Sparkle", /* Species */ "Unicorn", /* Color */ "Purle",
	/* PlaceOfResidence */ "Ponyville");
	myPony.PonyInformation();
}

int 	main()
{
	std::cout << B_YELLOW << "this is \"ponyOnTheHeap\" function call" << RESET << std::endl << std::endl;
	ponyOnTheHeap();

	std::cout << std::endl << B_YELLOW << "this is \"ponyOnTheStack\" function call" <<
	RESET << std::endl << std::endl;
	ponyOnTheStack();
	std::cout << HI_GREEN << "All allocated memory on the stack is freed" << RESET << std::endl;

	return (0);
}