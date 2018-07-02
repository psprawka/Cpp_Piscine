/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 14:16:11 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/30 18:12:15 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"
#include "Squad.hpp"
#include <iostream>

int				Squad::_count = 0;

/*
** ------------------------------ FUNCTIONS ------------------------------------
*/
int				Squad::getCount(void) const
{
	return (this->_count);
}

ISpaceMarine*	Squad::getUnit(int i)
{
	if (this->_count - 1 < i || i < 0)
		return (NULL);
	
	return (this->_players[i]);
}

int				Squad::push(ISpaceMarine *to_push)
{
	if (this->_count > 20)
		return (-1);
	this->_players[this->_count] = to_push;
	this->_count++;
	return (this->_count - 1);
}


/*
** ------------------------------ CANONICAL ------------------------------------
*/
Squad &Squad::operator=(Squad const &obj)
{
	this->_count = obj.getCount();
	//to fix
	return (*this);
}

Squad::Squad(void) {}

Squad::Squad(Squad const &obj)
{
	*this = obj;
}

Squad::~Squad(void)
{
	for (int i = 0 ; i < this->_count; i++)
		delete _players[i];
}

