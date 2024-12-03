/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:20:50 by fcoullou          #+#    #+#             */
/*   Updated: 2024/12/03 14:39:29 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ClapTrap
{
	protected:
		std::string	_name;
		int			_hitPts;
		int			_energyPts;
		int			_attackPts;

	public:
		ClapTrap();
		ClapTrap(const ClapTrap& other);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &other);
		
		ClapTrap(std::string name);

		std::string	getName() const;

		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};
