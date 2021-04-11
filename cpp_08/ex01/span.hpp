/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 17:01:24 by wphylici          #+#    #+#             */
/*   Updated: 2021/04/11 12:44:07 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span{

	public:
		Span(unsigned int n);
		Span(const Span &);
		Span& operator=(const Span &);
		~Span();

		void addNumber(const int &number);
		void addNumber(std::vector<int> &number);
		int shortestSpan();
		int longestSpan();

		class StorageIsFullException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class EmptyOrOneElementException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

	private:
		Span();
    	unsigned int _n;
    	std::vector<int> _object;
};

#endif
