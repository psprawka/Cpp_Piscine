/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 22:04:08 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/30 23:47:48 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"

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
	std::cout << "Meow" << std::endl;
	(void)target;
	std::cout << "* heals " << "Hello" << "'s wounds *" << std::endl;
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

Cure::Cure(void) : AMateria("cure") {}

Cure::~Cure(void)
{
	// delete this;
}
