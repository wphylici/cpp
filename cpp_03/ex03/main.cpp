/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 21:39:35 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/20 07:32:36 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

/*
 * clang++ -g -Wall -Wextra -Werror -std=c++98 *.cpp
 */

int main()
{

	FragTrap Jakobs("Jakobs");
	ScavTrap Inac("Inac");

	Inac.rangedAttack("Jakobs");
	Jakobs.rangedAttack("Inac");

	Inac.meleeAttack("Jakobs");
	Jakobs.meleeAttack("Inac");

	Inac.takeDamage(42);
	Jakobs.takeDamage(42);

	Inac.beRepaired(21);
	Jakobs.beRepaired(21);

	Inac.challengeNewcomer();
	Jakobs.vaulthunter_dot_exe("Inac");

	return (0);
}