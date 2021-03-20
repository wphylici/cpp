/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 21:39:35 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/20 17:11:41 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

/*
 * clang++ -g -Wall -Wextra -Werror -std=c++98 *.cpp
 */

int main()
{

	ScavTrap Taylor;
	ScavTrap Cluck("Cluck");

	FragTrap Jakobs("Jakobs");
	FragTrap Dan("Dan");

	Cluck.rangedAttack("Mordecai");
	Taylor.meleeAttack("Jakobs");

	Jakobs.takeDamage(20);
	Jakobs.meleeAttack("Taylor");
	Dan.vaulthunter_dot_exe("Taylor");

	Taylor.takeDamage(30 + 100);
	Taylor.beRepaired(21);

	Cluck = Taylor;

	Cluck.getHitPoints();
	Cluck.challengeNewcomer();

	return (0);
}
