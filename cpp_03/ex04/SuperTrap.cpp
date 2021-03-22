/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 14:55:34 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/22 11:06:56 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	std::cout << BHI_CYAN << std::endl << "*---------- SuperTrap default constructor called ----------*";

	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_name = "<Name not set>";
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	this->_color = BHI_CYAN;
}

SuperTrap::SuperTrap(std::string const Name)
{
	std::cout << std::endl << BHI_CYAN << "*---------- SuperTrap constructor called ----------*";

	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_name = Name;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	this->_color = BHI_CYAN;

	std::cout << BHI_YELLOW << std::endl << "Param:" << RESET << std::endl << std::endl;

	std::cout << " hitPoints: " << this->_hitPoints << std::endl;
	std::cout << " maxHitPoints: " << this->_maxHitPoints << std::endl;
	std::cout << " energyPoints: " << this->_energyPoints << std::endl;
	std::cout << " maxEnergyPoints: " << this->_maxEnergyPoints << std::endl;
	std::cout << " level: " << this->_level << std::endl;
	std::cout << " name: " << this->_name << std::endl;
	std::cout << " meleeAttackDamage: " << this->_meleeAttackDamage << std::endl;
	std::cout << " rangedAttackDamage: "  << this->_rangedAttackDamage << std::endl;
	std::cout << " armorDamageReduction: " << this->_armorDamageReduction << std::endl;

}

SuperTrap::SuperTrap(const SuperTrap &super_trap)
{
	std::cout << BHI_CYAN << std::endl << "*---------- SuperTrap copy constructor called ----------*" << std::endl;
	*this = super_trap;
}

SuperTrap &SuperTrap::operator = (const SuperTrap &super_trap)
{
	std::cout << std::endl << BHI_CYAN << "*---------- SuperTrap assignation operator called ----------*" << std::endl;
	if (this == &super_trap)
		return (*this);
	this->_hitPoints = super_trap._hitPoints;
	this->_maxHitPoints = super_trap._maxHitPoints;
	this->_energyPoints = super_trap._energyPoints;
	this->_maxEnergyPoints = super_trap._maxEnergyPoints;
	this->_level = super_trap._level;
	this->_name = super_trap._name;
	this->_meleeAttackDamage = super_trap._meleeAttackDamage;
	this->_rangedAttackDamage = super_trap._rangedAttackDamage;
	this->_armorDamageReduction = super_trap._armorDamageReduction;
	this->_color = super_trap._color;
	return (*this);
}

SuperTrap::~SuperTrap()
{
	std::cout << BHI_CYAN << std::endl << "*---------- SuperTrap destructor called ----------*" << RESET << std::endl;
}

void SuperTrap::meleeAttack(std::string const &target)
{
	std::cout << BHI_CYAN << std::endl << "*---------- SuperTrap meleeAttack from NinjaTrap----------*" << RESET << std::endl;
	NinjaTrap::meleeAttack(target);
}

void SuperTrap::rangedAttack(std::string const &target)
{
	std::cout << BHI_CYAN << std::endl << "*---------- SuperTrap rangedAttack from FragTrap----------*" << RESET << std::endl;
	FragTrap::rangedAttack(target);
}
