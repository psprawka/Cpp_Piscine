/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 22:04:01 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/30 23:47:57 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"

/*
** -------------------------------- FUNC ---------------------------------------
*/
AMateria*	Ice::clone(void) const
{
	AMateria* copy = new Ice(*this);
	return (copy);
}

void		Ice::use(ICharacter& target)
{
	std::cout << "woof" << std::endl;
	(void)target;
	std::cout << "* shoots an ice bolt at " << "sadface" << " *" << std::endl;
	this->xp_ += 10;
}

/*
** -------------------------- CANONICAL MODE -----------------------------------
*/
Ice		&Ice::operator=(Ice const &obj)
{
	this->_type = obj.getType();
	this->xp_ = obj.getXP();
	return (*this);
}

Ice::Ice(void): AMateria("ice") {}

Ice::~Ice(void)
{
	// delete this;
}
