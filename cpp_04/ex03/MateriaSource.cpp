/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 14:03:00 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/27 14:43:59 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_forClone[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &materiasource)
{
	for (size_t i = 0; i < 4; i++)
		this->_forClone[i] = materiasource._forClone[i];
}

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
		this->_forClone[i] = NULL;
}

MateriaSource& MateriaSource::operator = (MateriaSource const &materiasource)
{
	if (this == &materiasource)
		return *this;
	for (size_t i = 0; i < 4; i++)
		this->_forClone[i] = materiasource._forClone[i];
	return *this;
}

void MateriaSource::learnMateria(AMateria *learnmateria)
{
	if (!learnmateria)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!this->_forClone[i])
		{
			this->_forClone[i] = learnmateria;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_forClone[i]->getType() == type)
			return (this->_forClone[i]->clone());
	}
	return NULL;
}
