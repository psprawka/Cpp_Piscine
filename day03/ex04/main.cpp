/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 15:43:27 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/29 17:36:17 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <iostream>
#include <time.h> 

int main(void)
{
	// FragTrap	player("Nick");
	// ScavTrap	player2("Terence");
	// NinjaTrap	player3("Pola");
	// ClapTrap	player4("Gaetan");
	// NinjaTrap	bobo;
	
	// bobo.ninjaShoebox(player);
	// bobo.ninjaShoebox(player2);
	// bobo.ninjaShoebox(player3);
	// bobo.ninjaShoebox(player4);

	SuperTrap playerx("Super");

	std::cout << "name: " << playerx.getName() << "\nhp: " << playerx.getHitPoints() << "\nmax hp: " << playerx.getMaxHitPoints() <<
		"\nep: " << playerx.getEnergy() << "\nmax ep: " << playerx.getMaxEnergy() << std::endl;

	playerx.rangedAttack("Polcia");
	playerx.meleeAttack("Polcia");
	
	return (0);
}