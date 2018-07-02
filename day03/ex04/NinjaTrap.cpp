/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 13:05:03 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/29 17:40:21 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include <iostream>

void	NinjaTrap::ninjaShoebox(NinjaTrap const &obj) const
{
	std::cout << "NinjaTrap [" << this->_name << "] calls [" << obj.getName() << "] form NinjaTrap family." << std::endl; 
}

void	NinjaTrap::ninjaShoebox(FragTrap const &obj) const
{
	std::cout << "NinjaTrap [" << this->_name << "] calls [" << obj.getName() << "] form FragTrap family." << std::endl; 
}

void	NinjaTrap::ninjaShoebox(ScavTrap const &obj) const
{
	std::cout << "NinjaTrap [" << this->_name << "] calls [" << obj.getName() << "] form ScavTrap family." << std::endl; 
}

void	NinjaTrap::ninjaShoebox(ClapTrap const &obj) const
{
	std::cout << "NinjaTrap [" << this->_name << "] calls [" << obj.getName() << "] form ClapTrap family." << std::endl; 
}

void 	NinjaTrap::rangedAttack(std::string const & target)
{
	if (this->_energy < 10)
	{
		std::cout << "[Ninja rangedAttack] Out of energy... :(" << std::endl;
		return ;
	}
	this->_energy -= 10;
	std::cout << "[Ninja rangedAttack] A banana " << this->_name << " roasts " << target << " on the grill, causing " << this->_ranged_attack << "% of ranged skin burn." << std::endl;
}

void 	NinjaTrap::meleeAttack(std::string const & target)
{
	if (this->_energy < 10)
	{
		std::cout << "[Ninja meleeAttack] Out of energy... :(" << std::endl;
		return ;
	}
	this->_energy -= 10;
	std::cout << "[Ninja meleeAttack] A banana " << this->_name << " roasts " << target << " on the grill, causing " << this->_melee_attack << "% malee skin burn." << std::endl;
}

/*
**	----------------------- CANONICAL MODE --------------------------------
*/
NinjaTrap::NinjaTrap(void): ClapTrap()
{
	this->_hitpoints = 60;
	this->_max_hitpoints = 60;
	this->_energy = 120;
	this->_max_energy = 120;
	this->_melee_attack = 60;
	this->_ranged_attack = 5;
	this->_armor_reduction = 0;
	std::cout << "[" << this->_name << "], void constructor in NinjaTrap family.\n";
}

NinjaTrap::NinjaTrap(std::string name): ClapTrap(name)
{
	this->_hitpoints = 60;
	this->_max_hitpoints = 60;
	this->_energy = 120;
	this->_max_energy = 120;
	this->_melee_attack = 60;
	this->_ranged_attack = 5;
	this->_armor_reduction = 0;
	std::cout << "[" << this->_name << "], name constructor in NinjaTrap family.\n";
}

NinjaTrap::NinjaTrap(NinjaTrap const &obj)
{
	*this = obj;
	std::cout << "[" << this->_name << "], copy constructor in NinjaTrap family.\n";
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "[" << this->_name << "] NinjaTrap destructor." << std::endl;
}

NinjaTrap	&NinjaTrap::operator=(NinjaTrap const &obj)
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
	std::cout << "[" << this->_name << "] NinjaTrap operator assignation." << std::endl;
	return (*this);
}

