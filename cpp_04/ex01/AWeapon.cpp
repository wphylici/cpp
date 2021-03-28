/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 19:15:10 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/26 04:13:56 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{

}

AWeapon::AWeapon(std::string const &Name, int Apcost, int DamagePoints) : _name(Name),
_APcost(Apcost), _damagePoints(DamagePoints)
{

}

AWeapon::AWeapon(AWeapon const &aweapon)
{
	*this = aweapon;
}

AWeapon::~AWeapon()
{

}

AWeapon	&AWeapon::operator=(AWeapon const &aweapon)
{
	if (this == &aweapon)
		return (*this);
	this->_name = aweapon._name;
	this->_APcost = aweapon._APcost;
	this->_damagePoints = aweapon._damagePoints;

	return (*this);
}

std::string const AWeapon::getName() const
{
	return (this->_name);
}

int AWeapon::getAPCost() const
{
	return (this->_APcost);
}

int AWeapon::getDamage() const
{
	return (this->_damagePoints);
}
