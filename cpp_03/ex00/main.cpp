/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 21:39:35 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/20 06:12:21 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
 * clang++ -g -Wall -Wextra -Werror -std=c++98 *.cpp
 */

int main()
{

	FragTrap Jakobs;
	FragTrap Dan;

	Dan.rangedAttack("Inac");
	Dan.meleeAttack("Cluck");

	Dan.takeDamage(2);
	Dan.takeDamage(50);
	Dan.takeDamage(100);

	Jakobs = Dan;

	Jakobs.beRepaired(100);
	Jakobs.vaulthunter_dot_exe("The Destroyer");

	return (0);
}