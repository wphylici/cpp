/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 15:26:28 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/20 20:29:18 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "NinjaTrap.hpp"


class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap();
		NinjaTrap(std::string const Name);
		NinjaTrap(const NinjaTrap &ninja_trap);
		NinjaTrap &operator = (const NinjaTrap &ninja_trap);
		~NinjaTrap();
		std::string getColor();
		void Born();
		void ninjaShoebox(ClapTrap &arg);
		void ninjaShoebox(FragTrap &arg);
		void ninjaShoebox(ScavTrap &arg);
		void ninjaShoebox(NinjaTrap &arg);
};

#endif
