/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Gazorpian.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 18:50:32 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/23 18:52:21 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAZORPIAN_HPP
# define GAZORPIAN_HPP

# include "Victim.hpp"

class Gazorpian : public Victim
{
	public:
		Gazorpian(std::string const Name);
		Gazorpian(const Gazorpian &gazorpian);
		Gazorpian &operator = (const Gazorpian &gazorpian);
		~Gazorpian();
		std::string getName() const;
		void getPolymorphed() const;

	private:
		Gazorpian();
		std::string _name;
};

std::ostream &operator << (std::ostream &out, Gazorpian const &peon);

#endif
