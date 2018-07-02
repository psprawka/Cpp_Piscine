/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 14:16:37 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/30 17:27:54 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include <iostream>

/*
** ------------------------------ FUNCTIONS ------------------------------------
*/
int				TacticalMarine::getHP(void) const
{
	return (this->_hp);
}

ISpaceMarine*	TacticalMarine::clone(void) const
{
	ISpaceMarine* copy = new TacticalMarine(*this);
	return (copy);
}

void			TacticalMarine::battleCry(void) const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void			TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with bolter *" << std::endl;
}

void			TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attacks with chainsword *" << std::endl;
}

/*
** ------------------------------ CANONICAL ------------------------------------
*/
TacticalMarine &TacticalMarine::operator=(TacticalMarine const &obj)
{
	this->_hp = obj.getHP();
	return (*this);
}

TacticalMarine::TacticalMarine(void): _hp(100) {
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &obj): _hp(100)
{
	*this = obj;
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh..." << std::endl;
}
