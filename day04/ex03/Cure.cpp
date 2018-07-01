/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 22:04:08 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/30 22:29:54 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"

/*
** -------------------------------- FUNC ---------------------------------------
*/
AMateria*	Cure::clone(void) const
{
	AMateria* copy = new Cure(*this);
	return (copy);
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << this->_type << "\’s wounds *" << std::endl;
	this->xp_ += 10;
}

/*
** -------------------------- CANONICAL MODE -----------------------------------
*/
Cure		&Cure::operator=(Cure const &obj)
{
	this->_type = obj.getType();
	this->xp_ = obj.getXP();
	return (*this);
}

Cure::Cure(void): _type("cure") {}

Cure::~Cure(void)
{
	// delete this;
}
