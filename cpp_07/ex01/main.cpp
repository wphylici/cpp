/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 02:05:00 by wphylici          #+#    #+#             */
/*   Updated: 2021/04/09 04:32:33 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	std::string str1[] = {"a", "b", "c" , "d", "e"};
	std::string str2 = "qwerty";
	char str3[] = "hello";
	char *str4 = (char *)"lol";
	char c[] = {42, 35, '+', '-', '%'};
	int n[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	iter(str1, sizeof(str1) / sizeof(str1[0]), ft_print);
	std::cout << std::endl;

	iter(&str2[0], str2.size(), ft_print);
	std::cout << std::endl;

	iter(str3, strlen(str3), ft_print);
	std::cout << std::endl;

	iter(str4, strlen(str4), ft_print);
	std::cout << std::endl;

	iter(c, sizeof(c) / sizeof(c[0]), ft_print);
	std::cout << std::endl;

	iter(n, sizeof(n) / sizeof(n[0]), ft_print);
	std::cout << std::endl;

	return (0);
}


// class Awesome
// {
// public:
// 	Awesome( void ) : _n( 42 ) { return; }
// 	int get( void ) const { return this->_n; }
// private:
// 	int _n;
// };
// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }
// int main() {
// 	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
// 	Awesome tab2[5];
// 	iter( tab, 5, print );
// 	iter( tab2, 5, print );
// 	return 0;
// }
