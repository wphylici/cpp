/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 11:38:33 by wphylici          #+#    #+#             */
/*   Updated: 2021/04/10 16:55:37 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::cout << "*---------- Int ----------*" << std::endl;

	std::vector<int> nums;
	std::vector<int>::iterator it_i;

	for (int i = 0; i < 5; i++)
		nums.push_back(rand() % 50);

	std::cout << "List of numbers: " << std::endl << std::endl;
	for (std::vector<int>::iterator it = nums.begin(); it != nums.end(); it++)
		std::cout << *it << std::endl;

	int srch_n = 42;
	try
	{
		std::cout << std::endl << "Searching value: " << srch_n << std::endl;
		std::cout << easyfind(nums, srch_n) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	srch_n = 7;
	try
	{
		std::cout << std::endl << "Searching value: " << srch_n << std::endl;
		std::cout << "Result: " << easyfind(nums, srch_n) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	std::cout << "*---------- Char ----------*" << std::endl;

	std::vector<char> ch;
	std::vector<char>::iterator it_c;

	for (int i = 0; i < 5; i++)
		ch.push_back(rand() % 95 + 32);

	std::cout << "List of char: " << std::endl << std::endl;
	for (std::vector<char>::iterator it = ch.begin(); it != ch.end(); it++)
		std::cout << *it << std::endl;

	char srch_c = 64;
	try
	{
		std::cout << std::endl << "Searching value: " << srch_c << std::endl;
		std::cout << "Result: " << easyfind(ch, srch_c) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	srch_c = 42;
	try
	{
		std::cout << std::endl << "Searching value: " << srch_c << std::endl;
		std::cout << "Result: " << easyfind(ch, srch_c) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	std::cout << "*---------- String ----------*" << std::endl;

	std::vector<std::string> str;
	std::vector<std::string>::iterator it_s;
	std::string pool_str[6] = {"hello", "bye", "hell", "school", "lol", "string"};

	srand(time(NULL));
	for (int i = 0; i < 5; i++)
		str.push_back(pool_str[rand() % 4]);

	std::cout << "List of string: " << std::endl << std::endl;
	for (std::vector<std::string>::iterator it = str.begin(); it != str.end(); it++)
		std::cout << *it << std::endl;

	std::string srch_s = pool_str[rand() % 4];
	try
	{
		std::cout << std::endl << "Searching value: " << srch_s << std::endl;
		std::cout << "Result: " << easyfind(str, srch_s) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	srch_s = "qwerty";
	str.push_back("qwerty");
	try
	{
		std::cout << std::endl << "Searching value: " << srch_s << std::endl;
		std::cout << "Result: " << easyfind(str, srch_s) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
