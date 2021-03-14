/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 13:37:01 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/13 03:09:22 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

std::string Data::CutField(std::string str)
{
	if (str.size() > 10)
	{
		str.resize(9, '\0');
		str.resize(10, '.');
	}
	return (str);
}


void Data::OutputContact(unsigned int index)
{
	if (index == 1)
	{
		std::cout << std::endl << "---------------------------------------------" << std::endl << "|";
		std::cout << std::setw(10) << "Index" << "|";
		std::cout << std::setw(10) << "First name" << "|";
		std::cout << std::setw(10) << "Last name" << "|";
		std::cout << std::setw(10) << "Nickname" << "|" << std::endl;
	}
	std::cout << "|" << std::setw(10) << index << "|";
	std::cout << std::setw(10) << this->CutField(this->_first_name) << "|";
	std::cout << std::setw(10) << this->CutField(this->_last_name) << "|";
	std::cout << std::setw(10) << this->CutField(this->_nickname) << "|" << std::endl;
}

void Data::OutputFullContact(void)
{
	std::cout << std::endl << "First name            : " << this->_first_name << std::endl;
	std::cout << "Last name             : " << this->_last_name << std::endl;
	std::cout << "Nickname              : " << this->_nickname << std::endl;
	std::cout << "Login                 : " << this->_login << std::endl;
	std::cout << "Postal address        : " << this->_postal_address << std::endl;
	std::cout << "Email address         : " << this->_email_address << std::endl;
	std::cout << "Phone number          : " << this->_phone_number << std::endl;
	std::cout << "Birthday date         : " << this->_birthday_date << std::endl;
	std::cout << "Favorite meal         : " << this->_favorite_meal << std::endl;
	std::cout << "Underwear color       : " << this->_underwear_color << std::endl;
	std::cout << "Darkest secret        : " << this->_darkest_secret << std::endl << std::endl;
}

void Data::getlineUpgrade(std::string *str)
{
	std::getline(std::cin, *str);
	if (std::cin.eof())
	{
		std::cout << "  \b\b" << std::endl;
		exit(EXIT_SUCCESS);
	}
}

void Data::InitContact(void)
{
	std::cout << "First name            : ";
	Data::getlineUpgrade(&this->_first_name);
	std::cout << "Last name             : ";
	Data::getlineUpgrade(&this->_last_name);
	std::cout << "Nickname              : ";
	Data::getlineUpgrade(&this->_nickname);
	std::cout << "Login                 : ";
	Data::getlineUpgrade(&this->_login);
	std::cout << "Postal address        : ";
	Data::getlineUpgrade(&this->_postal_address);
	std::cout << "Email address         : ";
	Data::getlineUpgrade(&this->_email_address);
	std::cout << "Phone number          : ";
	Data::getlineUpgrade(&this->_phone_number);
	std::cout << "Birthday date         : ";
	Data::getlineUpgrade(&this->_birthday_date);
	std::cout << "Favorite meal         : ";
	Data::getlineUpgrade(&this->_favorite_meal);
	std::cout << "Underwear color       : ";
	Data::getlineUpgrade(&this->_underwear_color);
	std::cout << "Darkest secret        : ";
	Data::getlineUpgrade(&this->_darkest_secret);
	std::cout << std::endl << "Сontaсt added successfully" << std::endl;
}