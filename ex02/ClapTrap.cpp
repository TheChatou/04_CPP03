/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:20:39 by fcoullou          #+#    #+#             */
/*   Updated: 2024/12/03 14:42:58 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Text color
#define RESET   "\033[0m"
#define CYAN    "\033[36m"      /* Cyan */

//	COPLIEN ////////////////////////////////////////////////////////////////////
ClapTrap::ClapTrap(): _name("NoName"), _hitPts(10), _energyPts(10), _attackPts(0)
{
	std::cout << std::endl << CYAN << "** ClapTrap **" << RESET << " Default Constructor : " << this->_name << " ** HitPts[" << this->_hitPts << "], EnergyPts[" << this->_energyPts << "], AttackPts[" << this->_attackPts << "]" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other): _name(other._name), _hitPts(other._hitPts), _energyPts(other._energyPts), _attackPts(other._attackPts)
{
	std::cout << std::endl << CYAN << "** ClapTrap **" << RESET << " Copy Constructor : " << this->_name << " ** HitPts[" << this->_hitPts << "], EnergyPts[" << this->_energyPts << "], AttackPts[" << this->_attackPts << "]" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << CYAN << "** ClapTrap **" << RESET << " Destructor : " << this->_name << " ** HitPts[" << this->_hitPts << "], EnergyPts[" << this->_energyPts << "], AttackPts[" << this->_attackPts << "]" << std::endl << std::endl;
}


ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << CYAN << "** ClapTrap **" << RESET << " Assigment Operator **" << std::endl;
	(void) other;
	return *this;
}

//	CONSTRUCTOR /////////////////////////////////////////////////////////////////
ClapTrap::ClapTrap(std::string name):  _name(name), _hitPts(10), _energyPts(10), _attackPts(0)
{
	std::cout << std::endl << CYAN << "** ClapTrap **" << RESET << " Name Constructor : " << this->_name << " ** HitPts[" << this->_hitPts << "], EnergyPts[" << this->_energyPts << "], AttackPts[" << this->_attackPts << "]" << std::endl;
}

//	MEMBER FUNCTIONS	////////////////////////////////////////////////////////////
std::string	ClapTrap::getName() const
{
	return _name;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hitPts == 0)
	{
		std::cout << CYAN << "-- ClapTrap: " << RESET << _name << " has no hit points left !" << std::endl; 
		return ;
	}
	else if (this->_energyPts == 0)
	{
		std::cout << CYAN << "-- ClapTrap: " << RESET << _energyPts << " has no energy points left, and can't attack !" << std::endl;
		return ;
	}
	else if (this->_name == target)
	{
		std::cout << CYAN << "-- ClapTrap: " << RESET << _name << " is not that stupid, and will not attack hiself !" << std::endl;
		return ;
	}
	else
	{
		_energyPts -= 1;
		std::cout << CYAN << "-- ClapTrap: " << RESET << _name << " attacks: " << target << ", causing " << _attackPts << " pts of damage, and has " << _energyPts << " energy points left." << std::endl;
		takeDamage(_attackPts);
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_hitPts -= amount;
	if (_hitPts < 0)
	{
		_hitPts = 0;
	}
	std::cout << CYAN << "-- ClapTrap: " << RESET << _attackPts << " points of dammage" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPts == 0)
	{
		std::cout << CYAN << "-- ClapTrap: " << RESET << _energyPts << " has no energy points left, and can't repair !" << std::endl;		
	}
	else
	{
		_energyPts -= 1;
		_hitPts += amount;
		std::cout << CYAN << "-- ClapTrap: " << RESET << _name << " repairing itself, and gets: " << amount << " hit points back !" << std::endl;
	}
}