/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 08:24:46 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/11 20:05:28 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

# include "Zombie.hpp"

class ZombieEvent
{
	public:
		ZombieEvent();
		void setZombieType(std::string Type);
		Zombie *newZombie(std::string name);
		
	private:
		std::string _type;
};

#endif