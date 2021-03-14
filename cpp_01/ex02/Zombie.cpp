/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 07:50:56 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/11 20:03:06 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string Name, std::string Type) : _name(Name), _type (Type) {}

void Zombie::announce(void)
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}
