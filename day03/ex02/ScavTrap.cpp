/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 08:11:50 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/29 12:34:41 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"
#include <iostream>


void 	ScavTrap::Challenge1(void) const
{
	std::cout << "[" << this->_name << "] Challenge no. 1: Bring me some spaghetti." << std::endl;
}

void 	ScavTrap::Challenge2(void) const
{
	std::cout << "[" << this->_name << "] Challenge no. 2: Ask Gaetan why is Gaetan." << std::endl;
}

void 	ScavTrap::Challenge3(void) const
{
	
	std::cout << "[" << this->_name << "] Challenge no. 3: Find out why am I doing it?" << std::endl;
}

void 	ScavTrap::Challenge4(void) const
{

	std::cout << "[" << this->_name << "] Challenge no. 4: Sing a song." << std::endl;
}

void 	ScavTrap::Challenge5(void) const
{
	std::cout << "[" << this->_name << "] Challenge no. 5: Take me to my bed so I can sleep." << std::endl;
	
}

void	ScavTrap::challengeNewcomer(void) const
{
	typedef void (ScavTrap::*ScavChallenge)(void) const;
	
	ScavChallenge challenge[5] = {&ScavTrap::Challenge1, &ScavTrap::Challenge2,
		&ScavTrap::Challenge3, &ScavTrap::Challenge4, &ScavTrap::Challenge5};
	
	(this->*challenge[rand() % 5])();
}

/*
**	----------------------- CANONICAL MODE --------------------------------
*/
ScavTrap::ScavTrap(void): ClapTrap()
{
	this->_energy = 50;
	this->_max_energy = 50;
	this->_melee_attack = 20;
	this->_ranged_attack = 15;
	this->_armor_reduction = 3;
	std::cout << "[" << this->_name << "], void constructor in ScavTrap family.\n";
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_energy = 50;
	this->_max_energy = 50;
	this->_melee_attack = 20;
	this->_ranged_attack = 15;
	this->_armor_reduction = 3;
	std::cout << "[" << name << "], name constructor in ScavTrap family.\n";
}

ScavTrap::ScavTrap(ScavTrap const &obj)
{
	*this = obj;
	std::cout << "[" << this->_name << "], copy constructor in ScavTrap family.\n";
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "[" << this->_name << "] ScavTrap descructor." << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &obj)
{
	this->_hitpoints = obj.getHitPoints();
	this->_max_hitpoints = obj.getMaxHitPoints();
	this->_energy = obj.getEnergy();
	this->_max_energy = obj.getMaxEnergy();
	this->_level = obj.getLevel();
	this->_name = obj.getName();
	this->_melee_attack = obj.getMeleeAttack();
	this->_ranged_attack = obj.getRangedAttack();
	this->_llama_attack = obj.getLlamaAttack();
	this->_back_attack = obj.getBackAttack();
	this->_knife_attack = obj.getKnifeAttack();
	this->_armor_reduction = obj.getArmorReduction();
	std::cout << "[" << this->_name << "] ScavTrap operator assignation." << std::endl;
	return (*this);
}
