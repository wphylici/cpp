/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 16:23:05 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/23 17:55:37 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include "Victim.hpp"

Peon::Peon(std::string Name) : Victim(Name), _name(Name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &peon) : Victim(peon._name)
{
	*this = peon;
}

Peon &Peon::operator = (const Peon &peon)
{
	if (this == &peon)
		return (*this);
	this->_name = peon._name;

	return (*this);
}

std::string Peon::getName() const
{
	return (this->_name);
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

std::ostream &operator << (std::ostream &out, Peon const &peon)
{
	out << "I'm " << peon.getName() << " and I like otters!" << std::endl;
	return (out);
}

void Peon::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}
