/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 21:39:35 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/20 20:44:17 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

/*
 * clang++ -g -Wall -Wextra -Werror -std=c++98 *.cpp
 */

int main()
{

	NinjaTrap INAC("INAC");

	INAC.rangedAttack("Jakobs");
	INAC.meleeAttack("Jakobs");
	INAC.takeDamage(42);
	INAC.beRepaired(21);

	ClapTrap BLTPS("BLTPS");
	FragTrap Jakobs("Jakobs");
	ScavTrap Mark("Mark");
	NinjaTrap Cluck("Cluck");

	Cluck.ninjaShoebox(Jakobs);
	Cluck.ninjaShoebox(Mark);
	Cluck.ninjaShoebox(BLTPS);
	Cluck.ninjaShoebox(INAC);

	return (0);
}
