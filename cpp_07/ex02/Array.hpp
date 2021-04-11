/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:50:06 by wphylici          #+#    #+#             */
/*   Updated: 2021/04/09 06:54:32 by wphylici         ###   ########.fr       */
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
			this->_array = NULL;
			*this = array;
		}

		~Array()
		{
			if (this->_array)
				delete [] this->_array;
		}

		Array &operator = (Array const &array)
		{
			if (this == &array)
				return *this;
			this->_n = array._n;

			if (this->_array)
				delete [] this->_array;

			for (int i = 0; i < this->_n; i++)
				this->_array[i] = array._array[i];

			return (*this);
		}

		class InvalideNumExeption : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Invalide n value");
				}
		};

		unsigned int size()
		{
			return (this->_n);
		}

		T &operator [] (unsigned int n) const
		{
			if (n < 0 || n >= this->_n)
				throw InvalideNumExeption();
			return (this->_array[n]);
		}

	private:
		T *_array;
		unsigned int _n;
};

#endif
