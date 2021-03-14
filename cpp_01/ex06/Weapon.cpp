/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 19:49:25 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/14 03:35:17 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string Type) : _type(Type) {}

Weapon::~Weapon() {}

std::string const &Weapon::getType() const
{
	return(this->_type);
}

void Weapon::setType(std::string Type)
{
	this->_type = Type;
}