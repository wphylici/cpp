/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 23:39:45 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/24 00:06:45 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	public:
		Character();
		Character(std::string const &name);
		Character(Character const &character);
		Character &operator = (Character const &character);
		~Character();

		void recoverAP();
		void equip(AWeapon *);
		void attack(Enemy *);
		std::string const getName() const;

	private:
		std::string _name;
		int _APnum;
		AWeapon *weapon;

};

std::ostream &operator << (std::ostream &out, Enemy const &character);

#endif
