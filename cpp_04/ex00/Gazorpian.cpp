/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Gazorpian.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 18:50:02 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/23 19:00:55 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Gazorpian.hpp"
#include "Victim.hpp"

Gazorpian::Gazorpian(std::string Name) : Victim(Name), _name(Name)
{
	std::cout << "Hi, Gazorpazorp!" << std::endl;
}

Gazorpian::Gazorpian(const Gazorpian &gazorpian) : Victim(gazorpian._name)
{
	*this = gazorpian;
}

Gazorpian &Gazorpian::operator = (const Gazorpian &gazorpian)
{
	if (this == &gazorpian)
		return (*this);
	this->_name = gazorpian._name;

	return (*this);
}

std::string Gazorpian::getName() const
{
	return (this->_name);
}

Gazorpian::~Gazorpian()
{
	std::cout << "Bye, Gazorpazorp!" << std::endl;
}

std::ostream &operator << (std::ostream &out, Gazorpian const &gazorpian)
{
	out << "I'm " << gazorpian.getName() << " and I like alpacas!" << std::endl;
	return (out);
}

void Gazorpian::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a Cronenberg!" << std::endl;
}
