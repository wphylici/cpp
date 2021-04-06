/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 03:17:38 by wphylici          #+#    #+#             */
/*   Updated: 2021/04/06 11:07:47 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <time.h>

struct Data
{
	std::string str1;
	std::string str2;
	int num;
};


std::string generate_str()
{
	std::string res(10, ' ');
	std::string rand_pool = "AbCdEfGhIjKlMnOpQrStUvWxYz";

	for (int i = 0; i < 10; i++)
		res[i] = rand_pool[rand() % rand_pool.size()];
	return (res);
}

Data *deserialize(void *raw)
{
	Data *res = new Data;

	res->str1 = *reinterpret_cast<std::string *>(raw);
	res->num = *reinterpret_cast<int *>(static_cast<char *>(raw) + sizeof(std::string) - 1);
	res->str2 = *reinterpret_cast<std::string *>(static_cast<char *>(raw) + sizeof(std::string) + sizeof(int) - 1);

	return (res);
}

void *serialize()
{
	srand(clock());

	char *res = new char[2 * sizeof(std::string) + sizeof(int)];

	*reinterpret_cast<std::string *>(res) = generate_str();
	std::cout << "str1: " << *reinterpret_cast<std::string *>(res) << std::endl;

	*reinterpret_cast<int *>(res + sizeof(std::string) - 1) = rand();
	std::cout << "int:  " <<  *reinterpret_cast<int *>(res + sizeof(std::string) - 1) << std::endl;

	*reinterpret_cast<std::string *>(res + sizeof(std::string) + sizeof(int) - 1) = generate_str();
	std::cout << "str2: " << *reinterpret_cast<std::string *>(res + sizeof(std::string) + sizeof(int) - 1) << std::endl;

	return (res);
}

int main()
{
	void *ptr = serialize();
	Data *data = deserialize(ptr);

	std::cout << "*---------- After deserialize ----------*" << std::endl;

	std::cout << "str1: " << data->str1 << std::endl <<
	"int:  " << data->num << std::endl <<
	"str2: " << data->str2 << std::endl;

	delete data;
	delete (char *)ptr;
	return (0);
}
