/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 22:03:49 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/30 23:28:06 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"


/*
** --------------------------------- GET ---------------------------------------
*/
unsigned int		AMateria::getXP(void) const
{
	return (this->xp_);	
}

std::string	const		&AMateria::getType() const
{
	return (this->_type);
}


/*
** -------------------------------- FUNC ---------------------------------------
*/


/*
** ----------------------------- OPEARTORS ------------------------------------
*/

AMateria		&AMateria::operator=(AMateria const &obj)
{
	this->_type = obj.getType();
	this->xp_ = obj.getXP();
	return (*this);
}

/*
** -------------------------- CANONICAL MODE -----------------------------------
*/
AMateria::AMateria(void) {}

AMateria::AMateria(std::string const &type): _type(type) {}

AMateria::AMateria(AMateria const &obj)
{
	*this = obj;
}

AMateria::~AMateria(void) {}


