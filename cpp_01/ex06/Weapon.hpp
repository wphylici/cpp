/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 19:48:39 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/14 03:33:17 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	public:
		Weapon(std::string Type);
		~Weapon();
		std::string const &getType() const;
		void setType(std::string Type);

	private:
		std::string _type;
};

#endif