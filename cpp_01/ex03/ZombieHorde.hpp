/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 13:12:57 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/12 22:17:36 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include <cstdlib>
# include <time.h>
# include "Zombie.hpp"

class ZombieHorde
{
	public:
		ZombieHorde(unsigned int N);
		~ZombieHorde();
		std::string randomChump(void);
		void announce(void);

	private:
		Zombie *_horde;
		unsigned int _n;
};

#endif