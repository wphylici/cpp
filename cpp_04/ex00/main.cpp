/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 16:49:33 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/23 19:06:52 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Gazorpian.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Gazorpian mark("Mark");

	std::cout << robert << jim << joe << mark;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(mark);
	return 0;
}
