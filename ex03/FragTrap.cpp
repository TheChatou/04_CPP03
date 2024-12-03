/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:59:52 by fcoullou          #+#    #+#             */
/*   Updated: 2024/12/03 14:40:33 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Text color
#define RESET   "\033[0m"
#define MAGENTA "\033[35m"      /* Magenta */

//	COPLIEN ////////////////////////////////////////////////////////////////////
FragTrap::FragTrap(): ClapTrap::ClapTrap()
{
	this->_hitPts = 100;
	this->_energyPts = 100;
	this->_attackPts = 30;
	std::cout << MAGENTA << "** FragTrap **" << RESET << " Default Constructor : " << this->_name << " ** HitPts[" << this->_hitPts << "], EnergyPts[" << this->_energyPts << "], AttackPts[" << this->_attackPts << "]" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other): ClapTrap::ClapTrap(other)
{
	std::cout << MAGENTA << "** FragTrap **" << RESET << " Copy Constructor : " << this->_name << " ** HitPts[" << this->_hitPts << "], EnergyPts[" << this->_energyPts << "], AttackPts[" << this->_attackPts << "]" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << MAGENTA << "** FragTrap **" << RESET << " Destructor : " << this->_name << " ** HitPts[" << this->_hitPts << "], EnergyPts[" << this->_energyPts << "], AttackPts[" << this->_attackPts << "]" << std::endl;
}


FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << MAGENTA << "** FragTrap **" << RESET << " Assigment Operator **" << std::endl;
	(void) other;
	return *this;
}

//	CONSTRUCTOR /////////////////////////////////////////////////////////////////
FragTrap::FragTrap(std::string name):  ClapTrap::ClapTrap(name)
{
	this->_hitPts = 100;
	this->_energyPts = 100;
	this->_attackPts = 30;
	std::cout << MAGENTA << "** FragTrap **" << RESET << " Name Constructor : " << this->_name << " ** HitPts[" << this->_hitPts << "], EnergyPts[" << this->_energyPts << "], AttackPts[" << this->_attackPts << "]" << std::endl;
}


void	FragTrap::highFivesGuys()
{
	std::cout << MAGENTA << "-- ~ FragTrap : " << RESET << this->_name << " wants a High Five" << std::endl;
}
