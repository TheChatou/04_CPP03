/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:00:15 by fcoullou          #+#    #+#             */
/*   Updated: 2024/12/03 14:13:14 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public :
		ScavTrap();
		ScavTrap(const ScavTrap &other);
		~ScavTrap();
		ScavTrap &operator=(const ScavTrap &other);

		ScavTrap(std::string name);

		void	attack(const std::string& target);
		void	guardGate();
};
