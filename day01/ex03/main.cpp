/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 09:34:41 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/26 13:29:11 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <iostream>

int main(void)
{
	std::srand(std::time(0));
	
	std::cout << "\nHorde1:\n";
	ZombieHorde horde1(10);
	horde1.announce();
	
	std::cout << "\nHorde2:\n";
	ZombieHorde horde2(2);
	horde2.announce();
	std::cout << "\n";
	
	std::cout << "Destructor will be launched automatically...\n";
	return(0);
}