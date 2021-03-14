/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 03:51:49 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/14 13:56:07 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

# define BHI_RED		"\e[1;91m"
# define BHI_GREEN		"\e[1;92m"
# define RESET			"\e[0m"

/* 	to compile use:

	clang++ -g -Wall -Wextra -Werror -std=c++98 *.cpp

*/

int main(int argc, char **argv)
{
	if (argc < 4 || argc > 4)
	{
		std::cout << BHI_RED << "ERROR: " << RESET << "wrong number of arguments" << std::endl;
		std::cout << BHI_GREEN <<"USE: " << RESET << "./replace FILENAME STRING1 STRING2" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::string filename = argv[1], s1 = argv[2], s2 = argv[3];
	if (filename.empty() || s1.empty() || s2.empty())
	{
		std::cout << "ERROR: which one of the arguments is empty" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::ifstream fin;
	std::ofstream fout;
	fin.open(filename);
	if (fin.is_open())
		fout.open(filename + ".replace");
	if (!fin.is_open() || !fout.is_open())
	{
		std::cout << "ERROR: failed to open the file" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::string buf;
	while (!fin.eof())
	{
		std::getline(fin, buf);
		std::size_t found;
		while ((found = buf.find(s1))!= std::string::npos)
		{
			found = buf.find(s1, found + s1.size());
			buf.replace(buf.find(s1), s1.size(), s2);
		}
		fout << buf << std::endl;
	}
	fout.close();
	fin.close();
	return (0);
}
