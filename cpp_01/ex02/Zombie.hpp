/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 06:48:03 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/11 20:56:55 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <cstdlib>
# include <time.h>

class Zombie
{
	public:
		Zombie(std::string Name, std::string Type);
		void announce(void);

	private:
		std::string _name;
		std::string _type;
};

#endif