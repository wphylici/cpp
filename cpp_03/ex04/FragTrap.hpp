/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 06:52:47 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/21 18:48:08 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string const Name);
		FragTrap(const FragTrap &frag_trap);
		FragTrap &operator = (const FragTrap &frag_trap);
		~FragTrap();
		std::string getColor();
		void vaulthunter_dot_exe(std::string const &target);
};

#endif
