/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 10:03:09 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/30 14:04:20 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"
#include <iostream>

/*
** -------------------------------- FUNC ---------------------------------------
*/
std::string		Enemy::getType(void) const
{
	return (this->_type);
}

int				Enemy::getHP(void) const
{
	return (this->_hp);	
}

void			Enemy::takeDamage(int demage)
{
	if (this->_hp - demage > 0)
		this->_hp -= demage;
	else
		this->_hp = 0;

}

/*
** -------------------------- CANONICAL MODE -----------------------------------
*/

Enemy	&Enemy::operator=(Enemy const &obj)
{
	this->_type = obj.getType();
	this->_hp = obj.getHP();
	return (*this);
}

Enemy::Enemy(void)
{
	this->_type = "NoNameEnemy";
	this->_hp = 0;
}

Enemy::Enemy(int hp, std::string const &type)
{
	this->_type = type;
	this->_hp = hp;
}

Enemy::Enemy(Enemy const &obj)
{
	*this = obj;
}

Enemy::~Enemy(void) {}

