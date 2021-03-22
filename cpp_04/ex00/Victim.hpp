/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 20:06:46 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/22 20:25:58 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Victim
{
	public:
		Victim();
		Victim(std::string const Name);
		Victim(const Victim &sorcerer);
		Victim &operator = (const Victim &victim);
		~Victim();
		std::string getName() const;
		std::string getTitle() const;

	private:
		std::string _name;
		std::string _title;
};

std::ostream &operator << (std::ostream &out, Victim const &victim);
