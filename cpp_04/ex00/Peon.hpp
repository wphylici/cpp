/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 16:19:43 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/23 17:46:43 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim
{
	public:
		Peon(std::string const Name);
		Peon(const Peon &peon);
		Peon &operator = (const Peon &peon);
		~Peon();
		std::string getName() const;
		void getPolymorphed() const;

	private:
		Peon();
		std::string _name;
};

std::ostream &operator << (std::ostream &out, Peon const &peon);

#endif
