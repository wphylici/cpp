/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 08:19:23 by wphylici          #+#    #+#             */
/*   Updated: 2021/04/10 19:48:08 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <time.h>
# include <vector>

class NotFoundException : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return ("Not found");
		};
};

template <typename T, typename E>
E easyfind(T &t, E e)
{
	typename T::iterator it = std::find(t.begin(), t.end(), e);

	if (it == t.end())
		throw NotFoundException();

	return (*it);
}

template <typename T>
int easyfind(T &t, int n)
{
	typename T::iterator it = std::find(t.begin(), t.end(), n);

	if (it == t.end())
		throw NotFoundException();

	return (*it);
}

#endif
