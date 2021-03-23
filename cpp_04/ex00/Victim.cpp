/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 20:06:54 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/23 17:52:50 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string const Name) : _name(Name)
{
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &victim)
{
	*this = victim;
}

Victim &Victim::operator = (const Victim &victim)
{
	if (this == &victim)
		return (*this);
	this->_name = victim._name;
	return (*this);
}

std::string Victim::getName() const
{
	return (this->_name);
}

Victim::~Victim()
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

std::ostream &operator << (std::ostream &out, Victim const &victim)
{
	out << "I'm " << victim.getName() << " and I like otters!" << std::endl;
	return (out);
}

void Victim::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}
