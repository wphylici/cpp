/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 20:06:46 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/23 17:44:31 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim
{
	public:
		Victim(std::string const Name);
		Victim(const Victim &victim);
		Victim &operator = (const Victim &victim);
		~Victim();
		std::string getName() const;
		void getPolymorphed() const;

	private:
		Victim();
		std::string _name;
};

std::ostream &operator << (std::ostream &out, Victim const &victim);

#endif
