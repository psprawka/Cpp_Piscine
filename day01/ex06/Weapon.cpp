/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 16:03:12 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/26 19:10:11 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>
#include <sstream>

std::string	const	&Weapon::getType(void)
{
	return (this->_type);
}

void				Weapon::setType(std::string type)
{
	this->_type = type;
}

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

Weapon::Weapon(void)
{
	// this->_type = type;
}
