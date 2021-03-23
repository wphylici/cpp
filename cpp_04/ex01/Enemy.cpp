/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 21:30:57 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/23 22:46:11 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{

}

Enemy::Enemy(int hp, std::string const &type) : _HP(hp), _type(type)
{

}

Enemy::Enemy(Enemy const &enemy)
{
	*this = src;
}

Enemy::~Enemy()
{

}

Enemy	&Enemy::operator=(Enemy const &enemy)
{
	if (this == &enemy)
		return (*this);
	this->_HP = enemy._HP;
	this->_type = enemy._type;

	return (*this);
}

std::string const Enemy::getType() const
{
	return (this->_type);
}

int Enemy::getHP() const
{
	return (this->_HP);
}

void Enemy::takeDamage(int damage)
{
	if (damage > 0)
	{
		this->_HP -= damage;
		if (this->_HP < 0)
			this->_HP = 0;
	}
}

std::ostream& operator << (std::ostream &out, Enemy const &enemy)
{
	out << "Type: " << aweapon.getType() << std::endl <<
	"HP: " << aweapon.getHP() << std::endl <<
	return (out);
}

