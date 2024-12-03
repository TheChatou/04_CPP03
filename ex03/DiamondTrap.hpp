/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:09:56 by fcoullou          #+#    #+#             */
/*   Updated: 2024/12/03 14:13:22 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private :
		std::string	_name;
		
	public :
		DiamondTrap();
		DiamondTrap(DiamondTrap const &other);
		~DiamondTrap();
		DiamondTrap &operator=(DiamondTrap const &other);

		DiamondTrap(std::string name);

		void	whoAmI();
		void	attack(const std::string& target);
};