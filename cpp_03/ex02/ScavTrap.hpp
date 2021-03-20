/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 06:52:47 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/20 17:06:18 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string const Name);
		ScavTrap(const ScavTrap &scav_trap);
		ScavTrap &operator = (const ScavTrap &scav_trap);
		~ScavTrap();
		unsigned int getHitPoints();
		void Born();
		void challengeNewcomer();
};

#endif
