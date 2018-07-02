/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 14:43:44 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/29 17:50:02 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "SuperTrap.hpp"

void	SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}

/*
**	----------------------- CANONICAL MODE --------------------------------
*/
SuperTrap::SuperTrap(void): FragTrap(), NinjaTrap()
{
	this->_name = "Noname";
	this->_hitpoints = 100;
	this->_max_hitpoints = 100;
	this->_ranged_attack = 20;
	this->_armor_reduction = 5;
	std::cout << "[" << this->_name << "], void constructor in SuperTrap family.\n";
}

SuperTrap::SuperTrap(std::string name): FragTrap(name), NinjaTrap(name)
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_max_hitpoints = 100;
	this->_ranged_attack = 20;
	this->_armor_reduction = 5;
	std::cout << "[" << name << "], name constructor in SuperTrap family.\n";
}

SuperTrap::SuperTrap(SuperTrap const &obj)
{
	*this = obj;
	std::cout << "[" << this->_name << "], copy constructor in SuperTrap family.\n";
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "[" << this->_name << "] SuperTrap descructor." << std::endl;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &obj)
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
	std::cout << "[" << this->_name << "] SuperTrap operator assignation." << std::endl;
	return (*this);
}