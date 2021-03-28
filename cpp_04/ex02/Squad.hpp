/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 04:34:20 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/27 04:17:47 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include "ISquad.hpp"


class Squad : public ISquad
{
	public:
		Squad();
		Squad(Squad const &squad);
		Squad &operator = (Squad const &squad);
		virtual ~Squad();

		virtual int getCount() const;
		virtual ISpaceMarine *getUnit(int) const;
		virtual int push(ISpaceMarine *);

	private:
		int _count;
		ISpaceMarine *_units[100];

};

#endif
