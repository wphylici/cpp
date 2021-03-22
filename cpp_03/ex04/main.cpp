/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 21:39:35 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/21 20:14:59 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

/*
 * clang++ -g -Wall -Wextra -Werror -std=c++98 *.cpp
 */

int main()
{
	SuperTrap Johny("Johny");

	Johny.meleeAttack("enemy");
	Johny.rangedAttack("enemy");

	return (0);
}
