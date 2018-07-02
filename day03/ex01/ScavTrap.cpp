/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 08:11:50 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/29 16:41:23 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"
#include <iostream>

void 	ScavTrap::rangedAttack(std::string const & target)
{
	if (this->_energy < 10)
	{
		std::cout << "[ScavTrap::rangedAttack] Out of energy... :(" << std::endl;
		return ;
	}
	this->_energy -= 10;
	std::cout << "A pineapple [" << this->_name << "] burns " << target << " in the fire, causing " << this->_ranged_attack << "% of ranged skin burn." << std::endl;
}

void 	ScavTrap::meleeAttack(std::string const & target)
{
	if (this->_energy < 10)
	{
		std::cout << "[ScavTrap::meleeAttack] Out of energy... :(" << std::endl;
		return ;
	}
	this->_energy -= 10;
	std::cout << "A pineapple [" << this->_name << "] burns " << target << " int the fire, causing " << this->_melee_attack << "% malee skin burn." << std::endl;
}

void 	ScavTrap::llamaAttack(std::string const & target)
{
	if (this->_energy < 10)
	{
		std::cout << "[ScavTrap::llamaAttack] Out of energy... :(" << std::endl;
		return ;
	}
	this->_energy -= 10;
	std::cout << "A pineapple [" << this->_name << "] throws its target << " << target << " to llama's farm. A Llama eats " << this->_llama_attack << "% of pineapple." << std::endl;
}

void 	ScavTrap::backAttack(std::string const & target)
{
	if (this->_energy < 10)
	{
		std::cout << "[ScavTrap::backAttack] Out of energy... :(" << std::endl;
		return ;
	}
	this->_energy -= 10;
	std::cout << "A pineapple [" << this->_name << "] has peeled its friend " << target << "from the back side, causing " << this->_back_attack << "% of pineapple." << std::endl;
}

void 	ScavTrap::knifeAttack(std::string const & target)
{
	if (this->_energy < 10)
	{
		std::cout << "[ScavTrap::knifeAttack] Out of energy... :(" << std::endl;
		return ;
	}
	this->_energy -= 10;
	std::cout << "A pineapple [" << this->_name << "] is about to brutally chop " << target << ". " << target
		<< " looses " << this->_knife_attack << "% of itself." << std::endl;
	
}


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


void	ScavTrap::armorReduction(void)
{
	if (this->_hitpoints + this->_armor_reduction <= this->_max_hitpoints)
		this->_hitpoints += this->_armor_reduction;
	else
		this->_hitpoints = this->_max_hitpoints;

	std::cout << "Skin (Armor) reduction: +" << this->_armor_reduction << "% to hp." << std::endl;
}

void 	ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "\"I am an honored banana " << this->_name << ", thus I'm taking "
		<< amount << "% of this lame attack.\"" << std::endl;
	
	if ((int)this->_hitpoints - (int)amount < 0)
		this->_hitpoints = 0;
	else
		this->_hitpoints -= amount;

	this->armorReduction();
}

void 	ScavTrap::beRepaired(unsigned int amount)
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

void	ScavTrap::challengeNewcomer(void) const
{
	typedef void (ScavTrap::*ScavChallenge)(void) const;
	
	ScavChallenge challenge[5] = {&ScavTrap::Challenge1, &ScavTrap::Challenge2,
		&ScavTrap::Challenge3, &ScavTrap::Challenge4, &ScavTrap::Challenge5};
	
	(this->*challenge[rand() % 5])();
}

/*
**	----------------------------- GET ------------------------------------
*/
unsigned int	ScavTrap::getHitPoints(void) const
{
	return (this->_hitpoints);
}

unsigned int	ScavTrap::getMaxHitPoints(void) const
{
	return (this->_max_hitpoints);	
}

unsigned int	ScavTrap::getEnergy(void) const
{
	return (this->_energy);
}

unsigned int	ScavTrap::getMaxEnergy(void) const
{
	return (this->_max_energy);	
}

unsigned int	ScavTrap::getLevel(void) const
{
	return (this->_level);
}

std::string		ScavTrap::getName(void) const
{
	return (this->_name);	
}

unsigned int	ScavTrap::getMeleeAttack(void) const
{
	return (this->_melee_attack);	
}

unsigned int	ScavTrap::getRangedAttack(void) const
{
	return (this->_ranged_attack);	
}

unsigned int	ScavTrap::getLlamaAttack(void) const
{
	return (this->_llama_attack);	
}

unsigned int	ScavTrap::getBackAttack(void) const
{
	return (this->_back_attack);	
}

unsigned int	ScavTrap::getKnifeAttack(void) const
{
	return (this->_knife_attack);	
}

unsigned int	ScavTrap::getArmorReduction(void) const
{
	return (this->_armor_reduction);	
}


/*
**	----------------------- CANONICAL MODE --------------------------------
*/
ScavTrap::ScavTrap(void): _hitpoints(100), _max_hitpoints(100), _energy(50), _max_energy(50), _level(1), _name("NoName"), _melee_attack(20), _ranged_attack(15), _llama_attack(10), _back_attack(10), _knife_attack(10), _armor_reduction(3)
{
	std::cout << "[" << this->_name << "] void constructor in ScavTrap family.\n";
}

ScavTrap::ScavTrap(std::string name): _hitpoints(100), _max_hitpoints(100), _energy(50), _max_energy(50), _level(1), _name(name), _melee_attack(20), _ranged_attack(15), _llama_attack(10), _back_attack(10), _knife_attack(10), _armor_reduction(3)
{
	std::cout << "[" << name << "] name constructor in ScavTrap family.\n";
}

ScavTrap::ScavTrap(ScavTrap const &obj)
{
	*this = obj;
	std::cout << "[" << this->_name << "] copy constructor in ScavTrap family.\n";
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
