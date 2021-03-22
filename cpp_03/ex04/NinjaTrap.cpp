/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 19:25:38 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/21 18:27:22 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
	std::cout << BHI_RED << std::endl << "*---------- NinjaTrap default constructor called ----------*" << std::endl;

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
}

NinjaTrap::NinjaTrap(std::string const Name)
{
	std::cout << BHI_RED << std::endl << "*---------- NinjaTrap constructor called ----------*" << std::flush << std::endl;

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
}

NinjaTrap::NinjaTrap(const NinjaTrap &ninja_trap)
{
	std::cout << BHI_RED << std::endl << "*---------- NinjaTrap copy constructor called ----------*" << std::endl;

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
