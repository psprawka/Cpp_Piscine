/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 09:23:25 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/29 16:40:53 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

/*
**	----------------------------- ATTACKS -------------------------------------
*/
void 	ClapTrap::rangedAttack(std::string const & target)
{
	if (this->_energy < 10)
	{
		std::cout << "[rangedAttack] Out of energy... :(" << std::endl;
		return ;
	}
	this->_energy -= 10;
	std::cout << "A banana " << this->_name << " roasts " << target << " on the grill, causing " << this->_ranged_attack << "% of ranged skin burn." << std::endl;
}

void 	ClapTrap::meleeAttack(std::string const & target)
{
	if (this->_energy < 10)
	{
		std::cout << "[meleeAttack] Out of energy... :(" << std::endl;
		return ;
	}
	this->_energy -= 10;
	std::cout << "A banana " << this->_name << " roasts " << target << " on the grill, causing " << this->_melee_attack << "% malee skin burn." << std::endl;
}

void 	ClapTrap::llamaAttack(std::string const & target)
{
	if (this->_energy < 10)
	{
		std::cout << "[llamaAttack] Out of energy... :(" << std::endl;
		return ;
	}
	this->_energy -= 10;
	std::cout << "A banana " << this->_name << " throws its target << " << target << " to llama's farm. A Llama eats " << this->_llama_attack << "% of banana." << std::endl;
}

void 	ClapTrap::backAttack(std::string const & target)
{
	if (this->_energy < 10)
	{
		std::cout << "[backAttack] Out of energy... :(" << std::endl;
		return ;
	}
	this->_energy -= 10;
	std::cout << "A banana " << this->_name << " has peeled its friend " << target << "from the back side, causing " << this->_back_attack << "% of banana." << std::endl;
}

void 	ClapTrap::knifeAttack(std::string const & target)
{
	if (this->_energy < 10)
	{
		std::cout << "[knifeAttack] Out of energy... :(" << std::endl;
		return ;
	}
	this->_energy -= 10;
	std::cout << "A banana " << this->_name << " is about to brutally chop " << target << ". " << target
		<< " looses " << this->_knife_attack << "% of itself." << std::endl;
	
}

/*
**	--------------------------- HP AND ENERGY -----------------------------------
*/
void	ClapTrap::armorReduction(void)
{
	if (this->_hitpoints + this->_armor_reduction <= this->_max_hitpoints)
		this->_hitpoints += this->_armor_reduction;
	else
		this->_hitpoints = this->_max_hitpoints;

	std::cout << "Skin (Armor) reduction: +" << this->_armor_reduction << "% to hp." << std::endl;
}

void 	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "\"I am an honored banana " << this->_name << ", thus I'm taking "
		<< amount << "% of this lame attack.\"" << std::endl;
	
	if ((int)this->_hitpoints - (int)amount < 0)
		this->_hitpoints = 0;
	else
		this->_hitpoints -= amount;

	this->armorReduction();
}

void 	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "Badass motherfucker banana " << this->_name << " repairs " <<
		amount << "% of its yellow skin by putting sunlotion on it. (And energy!)" << std::endl;

	if (this->_hitpoints + amount > this->_max_hitpoints)
		this->_hitpoints = this->_max_hitpoints;
	else
		this->_hitpoints += amount;

	if (this->_energy + amount > _max_energy)
		this->_energy = _max_energy;
	else
		this->_energy += amount;
}


/*
**	----------------------------- GET ------------------------------------
*/
unsigned int	ClapTrap::getHitPoints(void) const
{
	return (this->_hitpoints);
}

unsigned int	ClapTrap::getMaxHitPoints(void) const
{
	return (this->_max_hitpoints);	
}

unsigned int	ClapTrap::getEnergy(void) const
{
	return (this->_energy);
}

unsigned int	ClapTrap::getMaxEnergy(void) const
{
	return (this->_max_energy);	
}

unsigned int	ClapTrap::getLevel(void) const
{
	return (this->_level);
}

std::string		ClapTrap::getName(void) const
{
	return (this->_name);	
}

unsigned int	ClapTrap::getMeleeAttack(void) const
{
	return (this->_melee_attack);	
}

unsigned int	ClapTrap::getRangedAttack(void) const
{
	return (this->_ranged_attack);	
}

unsigned int	ClapTrap::getLlamaAttack(void) const
{
	return (this->_llama_attack);	
}

unsigned int	ClapTrap::getBackAttack(void) const
{
	return (this->_back_attack);	
}

unsigned int	ClapTrap::getKnifeAttack(void) const
{
	return (this->_knife_attack);	
}

unsigned int	ClapTrap::getArmorReduction(void) const
{
	return (this->_armor_reduction);	
}


/*
**	----------------------- CANONICAL MODE --------------------------------
*/
ClapTrap::ClapTrap(void): _hitpoints(100), _max_hitpoints(100), _level(1), _name("NoName"), _llama_attack(10), _back_attack(10), _knife_attack(10)
{
	std::cout << "[" << this->_name << "] ClapTrap constructor." << std::endl; 
}

ClapTrap::ClapTrap(std::string name): _hitpoints(100), _max_hitpoints(100), _level(1), _name(name), _llama_attack(10), _back_attack(10), _knife_attack(10)
{
	std::cout << "[" << name << "] ClapTrap name constructor." << std::endl; 
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
	*this = obj;
	std::cout << "[" << this->_name << "] ClapTrap copy constructor." << std::endl; 
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "[" << this->_name << "] ClapTrap destructor." << std::endl; 
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &obj)
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
	std::cout << "[" << this->_name << "] ClapTrap operator assignation." << std::endl;
	return (*this);
}
