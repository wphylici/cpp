/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 08:27:37 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/11 20:04:14 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) : _type("Runners") {}

void ZombieEvent::setZombieType(std::string Type)
{
	this->_type = Type;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	Zombie *newZ = new Zombie(name, this->_type);
	return (newZ);
}