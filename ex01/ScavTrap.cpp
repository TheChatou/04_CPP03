/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:59:52 by fcoullou          #+#    #+#             */
/*   Updated: 2024/12/03 14:43:23 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Text color
#define RESET   "\033[0m"
#define GREEN   "\033[32m"      /* Green */

//	COPLIEN ////////////////////////////////////////////////////////////////////
ScavTrap::ScavTrap(): ClapTrap::ClapTrap()
{
	this->_hitPts = 100;
	this->_energyPts = 50;
	this->_attackPts = 20;
	std::cout << GREEN << "** ScavTrap **" << RESET << " Default Constructor : " << this->_name << " ** HitPts[" << this->_hitPts << "], EnergyPts[" << this->_energyPts << "], AttackPts[" << this->_attackPts << "]" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap::ClapTrap(other)
{
	std::cout << GREEN << "** ScavTrap **" << RESET << " Copy Constructor : " << this->_name << " ** HitPts[" << this->_hitPts << "], EnergyPts[" << this->_energyPts << "], AttackPts[" << this->_attackPts << "]" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << GREEN << "** ScavTrap **" << RESET << " Destructor : " << this->_name << " ** HitPts[" << this->_hitPts << "], EnergyPts[" << this->_energyPts << "], AttackPts[" << this->_attackPts << "]" << std::endl;
}


ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << GREEN << "** ScavTrap **" << RESET << " Assigment Operator **" << std::endl;
	(void) other;
	return *this;
}

//	CONSTRUCTOR /////////////////////////////////////////////////////////////////
ScavTrap::ScavTrap(std::string name):  ClapTrap::ClapTrap(name)
{
	this->_hitPts = 100;
	this->_energyPts = 50;
	this->_attackPts = 20;
	std::cout << GREEN << "** ScavTrap **" << RESET << " Name Constructor : " << this->_name << " ** HitPts[" << this->_hitPts << "], EnergyPts[" << this->_energyPts << "], AttackPts[" << this->_attackPts << "]" << std::endl;
}

//	MEMBER FUNCTIONS	////////////////////////////////////////////////////////////
void	ScavTrap::guardGate()
{
	std::cout << GREEN << "-- - ScavTrap: " << RESET << this->_name << " is in Gate Keeper mode !" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_hitPts == 0)
	{
		std::cout << GREEN << "-- - ScavTrap: " << RESET << this->_name << " has no hit points left !" << std::endl; 
		return ;
	}
	else if (this->_energyPts == 0)
	{
		std::cout << GREEN << "-- - ScavTrap: " << RESET << this->_energyPts << " has no energy points left, and can't attack !" << std::endl;
		return ;
	}
	else if (this->_name == target)
	{
		std::cout << GREEN << "-- - ScavTrap: " << RESET << this->_name << " is not that stupid, and will not attack hiself !" << std::endl;
		return ;
	}
	else
	{
		this->_energyPts -= 1;
		std::cout << GREEN << "-- - ScavTrap: " << RESET << this->_name << " attacks: " << target << ", causing " << this->_attackPts << " pts of damage, and has " << this->_energyPts << " energy points left." << std::endl;
		takeDamage(this->_attackPts);
	}
}
