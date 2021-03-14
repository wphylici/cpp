/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 06:48:03 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/12 18:37:52 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <cstdlib>
# include <time.h>

# define BHI_RED	"\e[1;91m"
# define RESET		"\e[0m"

class Zombie
{
	public:
		Zombie();
		void setName(std::string Name);
		void setType(std::string Type);
		void announce(void);

	private:
		std::string _name;
		std::string _type;
};

#endif