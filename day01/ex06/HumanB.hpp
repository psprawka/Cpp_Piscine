/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 16:02:07 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/26 19:09:18 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanB
{
	Weapon		*_weapon;
	std::string _name;

	public:
		void	attack(void);
		void	setWeapon(Weapon &weapon);
		HumanB(std::string name);
};

#endif
