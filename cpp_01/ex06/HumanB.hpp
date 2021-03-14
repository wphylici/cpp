/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 20:07:47 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/14 02:34:55 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string Name);
		~HumanB();
		void setWeapon(Weapon &Gun);
		void attack();

	private:
		std::string _name;
		Weapon *_gun;
};

#endif