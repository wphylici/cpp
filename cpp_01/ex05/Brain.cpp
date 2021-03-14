/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 23:48:40 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/13 23:20:38 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	this->_iq = 20;
	this->_numOfConvolutions = 2;
}

Brain::~Brain() {}

std::string Brain::identify() const
{
	std::ostringstream addr;

	addr << this;
	return (addr.str());
}

