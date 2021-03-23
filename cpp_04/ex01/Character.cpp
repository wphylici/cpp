/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 00:03:18 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/24 00:16:16 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{

}

Character::Character(std::string const &Name) : _name(Name), _APnum(40)
{

}

Character::Character(Character const &character)
{
	*this = character;
}

Character& Character::operator = (Character const &character)
{

	if (this == &character)
		return (*this);
	if (weapon)
		delete weapon;
	this->weapon = new AWeapon;
	this->_name = character._name;
	this->_name = character._APnum;
}

Character::~Character()
{

}

void Character::recoverAP()
{

}

void Character::equip(AWeapon *)
{

}

void Character::attack(Enemy *)
{

}

std::string const Character::getName() const
{

}
