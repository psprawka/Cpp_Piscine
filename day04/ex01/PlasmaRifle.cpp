/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 10:01:56 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/30 12:59:13 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include <iostream>

/*
** --------------------------------- FUNC ---------------------------------------
*/
void	PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

/*
** -------------------------- CANONICAL MODE -----------------------------------
*/
PlasmaRifle::PlasmaRifle(void)
{
	this->_name = "Plasma Rifle";
	this->_demage = 21;
	this->_APcost = 5;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &obj)
{
	*this = obj;
}

PlasmaRifle::~PlasmaRifle(void) {}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &obj)
{
	this->_name = obj.getName();
	this->_demage = obj.getDemage();
	this->_APcost = obj.getAPCost();
	return (*this);
}

