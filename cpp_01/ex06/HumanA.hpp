/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 20:07:07 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/14 03:45:52 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string Name, Weapon &Gun);
		~HumanA();
		void attack();

	private:
		std::string _name;
		Weapon &_gun;
};

#endif