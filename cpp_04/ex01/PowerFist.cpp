/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 20:12:30 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/24 21:30:23 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist()
{
	this->_name = "PowerFist";
	this->_damagePoints = 50;
	this->_APcost = 8;

}

PowerFist::PowerFist(PowerFist const &powerfist)
{
	*this = powerfist;
}

PowerFist::~PowerFist()
{

}

PowerFist &PowerFist::operator = (PowerFist const &powerfist)
{
	if (this == &powerfist)
		return (*this);
	_name = powerfist._name;
	_damagePoints = powerfist._damagePoints;
	_APcost = powerfist._APcost;

	return (*this);
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
