/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 17:01:16 by wphylici          #+#    #+#             */
/*   Updated: 2021/04/11 16:07:00 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int n) : _n(n) {}

Span::Span(const Span &span)
{
	*this = span;
}

Span &Span::operator=(const Span &span)
{
	if (this == &span)
		return (*this);
	this->_n = span._n;
	this->_object = span._object;

	return (*this);
}

Span::~Span() {}

void Span::addNumber(const int &number)
{
	if (this->_object.size() == this->_n)
		throw StorageIsFullException();
	this->_object.push_back(number);
}

void Span::addNumber(std::vector<int> &number)
{
	unsigned int i = 0;

	if (this->_object.size() == this->_n)
		throw StorageIsFullException();

	for (; i <= number.size(); i++)
	{
		if (i > this->_n)
			throw StorageIsFullException();
		this->_object.insert(this->_object.end(), number[i]);
	}

}

int Span::shortestSpan()
{
	int tmp = 0;
	int res = 0;
	std::vector<int> copy = this->_object;

	std::sort(copy.begin(), copy.end());
	if (copy.size() <= 1)
		throw EmptyOrOneElementException();
	for (unsigned long i = 1; i < copy.size(); i++)
	{
		tmp = std::abs(copy[i] - copy[i - 1]);
		if (tmp < res || res == 0)
			res = tmp;
	}
	return (res);
}

int Span::longestSpan()
{
	std::vector<int>::iterator result_min;
	std::vector<int>::iterator result_max;

	result_max = std::max_element(this->_object.begin(), this->_object.end());
	result_min = std::min_element(this->_object.begin(), this->_object.end());

	return (*result_max - *result_min);
}

const char *Span::StorageIsFullException::what() const throw()
{
	return ("Storage is full");
}

const char *Span::EmptyOrOneElementException::what() const throw()
{
	return ("Empty or one element");
}
