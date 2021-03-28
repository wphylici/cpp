/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PortalGun.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 16:42:16 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/27 16:48:32 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PortalGun.hpp"

PortalGun::PortalGun()
{
	this->_name = "PortalGun";
	this->_damagePoints = 42;
	this->_APcost = 10;

}

PortalGun::PortalGun(PortalGun const &portalgun)
{
	*this = portalgun;
}

PortalGun::~PortalGun()
{

}

PortalGun &PortalGun::operator = (PortalGun const &portalgun)
{
	if (this == &portalgun)
		return (*this);
	_name = portalgun._name;
	_damagePoints = portalgun._damagePoints;
	_APcost = portalgun._APcost;

	return (*this);
}

void PortalGun::attack() const
{
	std::cout << "* vjuuu... vjuuu...! *" << std::endl;
}
