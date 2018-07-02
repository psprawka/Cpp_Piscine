/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 15:43:27 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/29 12:58:57 by psprawka         ###   ########.fr       */
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
	std::cout << "getHitPoints: " << player.getHitPoints() << " | getEnergy: " << player.getEnergy() << std::endl;
	player.backAttack("MyTargetTest");
	player.vaulthunter_dot_exe("MyTargetTestRandomAttack");
	player.meleeAttack("MyTargetTest");
	player.vaulthunter_dot_exe("MyTargetTestRandomAttack");
	std::cout << "getHitPoints: " << player.getHitPoints() << " | getEnergy: " << player.getEnergy() << std::endl;
	player.beRepaired(50);
	std::cout << "getHitPoints: " << player.getHitPoints() << " | getEnergy: " << player.getEnergy() << std::endl;
	player.takeDamage(50);
	std::cout << "getHitPoints: " << player.getHitPoints() << " | getEnergy: " << player.getEnergy() << std::endl;
	std::cout << std::endl;

	ScavTrap player2("Terence");
	
	player2.challengeNewcomer();
	std::cout << "getHitPoints: " << player.getHitPoints() << " | getEnergy: " << player.getEnergy() << std::endl;
	player2.challengeNewcomer();
	player2.Challenge1();
	player2.armorReduction();
	player2.knifeAttack("Pola");
	player2.meleeAttack("Pola");
	return (0);
}