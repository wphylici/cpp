/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 20:07:42 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/14 03:46:13 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string Name, Weapon &Gun) : _name(Name), _gun(Gun){}

HumanA::~HumanA() {}

void HumanA::attack()
{
	std::cout << this->_name << " attacks with his " << this->_gun.getType() << std::endl;
}