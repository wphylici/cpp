/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 19:25:38 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/20 07:18:51 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::Born()
{
	std::string Bar = "[                                             ]      %";
	size_t progress = 1;

	std::cout << BHI_YELLOW << "Сhecking guns status";
	for(int t = 0; t < 3; t++)
    {
        usleep(200000);
        std::cout << "." << std::flush;
        usleep(200000);
        std::cout << "." << std::flush;
        usleep(200000);
        std::cout << "." << std::flush;
        usleep(200000);
        std::cout << "\b\b\b   \b\b\b" << std::flush;
	}
	std::cout << "\033[0G" << "\033[K" << "Loading guns..." << RESET << std::endl
	<< std::endl;
	std::ostringstream buf;
	double coef = (100 * 1.0) / ((int)Bar.size() - 10);
	double percent = 0;
	for (int i = 1; i < (int)Bar.size() - 9; i++)
	{
		std::cout << "\033[1A";
		percent += coef;
		buf << std::fixed << std::setprecision(2) << percent;
		std::cout << HI_RED << Bar.replace(progress++, 2, "->") << "\033[0G" <<
		Bar.replace(Bar.size() - buf.str().size() - 1, buf.str().size(),
		buf.str()) << std::flush << RESET << std::endl;
		usleep(30000);
		buf.str("");
	}
}

ScavTrap::ScavTrap()
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_name = "<Name no set>";
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	this->_color = "\e[1;91m";

	usleep(300000);
	std::cout << BHI_RED << std::endl << "*---------- ScavTrap default constructor called ----------*" << std::endl;
	usleep(300000);
	Born();
	usleep(300000);

	std::cout << "\033[2A" << "\033[K" << BHI_RED << "Done!" << std::flush << "\033[2B" << "\033[0G";
	usleep(600000);
	std::cout << "Booting sequence complete." << RESET << std::flush << std::endl <<std::endl;
	usleep(600000);
	std::cout << ITALICS << "VIVA LA ROBOLUTION! I am Leader of the Robolution!" << std::endl << "My name is "
	<< this->_name << "." << std::endl << "Designation: CL4P-TP, Interplanetary Ninja Assassin Claptrap" <<
	std::endl << "Appointment: exterminate humans." << RESET << std::endl;
	std::cout << std::endl << "Press Enter";
	std::string str;
	getline(std::cin, str);
	std::cout << "\033[2A";
}

ScavTrap::ScavTrap(std::string const Name)
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_name = Name;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	this->_color = "\e[1;91m";

	usleep(300000);
	std::cout << BHI_RED << std::endl << "*---------- ScavTrap constructor called ----------*" << std::flush << std::endl;
	usleep(300000);
	Born();
	usleep(300000);

	std::cout << "\033[2A" << "\033[K" << BHI_RED << "Done!" << std::flush << "\033[2B" << "\033[0G";
	usleep(600000);
	std::cout << "Booting sequence complete." << RESET << std::flush << std::endl <<std::endl;
	usleep(600000);
	std::cout << ITALICS << "VIVA LA ROBOLUTION! I am Leader of the Robolution!" << std::endl << "My name is "
	<< this->_name << "." << std::endl << "Designation: CL4P-TP, Interplanetary Ninja Assassin Claptrap." <<
	std::endl << "Appointment: exterminate humans." << RESET << std::endl;
	std::cout << std::endl << "Press Enter";
	std::string str;
	getline(std::cin, str);
	std::cout << "\033[2A";
}

ScavTrap::ScavTrap(const ScavTrap &scav_trap)
{
	std::cout << BHI_RED << std::endl << "*---------- ScavTrap copy constructor called ----------*" << std::endl;
	std::cout << BHI_YELLOW << "Сloning completed successfully." << RESET << std::endl;
	std::cout << ITALICS << "You're the wub to my dub!" << std::endl;

	this->_hitPoints = scav_trap._hitPoints;
	this->_maxHitPoints = scav_trap._maxHitPoints;
	this->_energyPoints = scav_trap._energyPoints;
	this->_maxEnergyPoints = scav_trap._maxEnergyPoints;
	this->_level = scav_trap._level;
	this->_name = scav_trap._name;
	this->_meleeAttackDamage = scav_trap._meleeAttackDamage;
	this->_rangedAttackDamage = scav_trap._rangedAttackDamage;
	this->_armorDamageReduction = scav_trap._armorDamageReduction;
	this->_color = scav_trap._color;
}

ScavTrap& ScavTrap::operator = (const ScavTrap &scav_trap)
{
	std::cout << std::endl << BHI_RED << "*---------- ScavTrap assignation operator called ----------*" << std::endl;
	std::cout << BHI_YELLOW << "Сloning completed successfully." << RESET << std::endl;
	std::cout << ITALICS << "You're the wub to my dub!" << std::endl;

	this->_hitPoints = scav_trap._hitPoints;
	this->_maxHitPoints = scav_trap._maxHitPoints;
	this->_energyPoints = scav_trap._energyPoints;
	this->_maxEnergyPoints = scav_trap._maxEnergyPoints;
	this->_level = scav_trap._level;
	this->_name = scav_trap._name;
	this->_meleeAttackDamage = scav_trap._meleeAttackDamage;
	this->_rangedAttackDamage = scav_trap._rangedAttackDamage;
	this->_armorDamageReduction = scav_trap._armorDamageReduction;
	this->_color = scav_trap._color;

	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << BHI_RED << std::endl << "*---------- ScavTrap destructor called ----------*" << RESET << std::endl;

	std::cout << ITALICS << "What's happening to me?" <<
	RESET << std::endl;
}

unsigned int ScavTrap::getHitPoints()
{
	std::cout << std::endl << BHI_RED << "*---------- ScavTrap getHitPoints called ----------*" << std::endl;
	std::cout << BHI_YELLOW << "has " << this->_hitPoints << " health points" << RESET << std::endl;
	return (this->_hitPoints);
}

void ScavTrap::challengeNewcomer()
{
	srand(time(NULL));
	std::cout << std::endl << BHI_RED << "*---------- challengeNewcomer called ----------*" << RESET << std::endl;
	int challenge = rand() % 4;
	std::cout << BHI_YELLOW << "Challenge randomly selected: ";
	switch (challenge)
	{
		case (0):
			std::cout << "stop killing humans." << RESET << std::endl;
			std::cout << ITALICS << "Ha ha ha! You funny, maaaan!" << RESET << std::endl;
			break;
		case (1):
			std::cout << "sing an annoying song" << RESET << std::endl;
			std::cout << ITALICS << "Ha ha ha! Fall before your robot overlord!" <<
			RESET << std::endl;
			break;
		case (2):
			std::cout << "tell a joke" <<
			RESET << std::endl;
			std::cout << ITALICS << "War is hell. Luckily, robots have no concept of the afterlife. So we're okay with it!" <<
			RESET << std::endl;
			break;
		case (3):
			std::cout << "become a pick-up artist" << RESET << std::endl;
			std::cout << ITALICS << "Hey, baby! Wanna kill all humans?" << RESET << std::endl;
			break;
	}
}