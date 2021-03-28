/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 01:44:50 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/27 14:57:25 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{

}

AMateria::AMateria(std::string const &type) : _XP(0), _type(type)
{

}

AMateria::AMateria(AMateria const &amateria)
{
	this->_XP = amateria._XP;
}

AMateria& AMateria::operator = (AMateria const &amateria)
{
	if (this == &amateria)
		return (*this);
	this->_XP = amateria._XP;

	return (*this);
}

AMateria::~AMateria()
{

}

std::string const &AMateria::getType() const
{
	return (this->_type);
}

unsigned int AMateria::getXP() const
{
	return (this->_XP);
}

void AMateria::use(ICharacter &target)
{
	(void)target;

	this->_XP += 10;
}
