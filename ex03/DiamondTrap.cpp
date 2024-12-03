/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:08:56 by fcoullou          #+#    #+#             */
/*   Updated: 2024/12/03 14:40:42 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

// Text color
#define RESET   "\033[0m"
#define YELLOW  "\033[33m"      /* Yellow */

//	COPLIEN ////////////////////////////////////////////////////////////////////
DiamondTrap::DiamondTrap(): _name("NoName")
{
	this->_hitPts = 100;
	this->_energyPts = 50;
	this->_attackPts = 30;
	std::cout << YELLOW << "** DiamondTrap **" << RESET << " Default constructor : " << _name << " ** HitPts[" << this->_hitPts << "], EnergyPts[" << this->_energyPts << "], AttackPts[" << this->_attackPts << "]" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other): ClapTrap::ClapTrap(other), _name(other._name)
{
	std::cout << YELLOW << "** DiamondTrap **" << RESET << " Copy Constructor name : " << _name << " ** HitPts[" << this->_hitPts << "], EnergyPts[" << this->_energyPts << "], AttackPts[" << this->_attackPts << "]" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << YELLOW << "** DiamondTrap **" << RESET << " Destructor name : " << _name << " ** HitPts[" << this->_hitPts << "], EnergyPts[" << this->_energyPts << "], AttackPts[" << this->_attackPts << "]" << std::endl;
}


DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    std::cout << YELLOW << "** DiamondTrap **" << RESET << " Assigment Operator **" << std::endl;
	(void) other;
	return *this;
}

//	CONSTRUCTOR /////////////////////////////////////////////////////////////////
DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_trap"), _name(name)
{
	this->_hitPts = 100;
	this->_energyPts = 50;
	this->_attackPts = 30;
	std::cout << YELLOW << "** DiamondTrap **" << RESET << " Constructor name : " << _name << " ** HitPts[" << this->_hitPts << "], EnergyPts[" << this->_energyPts << "], AttackPts[" << this->_attackPts << "]" << std::endl;
}


void	DiamondTrap::whoAmI()
{
	std::cout << YELLOW << "- <> My name is : " << RESET << _name << std::endl; 
    std::cout << YELLOW << "- <> ClapTrap name is : " << RESET << ClapTrap::_name << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}
