/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 21:01:09 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/28 00:47:23 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include "PortalGun.hpp"

/*
 * clang++ -g -Wall -Wextra -Werror -std=c++98 *.cpp
 */

int main()
{
	Character *me = new Character("me");

	std::cout << *me;

	Enemy *b = new RadScorpion();
	Enemy *a = new SuperMutant();

	AWeapon *pr = new PlasmaRifle();
	AWeapon *pf = new PowerFist();
	AWeapon *pg = new PortalGun();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();

	me->equip(pf);
	std::cout << *me;
	me->attack(a);
	std::cout << *me;
	me->attack(a);
	std::cout << *me;

	me->equip(pr);
	me->attack(a);
	std::cout << *me;
	me->attack(a);
	std::cout << *me;

	me->equip(pg);
	me->recoverAP();
	me->attack(a);
	std::cout << *me;
	me->attack(a);
	std::cout << *me;

	if (a->getHP())
		delete a;
	if (b->getHP())
		delete b;
	delete pr;
	delete pf;
	delete pg;
	delete me;

	return 0;
}
