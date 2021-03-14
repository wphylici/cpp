/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 07:52:00 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/12 23:36:56 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

/* 	to compile use:

	clang++ -g -Wall -Wextra -Werror -std=c++98 *.cpp

*/

Zombie *randomChump(void)
{
	srand(clock());
	char consonents[] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z'};
	char vowels[] = {'a','e','i','o','u','y'};

	std::string name = "";
	int leinght = rand() % 4 + 3;
	name += toupper(consonents[rand() % 19]);
	for (int i = 1; i < leinght; i++)
	{
		name += vowels[rand() % 5];
		if (i++ == leinght - 1)
			break;
		name += consonents[rand() % 19];
	}
	Zombie *RandomZombie = new Zombie(name, "Shambler");
	return (RandomZombie);
}

int main()
{
	Zombie FirstZombie("Mark", "Runner");
	FirstZombie.announce();

	ZombieEvent Event;
	Event.setZombieType("Clicker");

	Zombie *SecondZombie = Event.newZombie("Sam");
	SecondZombie->announce();

	Zombie *RandomZombie = randomChump();
	RandomZombie->announce();

	delete SecondZombie;
	delete RandomZombie;
	return (0);
}