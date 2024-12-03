/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 10:55:42 by fcoullou          #+#    #+#             */
/*   Updated: 2024/12/03 13:34:04 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		main()
{
	ClapTrap 	one("Jack");
	ClapTrap	two;
	ClapTrap	three(one);

	std::cout << std::endl;
	one.attack("Jack");
	one.beRepaired(5);
	two.attack("Jack");
	three.attack("NoName");
	two.attack("Jack");
	two.attack("Jack");
	two.attack("Jack");
	two.attack("Jack");
	two.attack("Jack");
	two.attack("Jack");
	two.attack("Jack");
	two.attack("Jack");
	two.attack("Jack");
	two.attack("Jack");
	std::cout << std::endl;
}