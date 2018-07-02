/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 10:04:33 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/30 14:07:04 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

# define WHITE			"\x1B[37m"
# define PINK			"\033[38;5;200m"

/*
** --------------------------------- GET ---------------------------------------
*/
std::string		Character::getName(void) const
{
	return (this->_name);
}

int				Character::getAP(void) const
{
	return (this->_ap);	
}

AWeapon			*Character::getWeapon(void) const
{
	return (this->_weapon);	
}


/*
** -------------------------------- FUNC ---------------------------------------
*/
void	Character::recoverAP(void)
{
	this->_ap -= this->_weapon->getAPCost();
}

void	Character::equip(AWeapon *new_weapon)
{
	this->_weapon = new_weapon;
}

void	Character::attack(Enemy *new_enemy)
{
	if (!this->_weapon)
		return ;
	if (this->_ap - this->_weapon->getAPCost() < 0)
	{
		std::cout << "Not enought AP" << std::endl;
		return ;
	}
	
	std::cout << this->_name << " attacks " << new_enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
	this->_weapon->attack();
	this->recoverAP();

	if (new_enemy->getHP() - this->_weapon->getDemage() <= 0)
		new_enemy->~Enemy();
	else
		new_enemy->takeDamage(this->_weapon->getDemage());
}


/*
** ----------------------------- OPEARTORS ------------------------------------
*/

Character		&Character::operator=(Character const &obj)
{
	this->_name = obj.getName();
	this->_ap = obj.getAP();
	this->_weapon = obj.getWeapon();
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, Character const &obj)
{
	if (obj.getWeapon())
		os << obj.getName() << " has " << obj.getAP() << " AP and wields a " << (obj.getWeapon())->getName() << std::endl;
	else
		os << obj.getName() << " has " << obj.getAP() << " AP and is unarmed" << std::endl;
	
	return (os);
}

/*
** -------------------------- CANONICAL MODE -----------------------------------
*/
Character::Character(void): _weapon(NULL), _ap(40), _name("Noname") {}

Character::Character(std::string const &type): _weapon(NULL), _ap(40), _name(type) {}

Character::Character(Character const &obj)
{
	*this = obj;
}

Character::~Character(void) {}
