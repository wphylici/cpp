/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 23:49:18 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/13 23:12:35 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <iostream>
#include "Brain.hpp"

class Human
{
	public:
		Human();
		~Human();
		std::string identify() const;
		Brain const &getBrain() const;

	private:
		Brain const _mozg;
};

#endif