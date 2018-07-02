/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 14:17:03 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/30 16:17:46 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"
#include "AssaultTerminator.hpp"
#include <iostream>

/*
** ------------------------------ FUNCTIONS ------------------------------------
*/
int				AssaultTerminator::getHP(void) const
{
	return (this->_hp);
}

ISpaceMarine*	AssaultTerminator::clone(void) const
{
	return (NULL);
}

void			AssaultTerminator::battleCry(void) const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void			AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *”" << std::endl;
}

void			AssaultTerminator::meleeAttack(void) const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}

/*
** ------------------------------ CANONICAL ------------------------------------
*/
AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const &obj)
{
	this->_hp = obj.getHP();
	return (*this);
}

AssaultTerminator::AssaultTerminator(void): _hp(100)
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &obj): _hp(100)
{
	std::cout << "* teleports from space *" << std::endl;
	*this = obj;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I’ll be back..." << std::endl;
}
