/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 02:05:00 by wphylici          #+#    #+#             */
/*   Updated: 2021/04/05 03:21:31 by wphylici         ###   ########.fr       */
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