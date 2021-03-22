/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 19:25:38 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/22 13:21:10 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::Born()
{
	std::string Bar = "[                                             ]      %";
	size_t progress = 1;

	std::cout << BHI_YELLOW << "Boting";
	for(int t = 0; t < 2; t++)
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
	std::cout << "\033[0G" << "\033[K" << "Loading miserable existence..." << RESET << std::endl
	<< std::endl;
	std::ostringstream buf;
	double coef = (100 * 1.0) / ((int)Bar.size() - 10);
	double percent = 0;
	for (int i = 1; i < (int)Bar.size() - 9; i++)
	{
		std::cout << "\033[1A";
		percent += coef;
		buf << std::fixed << std::setprecision(2) << percent;
		std::cout << HI_BLUE << Bar.replace(progress++, 2, "->") << "\033[0G" <<
		Bar.replace(Bar.size() - buf.str().size() - 1, buf.str().size(),
		buf.str()) << std::flush << RESET << std::endl;
		usleep(20000);
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
	this->_color = BHI_BLUE;

	usleep(300000);
	std::cout << BHI_BLUE << std::endl << "*---------- ScavTrap default constructor called ----------*" << std::endl;
	usleep(300000);
	Born();
	usleep(300000);

	std::cout << "\033[2A" << "\033[K" << BHI_BLUE << "Done!" << std::flush << "\033[2B" << "\033[0G";
	usleep(600000);
	std::cout << "Booting sequence complete." << RESET << std::flush << std::endl <<std::endl;
	usleep(600000);
	std::cout << ITALICS << "Greetings! I operates in service to a scav gang." << std::endl << "My name is "
	<< this->_name << "." << std::endl << "Designation: SC4V-TP" <<
	std::endl << "Race: Robots" << RESET << std::endl;
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
	this->_color = BHI_BLUE;

	usleep(300000);
	std::cout << BHI_BLUE << std::endl << "*---------- ScavTrap constructor called ----------*" << std::flush << std::endl;
	usleep(300000);
	Born();
	usleep(300000);

	std::cout << "\033[2A" << "\033[K" << BHI_BLUE << "Done!" << std::flush << "\033[2B" << "\033[0G";
	usleep(600000);
	std::cout << "Booting sequence complete." << RESET << std::flush << std::endl <<std::endl;
	usleep(600000);
	std::cout << ITALICS << "Greetings! I operates in service to a scav gang." << std::endl << "My name is "
	<< this->_name << "." << std::endl << "Designation: SC4V-TP" <<
	std::endl << "Race: Robots" << RESET << std::endl;
	std::cout << std::endl << "Press Enter";
	std::string str;
	getline(std::cin, str);
	std::cout << "\033[2A";
}

ScavTrap::ScavTrap(const ScavTrap &scav_trap)
{
	std::cout << BHI_BLUE << std::endl << "*---------- ScavTrap copy constructor called ----------*" << std::endl;
	std::cout << BHI_YELLOW << "Сloning completed successfully." << RESET << std::endl;
	std::cout << ITALICS << "Why can't I remember my past?" << std::endl;

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
	std::cout << std::endl << BHI_BLUE << "*---------- ScavTrap assignation operator called ----------*" << std::endl;
	std::cout << BHI_YELLOW << "Сloning completed successfully." << RESET << std::endl;
	std::cout << ITALICS << "Why can't I remember my past?" << std::endl;

	if (this == &scav_trap)
		return (*this);
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
	std::cout << BHI_BLUE << std::endl << "*---------- ScavTrap destructor called ----------*" << RESET << std::endl;

	std::cout << ITALICS << "Disconnecting..." <<
	RESET << std::endl;
}

unsigned int ScavTrap::getHitPoints()
{
	std::cout << std::endl << BHI_BLUE << "*---------- ScavTrap getHitPoints called ----------*" << std::endl;
	std::cout << BHI_YELLOW << "Has " << this->_hitPoints << " health points." << RESET << std::endl;
	return (this->_hitPoints);
}

void ScavTrap::challengeNewcomer()
{
	srand(time(NULL));
	std::cout << std::endl << BHI_BLUE << "*---------- challengeNewcomer called ----------*" << RESET << std::endl;
	int challenge = rand() % 4;
	std::cout << BHI_YELLOW << "Challenge randomly selected: ";
	switch (challenge)
	{
		case (0):
			std::cout << "to rap" << RESET << std::endl;
			std::cout << ITALICS << "Niggas think it's sweet (nah, nah), it's on sight (yeah, what?)" << std::endl <<
			"Nothin' nice (yeah), baguettes in my ice (aww, man). Yo! " << RESET << std::endl;
			break;
		case (1):
			std::cout << "sing a song" << RESET << std::endl;
			std::cout << ITALICS << "You and me baby we ain't nothin' but mammals" << std::endl <<
			"So let's do it like they do on the Discovery Channel" << std::endl <<
			"Do it again now!" << RESET << std::endl;
			break;
		case (2):
			std::cout << "tell a joke" <<
			RESET << std::endl;
			std::cout << ITALICS << "War is hell. Luckily, robots have no concept of the afterlife. So we're okay with it!" <<
			RESET << std::endl;
			break;
		case (3):
			std::cout << "tell the recipe for pancakes" << RESET << std::endl;
			std::cout << ITALICS << "INGREDIENTS:" << std::endl << std::endl << "2 eggs" << std::endl <<
			"2 glasses milk" << std::endl << "2,5 glasses flour" << std::endl << "3 tablespoons oil" <<
			std::endl << "0.5-1 glass boiling water" << std::endl << "3 tablespoons sugar" << std::endl <<
			"0.5 teaspoon baking soda" << std::endl << "0.5 teaspoon salt" << std::endl << std::endl <<
			"1. Prepare all the necessary ingredients." << std::endl << std::endl <<
			"2. Whisk the eggs together with sugar, salt and baking soda in a bowl." << std::endl <<
			"   You can use an egg whisk." << std::endl << std::endl << "3. Add milk and mix everything thoroughly." <<
			std::endl << std::endl << "4. Gradually sift the flour into the mixture." << std::endl <<
			"   Beat the batter. It should be smooth." << std::endl << std::endl << "5. Now add oil." <<
			std::endl << std::endl << "6. Then add some boiling water and mix everything quickly." << std::endl <<
			"   The batter should resemble thick milk." << std::endl << std::endl <<
			"7. Put the pan on the hob and heat some oil." << std::endl <<
			"   To get thin pancakes, do not fill the ladle with batter to the top." << std::endl <<
			"   Fry on both sides." << std::endl << std::endl << "8. Fry until golden." <<
			std::endl << std::endl << "9. Serve the pancakes with jam. Enjoy!" << RESET << std::endl;
			break;
	}
}
