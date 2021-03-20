/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 19:25:38 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/20 06:30:39 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void FragTrap::Born()
{
	std::string Bar = "[                                             ]      %";
	size_t progress = 1;

	std::cout << BHI_YELLOW << "Сhecking software status";
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
	std::cout << "\033[0G" << "\033[K" << "Booting..." << RESET << std::endl
	<< std::endl;
	std::ostringstream buf;
	double coef = (100 * 1.0) / ((int)Bar.size() - 10);
	double percent = 0;
	for (int i = 1; i < (int)Bar.size() - 9; i++)
	{
		std::cout << "\033[1A";
		percent += coef;
		buf << std::fixed << std::setprecision(2) << percent;
		std::cout << HI_GREEN << Bar.replace(progress++, 2, "->") << "\033[0G" <<
		Bar.replace(Bar.size() - buf.str().size() - 1, buf.str().size(),
		buf.str()) << std::flush << RESET << std::endl;
		usleep(30000);
		buf.str("");
	}
}

FragTrap::FragTrap() : _hitPoints(100), _maxHitPoints(100), _energyPoints(100),
_maxEnergyPoints(100), _level(1), _name("<Name not set>"), _meleeAttackDamage(30),
_rangedAttackDamage(20), _armorDamageReduction(5)
{
	usleep(300000);
	std::cout << BHI_GREEN << std::endl << "*---------- Default constructor called ----------*" << std::endl;
	usleep(300000);
	Born();
	usleep(300000);

	std::cout << "\033[2A" << "\033[K" << BHI_GREEN << "Done!" << std::flush << "\033[2B" << "\033[0G";
	usleep(600000);
	std::cout << "Booting sequence complete." << RESET << std::flush << std::endl <<std::endl;
	usleep(600000);
	std::cout << ITALICS << "Hello! I am your new steward bot." << std::endl << "My name is "
	<< this->_name << "." << std::endl << "Designation: FR4G-TP, Hyperion Robot, Class C." <<
	std::endl << "Appointment: protect humanity." << RESET << std::endl;
	std::cout << std::endl << "Press Enter";
	std::string str;
	getline(std::cin, str);
	std::cout << "\033[2A";
}

FragTrap::FragTrap(std::string const Name) : _hitPoints(100), _maxHitPoints(100), _energyPoints(100),
_maxEnergyPoints(100), _level(1), _name(Name), _meleeAttackDamage(30),
_rangedAttackDamage(20), _armorDamageReduction(5)
{
	usleep(300000);
	std::cout << BHI_GREEN << std::endl << "*---------- Constructor called ----------*" << std::flush << std::endl;
	usleep(300000);
	Born();
	usleep(300000);

	std::cout << "\033[2A" << "\033[K" << BHI_GREEN << "Done!" << std::flush << "\033[2B" << "\033[0G";
	usleep(600000);
	std::cout << "Booting sequence complete." << RESET << std::flush << std::endl <<std::endl;
	usleep(600000);
	std::cout << ITALICS << "Hello! I am your new steward bot." << std::endl << "My name is "
	<< this->_name << "." << std::endl << "Designation: FR4G-TP, Hyperion Robot, Class C." <<
	std::endl << "Appointment: protect humanity." << RESET << std::endl;
	std::cout << std::endl << "Press Enter";
	std::string str;
	getline(std::cin, str);
	std::cout << "\033[2A";
}

FragTrap::FragTrap(const FragTrap &frag_trap)
{
	std::cout << BHI_GREEN << std::endl << "*---------- Copy constructor called ----------*" << RESET << std::endl;
	std::cout << BHI_YELLOW << "Сloning completed successfully." << RESET << std::endl;
	std::cout << ITALICS << "I am a divine copy of the original!" << std::endl;

	this->_hitPoints = frag_trap._hitPoints;
	this->_maxHitPoints = frag_trap._maxHitPoints;
	this->_energyPoints = frag_trap._energyPoints;
	this->_maxEnergyPoints = frag_trap._maxEnergyPoints;
	this->_level = frag_trap._level;
	this->_name = frag_trap._name;
	this->_meleeAttackDamage = frag_trap._meleeAttackDamage;
	this->_rangedAttackDamage = frag_trap._rangedAttackDamage;
	this->_armorDamageReduction = frag_trap._armorDamageReduction;
}

FragTrap& FragTrap::operator = (const FragTrap &frag_trap)
{
	std::cout << std::endl << BHI_GREEN << "*---------- Assignation operator called ----------*" << RESET << std::endl;
	std::cout << BHI_YELLOW << "Сloning completed successfully." << RESET << std::endl;
	std::cout << ITALICS << "I am a divine copy of the original!" << std::endl;

	this->_hitPoints = frag_trap._hitPoints;
	this->_maxHitPoints = frag_trap._maxHitPoints;
	this->_energyPoints = frag_trap._energyPoints;
	this->_maxEnergyPoints = frag_trap._maxEnergyPoints;
	this->_level = frag_trap._level;
	this->_name = frag_trap._name;
	this->_meleeAttackDamage = frag_trap._meleeAttackDamage;
	this->_rangedAttackDamage = frag_trap._rangedAttackDamage;
	this->_armorDamageReduction = frag_trap._armorDamageReduction;

	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << BHI_GREEN << std::endl << "*---------- Destructor called ----------*" << RESET << std::endl;

	std::cout << ITALICS << "I did my job and I'm very tired. I'm going to pass out now..." <<
	RESET << std::endl;
}

void FragTrap::rangedAttack(std::string const &target)
{

	std::cout << std::endl << BHI_GREEN << "*---------- rangedAttack called ----------*" << std::endl;
	std::cout << BHI_YELLOW << "FR4G-TP "<< this->_name << " attacks " << target << " at range, causing " <<
	this->_rangedAttackDamage << " points of damage!" << RESET << std::endl;

	std::cout << ITALICS << "Meet professor punch!" << RESET << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << std::endl << BHI_GREEN << "*---------- meleeAttack called ----------*" << std::endl;
	std::cout << BHI_YELLOW << "FR4G-TP "<< this->_name << " attacks " << target << " at melee, causing " <<
	this->_meleeAttackDamage << " points of damage!" << RESET << std::endl;

	std::cout << ITALICS << "Take two bullets, then call me in the morning." << RESET <<
	std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	std::cout << std::endl << BHI_GREEN << "*---------- takeDamage called ----------*";
	std::cout << std::endl << BHI_YELLOW << "Received " << amount << " point of damage." <<
	RESET << std::endl;

	if (amount < this->_armorDamageReduction)
	{
		std::cout << ITALICS "I bet your mom could do better!" << RESET << std::endl;
		return ;
	}
	amount -= this->_armorDamageReduction;
	if (amount >= this->_hitPoints)
	{
		std::cout << ITALICS << "Ohhh... nooo... I'm too pretty to die!" <<
		RESET << std::endl;
		this->_hitPoints = 0;
		return ;
	}
	if (amount < this->_hitPoints)
	{
		this->_hitPoints -= amount;
		std::cout << ITALICS << "Ow hohoho, that hurts! Yipes!" << std::endl <<
		"Why did they build me out of galvanized flesh?!" RESET << std::endl;
		return ;
	}
}

void FragTrap::beRepaired(unsigned int amount)
{
	std::cout << std::endl << BHI_GREEN << "*---------- beRepaired called ----------*";
	if (amount >= this->_maxHitPoints || this->_hitPoints + amount >= 100)
	{
		std::cout << std::endl << BHI_YELLOW << "Hit points are fully restored." <<
		RESET << std::endl;
		std::cout << ITALICS << "I'm back! Woo!" << std::endl;
		this->_hitPoints = this->_maxHitPoints;
		return ;
	}
	this->_hitPoints += amount;
	std::cout << std::endl << BHI_YELLOW << "Restored " << amount << " hit points." <<
	RESET << std::endl;
	std::cout << ITALICS << "Hahahahaha! I'm alive!" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::cout << std::endl << BHI_GREEN << "*---------- vaulthunter_dot_exe called ----------*" << RESET << std::endl;
	if (this->_energyPoints < 25)
	{
		std::cout << ITALICS << "Not enough energy... Apparently I'm tired..." << std::endl;
		return ;
	}
	this->_energyPoints -= 25;
	srand(time(NULL));
	int attacks = rand() % 5;
	std::cout << BHI_YELLOW << "FR4G-TP " << this->_name;
	switch (attacks)
	{
		case (0):
			std::cout << " spits machine oil in " << target << "'s face." << RESET << std::endl;
			std::cout << ITALICS << "Ha ha ha! Suck it!" << RESET << std::endl;
			break;
		case (1):
			std::cout << " screams so loud, that " << target << " is loosing his mind." <<
			RESET << std::endl;
			std::cout << ITALICS << "Ha ha ha! Fall before your robot overlord!" <<
			RESET << std::endl;
			break;
		case (2):
			std::cout << " scratches a plate with a fork and " << target << " bleeds from his ears." <<
			RESET << std::endl;
			std::cout << ITALICS << "You look like something a skag barfed up!" <<
			RESET << std::endl;
			break;
		case (3):
			std::cout << " points a finger toward " << target << " and taunts him." << RESET << std::endl;
			std::cout << ITALICS << "Yo momma's so dumb, she couldn't think of a good ending for this 'yo momma' joke!" <<
			RESET << std::endl;
			break;
		case (4):
			std::cout << " reminds " << target << " that the deadline was yesterday." << RESET << std::endl;
			std::cout << ITALICS << "Good thing I don't have a soul!" <<
			RESET << std::endl;
			break;
	}
}