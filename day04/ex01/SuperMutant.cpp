/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 10:03:35 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/30 13:04:02 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"
#include <iostream>

/*
** -------------------------------- FUNC ---------------------------------------
*/ 
void			SuperMutant::takeDamage(int demage)
{
	Enemy::takeDamage(demage - 3);
}

/*
** -------------------------- CANONICAL MODE -----------------------------------
*/

SuperMutant	&SuperMutant::operator=(SuperMutant const &obj)
{
	this->_type = obj.getType();
	this->_hp = obj.getHP();
	return (*this);
}

SuperMutant::SuperMutant(void)
{
	this->_type = "Super Mutant";
	this->_hp = 170;
	
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &obj)
{
	*this = obj;
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh..." << std::endl;
}
