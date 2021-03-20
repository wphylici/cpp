/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 14:14:18 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/18 19:19:55 by wphylici         ###   ########.fr       */
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

Fixed::Fixed(const Fixed &fixed) : _num(fixed._num)
{
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