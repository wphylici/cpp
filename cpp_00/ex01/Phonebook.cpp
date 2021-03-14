/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 06:37:16 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/11 20:01:13 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Phonebook.hpp"

Phonebook::Phonebook(void) : _numContacts(0), _contactsSize(8) {}

unsigned int Phonebook::getNumContacts(void)
{
	return (this->_numContacts);
}

void Phonebook::CreateContact(void)
{
	if ((const int)this->_numContacts == this->_contactsSize)
		std::cout << "ERROR: Contact list is full" << std::endl;
	else
	{
		std::cout << "Enter information about the new contact" << std::endl << std::endl;
		this->_contacts[this->_numContacts].InitContact();
		this->_numContacts++;
	}
}

void Phonebook::Display(void)
{
	unsigned int index = 1;
	std::string str;

	if (this->_numContacts == 0)
		std::cout << "Contact list is empty" << std::endl;
	else
	{
		for (unsigned int i = 0; i < this->_numContacts; i++)
			this->_contacts[i].OutputContact(index++);
		std::cout << "---------------------------------------------" << std::endl << std::endl;
		index = 0;
		while (1)
		{
			std::cout << "Enter contact index to get detailed information: ";
			std::getline(std::cin, str);
			if (std::cin.eof())
			{
				std::cout << "  \b\b" << std::endl;
				exit(EXIT_SUCCESS);
			}
			if (str != "")
				break;
		}
		index = std::atoi(str.c_str());
		if (index > 8  || index <= 0)
			std::cout  << std::endl << "ERROR: contact can only be with index from 1 to 8" << std::endl;
		else if (index > this->_numContacts && index < 9)
			std::cout << std::endl << "ERROR: contact not found" << std::endl;
		else
			this->_contacts[index - 1].OutputFullContact();
	}
}
