/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 21:39:35 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/20 06:12:29 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

/*
 * clang++ -g -Wall -Wextra -Werror -std=c++98 *.cpp
 */

int main()
{

	ScavTrap Inac;
	ScavTrap Cluck("Cluck");

	FragTrap Jakobs("Jakobs");
	FragTrap Dan("Dan");

	Cluck.rangedAttack("Mordecai");
	Inac.meleeAttack("Jakobs");

	Jakobs.takeDamage(20);
	Jakobs.meleeAttack("Inac");
	Dan.vaulthunter_dot_exe("Inac");

	Inac.takeDamage(30 + 100);
	Inac.beRepaired(21);

	Cluck = Inac;

	Cluck.getHitPoints();
	Cluck.challengeNewcomer();

	return (0);
}