/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 08:22:46 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/27 15:03:44 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const Name) : _name(Name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(Character const &character)
{
	for (int i = 0; this->_inventory[i]; i++)
		delete this->_inventory[i];
	for (int i = 0; this->_inventory[i]; i++)
		this->_inventory[i] = character._inventory[i]->clone();
	this->_name = character._name;
}

Character::~Character()
{
	for (int i = 0; this->_inventory[i]; i++)
		delete this->_inventory[i];
}

Character &Character::operator = (Character const &character)
{
	if (this == &character)
		return (*this);
	for (int i = 0; this->_inventory[i]; i++)
		delete this->_inventory[i];
	for (int i = 0; this->_inventory[i]; i++)
		this->_inventory[i] = character._inventory[i]->clone();
	this->_name = character._name;

	return (*this);
}

std::string const &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == m)
			return;
		else if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx)
{
	if (!this->_inventory[idx])
		return ;
	for (int i = idx; i >= 0 && i < 4; i++)
	{
		if (i + 1 < 4 && this->_inventory[i + 1])
		{
			this->_inventory[i] = this->_inventory[i + 1];
		}
		else if (i + 1 < 4 && !this->_inventory[i + 1])
		{
			this->_inventory[i] = NULL;
			return ;
		}
		else
			this->_inventory[i] = NULL;
	}

}

void Character::use(int idx, ICharacter& target)
{
	if (!this->_inventory[idx] || idx >= 4 || idx < 0)
		return ;
	this->_inventory[idx]->use(target);
}
