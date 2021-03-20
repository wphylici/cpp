/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 06:45:27 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/20 19:20:54 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << BHI_PURPLE << std::endl << "*---------- ClapTrap default constructor called ----------*" << std::flush << std::endl;
	this->_color = BHI_PURPLE;
}

ClapTrap::ClapTrap(std::string const Name) : _name(Name)
{
	std::cout << BHI_PURPLE << std::endl << "*---------- ClapTrap constructor called ----------*" << std::flush << std::endl;
	this->_color = BHI_PURPLE;
}

ClapTrap::ClapTrap(const ClapTrap &clap_trap)
{
	std::cout << BHI_PURPLE << std::endl << "*---------- ClapTrap copy constructor called ----------*" << std::flush << std::endl;

	this->_hitPoints = clap_trap._hitPoints;
	this->_maxHitPoints = clap_trap._maxHitPoints;
	this->_energyPoints = clap_trap._energyPoints;
	this->_maxEnergyPoints = clap_trap._maxEnergyPoints;
	this->_level = clap_trap._level;
	this->_name = clap_trap._name;
	this->_meleeAttackDamage = clap_trap._meleeAttackDamage;
	this->_rangedAttackDamage = clap_trap._rangedAttackDamage;
	this->_armorDamageReduction = clap_trap._armorDamageReduction;
	this->_color = clap_trap._color;
}

ClapTrap& ClapTrap::operator = (const ClapTrap &clap_trap)
{
	std::cout << BHI_PURPLE << std::endl << "*---------- ClapTrap copy assignation operator called ----------*" << std::flush << std::endl;

	this->_hitPoints = clap_trap._hitPoints;
	this->_maxHitPoints = clap_trap._maxHitPoints;
	this->_energyPoints = clap_trap._energyPoints;
	this->_maxEnergyPoints = clap_trap._maxEnergyPoints;
	this->_level = clap_trap._level;
	this->_name = clap_trap._name;
	this->_meleeAttackDamage = clap_trap._meleeAttackDamage;
	this->_rangedAttackDamage = clap_trap._rangedAttackDamage;
	this->_armorDamageReduction = clap_trap._armorDamageReduction;
	this->_color = clap_trap._color;

	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << BHI_PURPLE << std::endl << "*---------- ClapTrap destructor called ----------*" << std::flush << std::endl;
}

std::string ClapTrap::getColor()
{
	return (this->_color);
}

void ClapTrap::rangedAttack(std::string const &target)
{

	std::cout << std::endl << this->_color << "*---------- rangedAttack called ----------*" << std::endl;
	std::cout << BHI_YELLOW << "CL4P-TP "<< this->_name << " attacks " << target << " at range, causing " <<
	this->_rangedAttackDamage << " points of damage!" << RESET << std::endl;

	std::cout << ITALICS << "Meet professor punch!" << RESET << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << std::endl << this->_color << "*---------- meleeAttack called ----------*" << std::endl;
	std::cout << BHI_YELLOW << "CL4P-TP "<< this->_name << " attacks " << target << " at melee, causing " <<
	this->_meleeAttackDamage << " points of damage!" << RESET << std::endl;

	std::cout << ITALICS << "Take two bullets, then call me in the morning." << RESET <<
	std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << std::endl << this->_color << "*---------- takeDamage called ----------*";
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

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << std::endl << this->_color << "*---------- beRepaired called ----------*";
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
