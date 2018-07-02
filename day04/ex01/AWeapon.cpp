/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 10:01:27 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/30 13:01:03 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include <iostream>

/*
** --------------------------------- GET ---------------------------------------
*/
std::string		AWeapon::getName(void) const
{
	return (this->_name);
}

int				AWeapon::getAPCost(void) const
{
	return (this->_APcost);	
}

int				AWeapon::getDemage(void) const
{
	return (this->_demage);
}

/*
** -------------------------- CANONICAL MODE -----------------------------------
*/

AWeapon		&AWeapon::operator=(AWeapon const &obj)
{
	this->_name = obj.getName();
	this->_demage = obj.getDemage();
	this->_APcost = obj.getAPCost();
	return (*this);
}

AWeapon::AWeapon(void)
{
	this->_name = "NoNameWeapon";
	this->_APcost = 0;
	this->_demage = 0;
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
{
	this->_name = name;
	this->_APcost = apcost;
	this->_demage = damage;
}

AWeapon::AWeapon(AWeapon const &obj)
{
	*this = obj;
}

AWeapon::~AWeapon(void) {}
