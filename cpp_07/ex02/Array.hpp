/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:50:06 by wphylici          #+#    #+#             */
/*   Updated: 2021/04/06 17:31:58 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	public:
		Array()
		{
			_array = NULL;
		}

		Array(unsigned int n)
		{
			this->_n = n;
			_array = new T[n];
		}

		Array(Array const &array)
		{

		}

		Array &operator = (Array const &array)
		{

		}

	private:
		T *_array;
		unsigned int _n;
};

#endif
