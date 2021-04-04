/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 18:11:11 by wphylici          #+#    #+#             */
/*   Updated: 2021/04/04 19:22:32 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T> void swap(T a, T b)
{
	T tmp;

	tmp = b;
	b = a;
	a = b;
}

template <typename T> T min(T a, T b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template <typename T> T max(T a, T b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

#endif
