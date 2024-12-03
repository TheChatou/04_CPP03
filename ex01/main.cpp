/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 10:55:42 by fcoullou          #+#    #+#             */
/*   Updated: 2024/12/03 14:00:52 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int		main()
{
	ClapTrap 	one("Jack");
	ClapTrap	two(one);

	ScavTrap	three;
	ScavTrap	four("Bob");

	std::cout << std::endl;
	one.attack(two.getName());
	one.beRepaired(5);
	two.attack(one.getName());
	
	std::cout << std::endl;
	three.attack(two.getName());
	four.attack(one.getName());
	four.attack(four.getName());
	three.guardGate();
	
	std::cout << std::endl;	
}