/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 07:50:56 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/12 18:38:50 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {}

void Zombie::setName(std::string Name)
{
	this->_name = Name;
}

void Zombie::setType(std::string Type)
{
	this->_type = Type;
}

void Zombie::announce(void)
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}
