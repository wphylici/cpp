/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 06:52:47 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/20 06:37:57 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
# define FragTrap_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string const Name);
		FragTrap(const FragTrap &frag_trap);
		FragTrap &operator = (const FragTrap &frag_trap);
		~FragTrap();
		void Born();
		void vaulthunter_dot_exe(std::string const &target);
};

#endif
