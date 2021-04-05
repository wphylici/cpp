/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 02:04:11 by wphylici          #+#    #+#             */
/*   Updated: 2021/04/05 03:37:40 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

int j = 0;

template <typename T1, typename T2>
void iter(T1 *arr, T2 len, void(func)(T1 &))
{
	for (T2 i = 0; i < len; i++)
		func(arr[i]);
	j = 0;
}

template <typename T>
void ft_print(T c)
{
	std::cout << "[" << j++ << "]  " << c << std::endl;
}

#endif