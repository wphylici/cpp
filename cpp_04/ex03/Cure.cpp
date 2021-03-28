/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 07:36:37 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/27 07:43:00 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{

}

Cure::Cure(std::string const &type) : AMateria(type)
{

}

Cure::Cure(Cure const &cure)
{
	*this = cure;
}

Cure::~Cure()
{

}

Cure &Cure::operator = (Cure const &cure)
{
	if (this == &cure)
		return *this;
	return *this;
}

AMateria* Cure::clone() const
{
	Cure *tmp = new Cure(*this);

	return (tmp);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	AMateria::use(target);
}
