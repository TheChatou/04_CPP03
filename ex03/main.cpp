/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 10:55:42 by fcoullou          #+#    #+#             */
/*   Updated: 2024/12/03 14:35:32 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int		main()
{
	ClapTrap 	one("Jack");
	ClapTrap	two(one);

	ScavTrap	three;
	ScavTrap	four("Bob");

	FragTrap	five("Lucy");
	FragTrap	six;

	DiamondTrap	seven("Laura");
	DiamondTrap	eight(seven);

	std::cout << std::endl << std::endl;
	one.attack(three.getName());
	one.beRepaired(5);
	two.attack(one.getName());
	
	std::cout << std::endl << std::endl;
	three.attack(one.getName());
	four.attack(one.getName());
	four.attack(four.getName());
	three.guardGate();
	five.attack("Lucy");
	
	std::cout << std::endl << std::endl;
	six.attack(five.getName());
	six.beRepaired(1000);
	five.highFivesGuys();
	six.attack(one.getName());
	
	std::cout << std::endl << std::endl;
	seven.attack(six.getName());
	eight.whoAmI();
	seven.highFivesGuys();
	seven.guardGate();
	eight.attack(one.getName());
	seven.beRepaired(1);
	
	std::cout << std::endl;
}
