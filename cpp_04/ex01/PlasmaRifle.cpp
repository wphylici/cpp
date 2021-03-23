/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 19:43:02 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/23 20:16:22 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
{
	this->_name = "Plasma Rifle";
	this->_damagePoints = 21;
	this->_APcost = 5;

}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &plasmarifle)
{
	*this = plasmarifle;
}

PlasmaRifle::~PlasmaRifle()
{

}

PlasmaRifle& PlasmaRifle::operator = (PlasmaRifle const &plasmarifle)
{
	if (this == &plasmarifle)
		return (*this);
	_name = plasmarifle._name;
	_damagePoints = plasmarifle._damagePoints;
	_APcost = plasmarifle._APcost;
}

void		PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
