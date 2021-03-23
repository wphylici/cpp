/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 21:53:12 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/23 22:51:08 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	this->_HP = 170;
	this->_type = "Super Mutant";
}

SuperMutant::SuperMutant(SuperMutant const &supermutant)
{
	*this = supermutant;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant& SuperMutant::operator = (SuperMutant const &supermutant)
{
	if (this == &supermutant)
		return (*this);
	this->_HP = supermutant._HP;
	this->_type = supermutant._type;

	return (*this);
}

void SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}
