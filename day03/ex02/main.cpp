/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 15:43:27 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/29 09:14:17 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <time.h> 

int main(void)
{
	FragTrap player("Charlie");
	
	std::srand(time(NULL));
	player.knifeAttack("MyTargetTest");
	player.getEnergy();
	player.backAttack("MyTargetTest");
	player.vaulthunter_dot_exe("MyTargetTestRandomAttack");
	player.meleeAttack("MyTargetTest");
	player.vaulthunter_dot_exe("MyTargetTestRandomAttack");
	player.getEnergy();
	player.beRepaired(50);
	player.getHitPoints();
	player.getEnergy();
	player.takeDamage(50);
	player.getHitPoints();
	std::cout << std::endl;

	ScavTrap player2("Terence");
	
	player2.challengeNewcomer();
	player2.getLevel();
	player2.challengeNewcomer();
	player2.Challenge1();
	player2.armorReduction();
	player2.knifeAttack("Pola");
	player2.meleeAttack("Pola");
	return (0);
}