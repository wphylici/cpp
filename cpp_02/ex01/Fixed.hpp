/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:38:31 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/18 19:19:45 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const int Num);
		Fixed(const float Num);
		Fixed(const Fixed &fixed);
		~Fixed();
		Fixed &operator = (const Fixed &fixed);
		float toFloat(void) const;
		int toInt(void) const;

	private:
		int	_num;
		static const int _fractionalBits = 8;
};

std::ostream &operator << (std::ostream &out, Fixed const &fixed);

#endif
