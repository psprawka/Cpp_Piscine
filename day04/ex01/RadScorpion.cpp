/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 10:04:02 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/30 13:03:40 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"
#include <iostream>

/*
** -------------------------- CANONICAL MODE -----------------------------------
*/
RadScorpion	&RadScorpion::operator=(RadScorpion const &obj)
{
	this->_type = obj.getType();
	this->_hp = obj.getHP();
	return (*this);
}

RadScorpion::RadScorpion(void)
{
	this->_type = "RadScorpion";
	this->_hp = 80;
	
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &obj)
{
	*this = obj;
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
}
