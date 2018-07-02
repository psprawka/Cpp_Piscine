/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 15:43:27 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/29 12:57:55 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <time.h> 

int main(void)
{
	FragTrap player("Terence");
	
	std::srand(time(NULL));
	player.knifeAttack("Pola");
	std::cout << "getHitPoints: " << player.getHitPoints() << " | getEnergy: " << player.getEnergy() << std::endl;
	player.backAttack("Pola");
	player.vaulthunter_dot_exe("PolaRandom");
	player.meleeAttack("Pola");
	player.vaulthunter_dot_exe("PolaRandom");
	std::cout << "getHitPoints: " << player.getHitPoints() << " | getEnergy: " << player.getEnergy() << std::endl;
	player.beRepaired(50);
	std::cout << "getHitPoints: " << player.getHitPoints() << " | getEnergy: " << player.getEnergy() << std::endl;
	player.takeDamage(50);
	player.knifeAttack("Pola");
	std::cout << "getHitPoints: " << player.getHitPoints() << " | getEnergy: " << player.getEnergy() << std::endl;
	
	return (0);
}