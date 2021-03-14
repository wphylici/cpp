/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 13:13:08 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/12 22:32:01 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/time.h>
#include "ZombieHorde.hpp"

std::string ZombieHorde::randomChump(void)
{
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
	return (name);
}

ZombieHorde::ZombieHorde(unsigned int N) : _n(N)
{
	_horde = new Zombie[N];
	srand(clock());
	for (unsigned int i =  0; i < this->_n; i++)
	{
		_horde[i].setType("Clicker");
		_horde[i].setName(this->randomChump());
	}
}

ZombieHorde::~ZombieHorde()
{
	delete [] _horde;
	std::cout << std::endl << BHI_RED << "Zombies are dead" << RESET << std::endl;
}

void ZombieHorde::announce(void)
{
	for (unsigned int i = 0; i < this->_n; i++)
		_horde[i].announce();
}