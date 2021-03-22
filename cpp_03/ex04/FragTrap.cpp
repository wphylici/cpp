/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 19:25:38 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/21 18:58:33 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << BHI_GREEN << std::endl << "*---------- FragTrap default constructor called ----------*" << std::endl;

	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_name = "<Name not set>";
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	this->_color = BHI_GREEN;
}

FragTrap::FragTrap(std::string const Name)
{
	std::cout << BHI_GREEN << std::endl << "*---------- FragTrap constructor called ----------*" << std::flush << std::endl;

	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_name = Name;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	this->_color = BHI_GREEN;
}

FragTrap::FragTrap(const FragTrap &frag_trap)
{
	std::cout << BHI_GREEN << std::endl << "*---------- FragTrap copy constructor called ----------*" << RESET << std::endl;
	std::cout << BHI_YELLOW << "Сloning completed successfully." << RESET << std::endl;

	this->_hitPoints = frag_trap._hitPoints;
	this->_maxHitPoints = frag_trap._maxHitPoints;
	this->_energyPoints = frag_trap._energyPoints;
	this->_maxEnergyPoints = frag_trap._maxEnergyPoints;
	this->_level = frag_trap._level;
	this->_name = frag_trap._name;
	this->_meleeAttackDamage = frag_trap._meleeAttackDamage;
	this->_rangedAttackDamage = frag_trap._rangedAttackDamage;
	this->_armorDamageReduction = frag_trap._armorDamageReduction;
	this->_color = frag_trap._color;
}

FragTrap& FragTrap::operator = (const FragTrap &frag_trap)
{
	std::cout << std::endl << BHI_GREEN << "*---------- FragTrap assignation operator called ----------*" << RESET << std::endl;
	std::cout << BHI_YELLOW << "Сloning completed successfully." << RESET << std::endl;

	if (this == &frag_trap)
		return (*this);
	this->_hitPoints = frag_trap._hitPoints;
	this->_maxHitPoints = frag_trap._maxHitPoints;
	this->_energyPoints = frag_trap._energyPoints;
	this->_maxEnergyPoints = frag_trap._maxEnergyPoints;
	this->_level = frag_trap._level;
	this->_name = frag_trap._name;
	this->_meleeAttackDamage = frag_trap._meleeAttackDamage;
	this->_rangedAttackDamage = frag_trap._rangedAttackDamage;
	this->_armorDamageReduction = frag_trap._armorDamageReduction;
	this->_color = frag_trap._color;

	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << BHI_GREEN << std::endl << "*---------- FragTrap destructor called ----------*" << RESET << std::endl;
}

std::string FragTrap::getColor()
{
	return (this->_color);
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
