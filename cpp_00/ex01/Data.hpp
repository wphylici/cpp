/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 17:24:21 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/13 03:08:05 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iomanip>
# include <iostream>

class Data
{
	public:
		void InitContact(void);
		void OutputContact(unsigned int num);
		void OutputFullContact(void);
		void getlineUpgrade(std::string *str);
		std::string CutField(std::string);

	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_login;
		std::string	_postal_address;
		std::string	_email_address;
		std::string	_phone_number;
		std::string	_birthday_date;
		std::string	_favorite_meal;
		std::string	_underwear_color;
		std::string	_darkest_secret;
};

#endif