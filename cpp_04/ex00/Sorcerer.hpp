/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 16:10:15 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/23 19:10:40 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"
# include "Peon.hpp"
# include "Gazorpian.hpp"

class Sorcerer
{
	public:
		Sorcerer(std::string const Name, std::string const Title);
		Sorcerer(const Sorcerer &sorcerer);
		Sorcerer &operator = (const Sorcerer &sorcerer);
		~Sorcerer();
		std::string getName() const;
		std::string getTitle() const;
		void polymorph(const Victim &v) const;
		void polymorph(const Peon &v) const;
		void polymorph(const Gazorpian &v) const;

	private:
		Sorcerer();
		std::string _name;
		std::string _title;
};

std::ostream &operator << (std::ostream &out, Sorcerer const &sorcerer);

#endif
