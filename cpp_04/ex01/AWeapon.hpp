/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 19:14:46 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/23 21:39:57 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{
	public:
		AWeapon();
		AWeapon(std::string const &name, int apcost, int damage);
		AWeapon(AWeapon const &aweapon);
		virtual ~AWeapon();
		AWeapon &operator = (AWeapon const &aweapon);
		std::string const getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;

	protected:
		std::string _name;
		int _damagePoints;
		int _APcost;
};

std::ostream &operator << (std::ostream &out, AWeapon const &aweapon);

#endif
