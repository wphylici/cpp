/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 02:53:16 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/10 05:55:14 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string const Name, std::string const Species, std::string const Color,
std::string const PlaceOfResidence)
{
	std::cout << HI_GREEN << "The constructor is called" << RESET << std::endl;
	this->_name = Name;
	this->_species = Species;
	this->_color = Color;
	this->_placeOfResidence = PlaceOfResidence;
}

Pony::~Pony()
{
	std::cout << HI_GREEN << "The destructor is called" << RESET << std::endl;
}

void Pony::PonyInformation(void)
{
	std::cout << "Hi, i am " << HI_PURPLE << this->_species << RESET << " and my name is " << HI_PURPLE <<
	this->_name << RESET << "." << std::endl << "I'm from " << HI_PURPLE << this->_placeOfResidence <<
	RESET << ". I really like my " << HI_PURPLE << this->_color << RESET << " color." << std::endl;
}