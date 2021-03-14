/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 23:49:13 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/13 23:16:18 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <sstream>

class Brain
{
	public:
		Brain();
		~Brain();
		std::string identify() const;

	private:
		unsigned int _iq;
		unsigned int _numOfConvolutions;
};

#endif