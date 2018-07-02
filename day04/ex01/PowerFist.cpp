/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 10:02:36 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/30 13:02:42 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"
#include <iostream>

/*
** --------------------------------- FUNC ---------------------------------------
*/
void	PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

/*
** -------------------------- CANONICAL MODE -----------------------------------
*/
PowerFist::PowerFist(void)
{
	this->_name = "Power Fist";
	this->_demage = 50;
	this->_APcost = 8;
}

PowerFist::PowerFist(PowerFist const &obj)
{
	*this = obj;
}

PowerFist::~PowerFist(void) {}

PowerFist &PowerFist::operator=(PowerFist const &obj)
{
	this->_name = obj.getName();
	this->_demage = obj.getDemage();
	this->_APcost = obj.getAPCost();
	return (*this);
}

