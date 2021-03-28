/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 04:30:52 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/27 16:56:24 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : _count(0)
{
}

Squad::Squad(Squad const &squad)
{
	std::cout << "tut" << std::endl;
	for (int i = 0; this->_units[i]; i++)
		delete this->_units[i];
	for (int i = 0; i < squad._count; i++)
		this->_units[i] = squad._units[i]->clone();
	//this->_units[0] = squad._units[0];
	this->_count = squad._count;
}

Squad::~Squad()
{
	for (int i = 0; this->_units[i]; i++)
		delete this->_units[i];
}

Squad &Squad::operator = (Squad const &squad)
{
	if (this == &squad)
		return (*this);
	for (int i = 0; this->_units[i]; i++)
		delete this->_units[i];
	for (int i = 0; i < squad._count; i++)
		this->_units[i] = squad._units[i]->clone();
	//this->_units[0] = squad._units[0];
	this->_count = squad._count;

	return (*this);
}

int Squad::getCount() const
{
	return (this->_count);
}

ISpaceMarine *Squad::getUnit(int N) const
{
	if (N < 0 || this->_units[N] == NULL)
		return (NULL);
	return (this->_units[N]);
}

int Squad::push(ISpaceMarine *SMarine)
{
	int i = 0;
	while(this->_units[i])
		i++;
	this->_units[i] = SMarine;
	this->_count++;
	return (this->_count);
}
