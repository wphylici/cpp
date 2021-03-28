/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 04:04:35 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/27 07:33:12 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{

}

Ice::Ice(std::string const &type) : AMateria(type)
{

}

Ice::Ice(Ice const &ice)
{
	*this = ice;
}

Ice::~Ice()
{

}

Ice &Ice::operator = (Ice const &ice)
{
	if (this == &ice)
		return *this;
	return *this;
}

AMateria* Ice::clone() const
{
	Ice *tmp = new Ice(*this);

	return (tmp);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}
