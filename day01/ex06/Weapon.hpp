/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 16:03:23 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/26 18:51:17 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class	Weapon
{
	std::string _type;
	
	public:
		Weapon(std::string type);
		Weapon(void);
		std::string	const	&getType(void);
		void				setType(std::string type);
};

#endif
