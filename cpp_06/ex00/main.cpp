/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:45:54 by wphylici          #+#    #+#             */
/*   Updated: 2021/04/01 03:04:23 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>

void converter(char *argv)
{
	std::stringstream out;
	double value;
	char tmp;

	out << argv;
	out >> tmp;
	if (tmp >= 32 && tmp <= 127)
		value = (int)tmp;
	else
		value = std::atof(argv);

	// double
	double res_d = value;
	if (value > std::numeric_limits<double>::max() ||
	value < std::numeric_limits<double>::min())
		std::cout << "double: impossible" << std::endl;
	else
		std::cout << "double: " << std::fixed << std::setprecision(1) << res_d << std::endl;

	// float
	float res_f = static_cast<float>(value);
	if (value > std::numeric_limits<float>::max() ||
	value < std::numeric_limits<float>::min())
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << std::fixed << std::setprecision(1) << res_f << "f" << std::endl;

	// int
	int res_i  = static_cast<int>(value);
	if (value > std::numeric_limits<int>::max() ||
	value < std::numeric_limits<int>::min())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << std::fixed << std::setprecision(1) << res_i << std::endl;

	// char
	char res_c = static_cast<char>(value);
	if (value >= 0 && value < 32)
		std::cout << "char: Non displayable" << std::endl;
	else if (value >= 32 && value <= 127)
		std::cout << "char: " << std::fixed << std::setprecision(1) << "'" << res_c << "'" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
}

int main(int argc, char **argv)
{
	if (argc < 2 || argc > 2)
	{
		std::cout << "Error: wrong number of arguments" << std::endl;
		exit(EXIT_FAILURE);
	}
	converter(argv[1]);
}

