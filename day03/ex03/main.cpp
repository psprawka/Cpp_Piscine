/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 15:43:27 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/29 14:44:52 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>
#include <time.h> 

int main(void)
{
	FragTrap	player("Nick");
	ScavTrap	player2("Terence");
	NinjaTrap	player3("Pola");
	ClapTrap	player4("Gaetan");
	NinjaTrap	bobo;
	
	bobo.ninjaShoebox(player);
	bobo.ninjaShoebox(player2);
	bobo.ninjaShoebox(player3);
	bobo.ninjaShoebox(player4);
	return (0);
}