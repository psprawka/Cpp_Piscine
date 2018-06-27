/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 09:34:41 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/26 11:36:56 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>

int main(void)
{
	ZombieEvent stack_zombies[4];
	std::cout << "Stack zombies: " << std::endl;
	stack_zombies[0].setZombieType("cadets");
	stack_zombies[1].setZombieType("starfleeters");
	stack_zombies[2].setZombieType("pisciners");
	stack_zombies[3].setZombieType("staff");

	std::srand(std::time(0));
	for (int i = 0; i < 4; i++)
	{
		stack_zombies[i].randomChump();
		std::cout << std::endl;
	}

	Zombie *heap_zombies[4];

	std::cout << "Heap creation loop: " << std::endl;
	for (int i = 0; i < 4; i++)
		heap_zombies[i] = stack_zombies[i].newZombie("HeapPola");

	std::cout << std::endl << "Heap suecidal loop: " << std::endl;
	for (int i = 0; i < 4; i++)
		delete heap_zombies[i];

}