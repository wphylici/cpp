/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 23:49:16 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/13 23:13:12 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() {}

Human::~Human() {}

std::string Human::identify() const
{
	return(this->_mozg.identify());
}

Brain const &Human::getBrain() const
{
	return (this->_mozg);
}