/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 09:34:26 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/26 11:24:51 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <iostream>

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;	
}
	
Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name, this->_type);				//heap
	zombie->announce();
	return (zombie);
}
	
void	ZombieEvent::randomChump(void)
{
	std::string names[] = {"Mami", "Nick", "Terence", "Pola", "Janek", "Iga",
		"Gaetan", "Meo", "Leo", "Kwame"};

	Zombie zombie(names[std::rand() % 10], this->_type);			//stack
	zombie.announce();
}
