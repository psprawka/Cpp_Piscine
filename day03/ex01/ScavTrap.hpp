/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 08:11:57 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/29 12:50:19 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>

class ScavTrap
{
	private:
		unsigned int	_hitpoints;
		unsigned int	_max_hitpoints;
		unsigned int	_energy;
		unsigned int	_max_energy;
		unsigned int	_level;
		std::string 	_name;
		unsigned int	_melee_attack;
		unsigned int	_ranged_attack;
		unsigned int	_llama_attack;
		unsigned int	_back_attack;
		unsigned int	_knife_attack;
		unsigned int	_armor_reduction;

	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &obj);
		~ScavTrap(void);
		ScavTrap &operator=(ScavTrap const &obj);

		void 			Challenge1(void) const;
		void 			Challenge2(void) const;
		void 			Challenge3(void) const;
		void 			Challenge4(void) const;
		void 			Challenge5(void) const;
		void			challengeNewcomer(void) const;
		void 			rangedAttack(std::string const & target);
		void 			meleeAttack(std::string const & target);
		void 			llamaAttack(std::string const & target);
		void 			knifeAttack(std::string const & target);
		void 			backAttack(std::string const & target);
		void 			takeDamage(unsigned int amount);
		void 			beRepaired(unsigned int amount);
		void			armorReduction(void);
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
