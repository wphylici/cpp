/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 14:55:04 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/21 18:44:20 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include <iostream>

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : virtual public FragTrap, virtual public NinjaTrap
{
	public:
		SuperTrap();
		SuperTrap(std::string const Name);
		SuperTrap(const SuperTrap &super_trap);
		SuperTrap &operator = (const SuperTrap &super_trap);
		~SuperTrap();
		void meleeAttack(std::string const &target);
		void rangedAttack(std::string const &target);
};



#endif
