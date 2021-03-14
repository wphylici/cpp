/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 05:12:20 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/11 19:53:21 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Data.hpp"

class Phonebook
{
	public:
		Phonebook();
		void CreateContact(void);
		void Display(void);
		unsigned int getNumContacts();

	private:
		Data _contacts[8];
		unsigned int _numContacts;
		const int	_contactsSize;
};

#endif