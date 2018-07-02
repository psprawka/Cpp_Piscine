/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 15:41:31 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/29 12:31:32 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>


void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	typedef void(FragTrap::*FragAttacks)(std::string const & target);
	
	FragAttacks	attacks[5] = {&ClapTrap::knifeAttack, &ClapTrap::backAttack,
		&ClapTrap::llamaAttack, &ClapTrap::meleeAttack, &ClapTrap::rangedAttack};
	
	if (this->_energy < 25)
	{
		std::cout << "[vaulthunter_dot_exe] Out of energy... :(" << std::endl;
		return ;
	}

	this->_energy -= 25;
	(this->*attacks[rand() % 5])(target);
}

/*
**	----------------------- CANONICAL MODE --------------------------------
*/
FragTrap::FragTrap(void): ClapTrap()
{
	this->_energy = 100;
	this->_max_energy = 100;
	this->_melee_attack = 30;
	this->_ranged_attack = 20;
	this->_armor_reduction = 5;
	std::cout << "[" << this->_name << "], void constructor in FragTrap family.\n";
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_energy = 100;
	this->_max_energy = 100;
	this->_melee_attack = 30;
	this->_ranged_attack = 20;
	this->_armor_reduction = 5;
	std::cout << "[" << this->_name << "], name constructor in FragTrap family.\n";
}

FragTrap::FragTrap(FragTrap const &obj)
{
	*this = obj;
	std::cout << "[" << this->_name << "], copy constructor in FragTrap family.\n";
}

FragTrap::~FragTrap(void)
{
	std::cout << "[" << this->_name << "] FragTrap destructor." << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &obj)
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
	std::cout << "[" << this->_name << "] FragTrap operator assignation." << std::endl;
	return (*this);
}
