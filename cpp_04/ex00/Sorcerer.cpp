/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 16:19:45 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/22 20:52:46 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(std::string const Name, std::string const Title) : _name(Name), _title(Title)
{
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &sorcerer)
{
	*this = sorcerer;
}

Sorcerer &Sorcerer::operator = (const Sorcerer &sorcerer)
{
	if (this == &sorcerer)
		return (*this);
	this->_name = sorcerer._name;
	this->_title = sorcerer._title;

	return (*this);
}

std::string Sorcerer::getTitle() const
{
	return (this->_title);
}

std::string Sorcerer::getName() const
{
	return (this->_name);
}

std::ostream &operator << (std::ostream &out, Sorcerer const &sorcerer)
{
	out << "I'm " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!";
	return (out);
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_title << ", is dead!" << std::endl;
}
