/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 18:01:24 by wphylici          #+#    #+#             */
/*   Updated: 2021/04/03 22:12:27 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <time.h>

class Base
{
	public:
		virtual ~Base() {}
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base *generate(void)
{
	srand(clock());
	int rand_case = rand() % 3;
	switch (rand_case)
	{
		case (0): return new A;
		case (1): return new B;
		case (2): return new C;
	}
	return (NULL);
}

void identify_from_pointer(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "it's A" << std::endl;
	if (dynamic_cast<B *>(p))
		std::cout << "it's B" << std::endl;
	if (dynamic_cast<C *>(p))
		std::cout << "it's C" << std::endl;
}

void identify_from_reference(Base &p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "it's A" << std::endl;
	}
	catch (std::bad_cast &ex) {}

	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "it's B" << std::endl;
	}
	catch (std::bad_cast &ex) {}

	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "it's C" << std::endl;
	}
	catch (std::bad_cast &ex) {}
}

int main()
{
	Base *base = generate();

	std::cout << "*----------   Pointer   ----------*" << std::endl;
	identify_from_pointer(base);

	std::cout << "*----------  Reference  ----------*" << std::endl;
	identify_from_reference(*base);

	return (0);
}
