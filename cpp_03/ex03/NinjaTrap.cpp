/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 19:25:38 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/22 10:47:15 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

void NinjaTrap::Born()
{
	std::string Bar = "[                                             ]      %";
	size_t progress = 1;

	std::cout << BHI_YELLOW << "Сhecking guns status";
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
		usleep(20000);
		buf.str("");
	}
}

NinjaTrap::NinjaTrap()
{
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_name = "<Name not set>";
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	this->_color = BHI_RED;

	usleep(300000);
	std::cout << BHI_RED << std::endl << "*---------- NinjaTrap default constructor called ----------*" << std::endl;
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
	// std::cout << std::endl << "Press Enter";
	// std::string str;
	// getline(std::cin, str);
	// std::cout << "\033[2A";
}

NinjaTrap::NinjaTrap(std::string const Name)
{
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_name = Name;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	this->_color = BHI_RED;

	usleep(300000);
	std::cout << BHI_RED << std::endl << "*---------- NinjaTrap constructor called ----------*" << std::flush << std::endl;
	usleep(300000);
	Born();
	usleep(300000);

	std::cout << "\033[2A" << "\033[K" << BHI_RED << "Done!" << std::flush << "\033[2B" << "\033[0G";
	usleep(300000);
	std::cout << "Booting sequence complete." << RESET << std::flush << std::endl <<std::endl;
	usleep(300000);
	std::cout << ITALICS << "VIVA LA ROBOLUTION! I am Leader of the Robolution!" << std::endl << "My name is "
	<< this->_name << "." << std::endl << "Designation: CL4P-TP, Interplanetary Ninja Assassin Claptrap." <<
	std::endl << "Appointment: exterminate humans." << RESET << std::endl;
	// std::cout << std::endl << "Press Enter";
	// std::string str;
	// getline(std::cin, str);
	// std::cout << "\033[2A";
}

NinjaTrap::NinjaTrap(const NinjaTrap &ninja_trap)
{
	std::cout << BHI_RED << std::endl << "*---------- NinjaTrap copy constructor called ----------*" << std::endl;
	std::cout << BHI_YELLOW << "Сloning completed successfully." << RESET << std::endl;
	std::cout << ITALICS << "You're the wub to my dub!" << std::endl;

	this->_hitPoints = ninja_trap._hitPoints;
	this->_maxHitPoints = ninja_trap._maxHitPoints;
	this->_energyPoints = ninja_trap._energyPoints;
	this->_maxEnergyPoints = ninja_trap._maxEnergyPoints;
	this->_level = ninja_trap._level;
	this->_name = ninja_trap._name;
	this->_meleeAttackDamage = ninja_trap._meleeAttackDamage;
	this->_rangedAttackDamage = ninja_trap._rangedAttackDamage;
	this->_armorDamageReduction = ninja_trap._armorDamageReduction;
	this->_color = ninja_trap._color;
}

NinjaTrap& NinjaTrap::operator = (const NinjaTrap &ninja_trap)
{
	std::cout << std::endl << BHI_RED << "*---------- NinjaTrap assignation operator called ----------*" << std::endl;
	std::cout << BHI_YELLOW << "Сloning completed successfully." << RESET << std::endl;
	std::cout << ITALICS << "You're the wub to my dub!" << std::endl;

	if (this == &ninja_trap)
		return (*this);
	this->_hitPoints = ninja_trap._hitPoints;
	this->_maxHitPoints = ninja_trap._maxHitPoints;
	this->_energyPoints = ninja_trap._energyPoints;
	this->_maxEnergyPoints = ninja_trap._maxEnergyPoints;
	this->_level = ninja_trap._level;
	this->_name = ninja_trap._name;
	this->_meleeAttackDamage = ninja_trap._meleeAttackDamage;
	this->_rangedAttackDamage = ninja_trap._rangedAttackDamage;
	this->_armorDamageReduction = ninja_trap._armorDamageReduction;
	this->_color = ninja_trap._color;

	return (*this);
}

NinjaTrap::~NinjaTrap()
{
	std::cout << BHI_RED << std::endl << "*---------- NinjaTrap destructor called ----------*" << RESET << std::endl;

	std::cout << ITALICS << "What's happening to me?" <<
	RESET << std::endl;
}

std::string NinjaTrap::getColor()
{
	return (this->_color);
}

void NinjaTrap::ninjaShoebox(ClapTrap &arg)
{
	std::cout << arg.getColor() << std::endl << "*---------- ninjaShoebox for ClapTrap called ----------*" << RESET << std::endl;
	std::cout << BHI_YELLOW << "Says a quote from a philosopher." << RESET << std::endl;
	std::cout << ITALICS << "Ο χρόνος δίνει όλες τις απαντήσεις χωρίς να χρειάζεται καν τις ερωτήσεις." << RESET << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &arg)
{
	std::cout << arg.getColor() << std::endl << "*---------- ninjaShoebox for FragTrap called ----------*" << RESET << std::endl;
	std::cout << BHI_YELLOW << "Says a quote from a philosopher." << RESET << std::endl;
	std::cout << ITALICS << "Άμα προσπαθείς να ευχαριστήσεις τους πάντες, δεν πρόκειται να ευχαριστήσεις κανέναν." << RESET << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &arg)
{
	std::cout << arg.getColor() << std::endl << "*---------- ninjaShoebox for ScavTrap called ----------*" << RESET << std::endl;
	std::cout << BHI_YELLOW << "Says a quote from a philosopher." << RESET << std::endl;
	std::cout << ITALICS << "Ο θρίαμβος της νίκης του εαυτού μας είναι το στέμμα της φιλοσοφίας." << RESET << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &arg)
{
	std::cout << arg.getColor() << std::endl << "*---------- ninjaShoebox for NinjaTrap called ----------*" << RESET << std::endl;
	std::cout << BHI_YELLOW << "Says a quote from a philosopher." << RESET << std::endl;
	std::cout << ITALICS << "Ο φθόνος είναι έλκος της ψυχής." << RESET << std::endl;
}
