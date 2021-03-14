/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 07:52:00 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/12 23:37:34 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

/* 	to compile use:

	clang++ -g -Wall -Wextra -Werror -std=c++98 *.cpp

*/

int main()
{
	ZombieHorde Born(7);

	Born.announce();
	return (0);
}