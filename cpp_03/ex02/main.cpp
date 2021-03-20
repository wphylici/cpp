/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 21:39:35 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/20 17:12:45 by wphylici         ###   ########.fr       */
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
	ScavTrap Taylor("Taylor");

	Taylor.rangedAttack("Jakobs");
	Jakobs.rangedAttack("Taylor");

	Taylor.meleeAttack("Jakobs");
	Jakobs.meleeAttack("Taylor");

	Taylor.takeDamage(42);
	Jakobs.takeDamage(42);

	Taylor.beRepaired(21);
	Jakobs.beRepaired(21);

	Taylor.challengeNewcomer();
	Jakobs.vaulthunter_dot_exe("Taylor");

	return (0);
}
