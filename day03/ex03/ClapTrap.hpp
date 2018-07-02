/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 09:23:33 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/29 12:25:50 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		unsigned int	_hitpoints;
		unsigned int	_max_hitpoints;
		unsigned int	_energy;
		unsigned int	_max_energy;
		unsigned int	_level;
		std::string		_name;
		unsigned int	_melee_attack;
		unsigned int	_ranged_attack;
		unsigned int	_llama_attack;
		unsigned int	_back_attack;
		unsigned int	_knife_attack;
		unsigned int	_armor_reduction;

	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &obj);
		~ClapTrap(void);
		ClapTrap &operator=(ClapTrap const &obj);
		
		void 			rangedAttack(std::string const & target);
		void 			meleeAttack(std::string const & target);
		void 			llamaAttack(std::string const & target);
		void 			backAttack(std::string const & target);
		void 			knifeAttack(std::string const & target);
		void			armorReduction(void);
		void 			takeDamage(unsigned int amount);
		void 			beRepaired(unsigned int amount);
		unsigned int	getHitPoints(void) const;
		unsigned int	getMaxHitPoints(void) const;
		unsigned int	getEnergy(void) const;
		unsigned int	getMaxEnergy(void) const;
		unsigned int	getLevel(void) const;
		std::string		getName(void) const;
		unsigned int	getMeleeAttack(void) const;
		unsigned int	getRangedAttack(void) const;
		unsigned int	getLlamaAttack(void) const;
		unsigned int	getBackAttack(void) const;
		unsigned int	getKnifeAttack(void) const;
		unsigned int	getArmorReduction(void) const;
};

#endif 
