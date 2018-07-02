/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 10:04:25 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/30 14:06:36 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <iostream>

class Character
{
	private:
		AWeapon			*_weapon;
		int				_ap;
		std::string		_name;
		
		
	public:
		Character(void);
		Character(std::string const & name);
		Character(Character const &obj);
		~Character(void);

		Character		&operator=(Character const &obj);

		std::string		getName(void) const;
		int				getAP(void) const;
		AWeapon			*getWeapon(void) const;
		
		void			recoverAP(void);
		void			equip(AWeapon*);
		void			attack(Enemy*);
};

std::ostream	&operator<<(std::ostream &os, Character const &obj);

#endif