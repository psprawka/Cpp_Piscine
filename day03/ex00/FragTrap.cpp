/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 15:41:31 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/29 16:41:08 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>


void 	FragTrap::rangedAttack(std::string const & target)
{
	if (this->_energy < 10)
	{
		std::cout << "[rangedAttack] Out of energy... :(" << std::endl;
		return ;
	}
	this->_energy -= 10;
	std::cout << "A banana " << this->_name << " roasts " << target << " on the grill, causing " << this->_ranged_attack << "% of ranged skin burn." << std::endl;
}

void 	FragTrap::meleeAttack(std::string const & target)
{
	if (this->_energy < 10)
	{
		std::cout << "[meleeAttack] Out of energy... :(" << std::endl;
		return ;
	}
	this->_energy -= 10;
	std::cout << "A banana " << this->_name << " roasts " << target << " on the grill, causing " << this->_melee_attack << "% malee skin burn." << std::endl;
}

void 	FragTrap::llamaAttack(std::string const & target)
{
	if (this->_energy < 10)
	{
		std::cout << "[llamaAttack] Out of energy... :(" << std::endl;
		return ;
	}
	this->_energy -= 10;
	std::cout << "A banana " << this->_name << " throws its target << " << target << " to llama's farm. A Llama eats " << this->_llama_attack << "% of banana." << std::endl;
}

void 	FragTrap::backAttack(std::string const & target)
{
	if (this->_energy < 10)
	{
		std::cout << "[backAttack] Out of energy... :(" << std::endl;
		return ;
	}
	this->_energy -= 10;
	std::cout << "A banana " << this->_name << " has peeled its friend " << target << "from the back side, causing " << this->_back_attack << "% of banana." << std::endl;
}

void 	FragTrap::knifeAttack(std::string const & target)
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

void	FragTrap::armorReduction(void)
{
	if (this->_hitpoints + this->_armor_reduction <= this->_max_hitpoints)
		this->_hitpoints += this->_armor_reduction;
	else
		this->_hitpoints = this->_max_hitpoints;

	std::cout << "Skin (Armor) reduction: +" << this->_armor_reduction << "% to hp." << std::endl;
}

void 	FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "\"I am an honored banana " << this->_name << ", thus I'm taking "
		<< amount << "% of this lame attack.\"" << std::endl;
	
	if ((int)this->_hitpoints - (int)amount < 0)
		this->_hitpoints = 0;
	else
		this->_hitpoints -= amount;

	this->armorReduction();
}

void 	FragTrap::beRepaired(unsigned int amount)
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


void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	typedef void(FragTrap::*FragAttacks)(std::string const & target);
	
	FragAttacks	attacks[5] = {&FragTrap::knifeAttack, &FragTrap::backAttack,
		&FragTrap::llamaAttack, &FragTrap::meleeAttack, &FragTrap::rangedAttack};
	
	if (this->_energy < 25)
	{
		std::cout << "[vaulthunter_dot_exe] Out of energy... :(" << std::endl;
		return ;
	}

	this->_energy -= 25;
	(this->*attacks[rand() % 5])(target);
}

/*
**	----------------------------- GET ------------------------------------
*/
unsigned int	FragTrap::getHitPoints(void) const
{
	return (this->_hitpoints);
}

unsigned int	FragTrap::getMaxHitPoints(void) const
{
	return (this->_max_hitpoints);	
}

unsigned int	FragTrap::getEnergy(void) const
{
	return (this->_energy);
}

unsigned int	FragTrap::getMaxEnergy(void) const
{
	return (this->_max_energy);	
}

unsigned int	FragTrap::getLevel(void) const
{
	return (this->_level);
}

std::string		FragTrap::getName(void) const
{
	return (this->_name);	
}

unsigned int	FragTrap::getMeleeAttack(void) const
{
	return (this->_melee_attack);	
}

unsigned int	FragTrap::getRangedAttack(void) const
{
	return (this->_ranged_attack);	
}

unsigned int	FragTrap::getLlamaAttack(void) const
{
	return (this->_llama_attack);	
}

unsigned int	FragTrap::getBackAttack(void) const
{
	return (this->_back_attack);	
}

unsigned int	FragTrap::getKnifeAttack(void) const
{
	return (this->_knife_attack);	
}

unsigned int	FragTrap::getArmorReduction(void) const
{
	return (this->_armor_reduction);	
}


/*
**	----------------------- CANONICAL MODE --------------------------------
*/
FragTrap::FragTrap(void): _hitpoints(100), _max_hitpoints(100), _energy(100), _max_energy(100), _level(1), _name("NoName"), _melee_attack(30), _ranged_attack(20), _llama_attack(15), _back_attack(15), _knife_attack(15), _armor_reduction(5)
{
	std::cout << "[" << this->_name << "] void constructor in FragTrap family.\n";
}

FragTrap::FragTrap(std::string name): _hitpoints(100), _max_hitpoints(100), _energy(100), _max_energy(100), _level(1), _name(name), _melee_attack(30), _ranged_attack(20), _llama_attack(15), _back_attack(15), _knife_attack(15), _armor_reduction(5)
{
	std::cout << "[" << name << "] name constructor in FragTrap family.\n";
}

FragTrap::FragTrap(FragTrap const &obj)
{
	*this = obj;
	std::cout << "[" << this->_name << "] copy constructor in FragTrap family.\n";
}

FragTrap::~FragTrap(void)
{
	std::cout << "[" << this->_name << "] FragTrap destructor." << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &obj)
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