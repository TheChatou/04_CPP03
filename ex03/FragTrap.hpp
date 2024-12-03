/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:00:15 by fcoullou          #+#    #+#             */
/*   Updated: 2024/12/03 14:13:10 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public :
		FragTrap();
		FragTrap(const FragTrap &other);
		~FragTrap();
		FragTrap &operator=(const FragTrap &other);

		FragTrap(std::string name);

		void	highFivesGuys(void);
};
