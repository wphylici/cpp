/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 23:35:05 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/23 23:37:19 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion()
{
	std::cout << "* click click click *" << std::endl;
	this->_HP = 80;
	this->_type = "RadScorpion";
}

RadScorpion::RadScorpion(RadScorpion const &radscorpion)
{
	*this = radscorpion;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion& RadScorpion::operator = (RadScorpion const &radscorpion)
{
	if (this == &radscorpion)
		return (*this);
	this->_HP = radscorpion._HP;
	this->_type = radscorpion._type;

	return (*this);
}

void RadScorpion::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}
