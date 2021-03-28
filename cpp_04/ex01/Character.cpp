/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 00:03:18 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/28 01:00:48 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{

}

Character::Character(std::string const &Name) : _name(Name), _APnum(40), _weapon(NULL)
{

}

Character::Character(Character const &character)
{
	*this = character;
}


Character::~Character()
{

}

Character& Character::operator = (Character const &character)
{
	if (this == &character)
		return (*this);
	this->_weapon = character._weapon;
	this->_name = character._name;
	this->_name = character._APnum;

	return(*this);
}

void Character::recoverAP()
{
	if (this->_APnum + 10 <= 40)
		this->_APnum += 10;
}

void Character::equip(AWeapon *Weapon)
{
	this->_weapon = Weapon;
}

void Character::attack(Enemy *Enemy)
{
	if (!this->_weapon || this->_APnum < this->_weapon->getAPCost())
	{
		if (!this->_weapon)
			std::cout << "No weapons" << std::endl;
		if (this->_APnum < this->_weapon->getAPCost())
			std::cout << "Not enough AP" << std::endl;
		return ;
	}
	if (Enemy)
	{
		this->_APnum -= this->_weapon->getAPCost();
		std::cout << this->_name << " attacks " << Enemy->getType() << " with a " <<
		this->_weapon->getName() << std::endl;
		this->_weapon->attack();
		Enemy->takeDamage(this->_weapon->getDamage());
		if (Enemy->getHP() == 0)
		{
			delete Enemy;
			Enemy = NULL;
		}
	}
}

std::string const Character::getName() const
{
	return (this->_name);
}

int Character::getAPnum() const
{
	return (this->_APnum);
}

AWeapon *Character::getWeapon() const
{
	return (this->_weapon);
}

std::ostream& operator << (std::ostream &out, Character const &character)
{
	if (character.getWeapon())
		out << character.getName() << " has " << character.getAPnum() <<
		" AP and wields a " << character.getWeapon()->getName() << std::endl;
	else
		out << character.getName() << " has " << character.getAPnum() <<
		" AP and is unarmed" << std::endl;
	return (out);
}

