/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 20:07:40 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/14 02:35:21 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string Name) : _name(Name), _gun(NULL){}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &Gun)
{
	this->_gun = &Gun;
}

void HumanB::attack()
{
	std::cout << this->_name << " attacks with his " << this->_gun->getType() << std::endl;
}