/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 14:14:18 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/22 11:26:46 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _num(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int Num)
{
	std::cout << "Int constructor called" << std::endl;

	this->_num = Num * (1 << this->_fractionalBits);
}

Fixed::Fixed(const float Num)
{
	std::cout << "Float constructor called" << std::endl;

	this->_num = roundf(Num * (1 << this->_fractionalBits));
}

Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator = (const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_num = fixed._num;
	return (*this);
}

float Fixed::toFloat(void) const
{
	return ((float)this->_num / (1 << this->_fractionalBits));
}

int Fixed::toInt(void) const
{
	return ((float)this->_num / (1 << this->_fractionalBits));
}

std::ostream &operator << (std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return (out);
}
