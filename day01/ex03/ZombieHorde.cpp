/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 11:46:57 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/26 13:27:04 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

void ZombieHorde::announce(void)
{
	for (int i = 0; i < this->_zombies_nb; i++)
		this->_zombies[i].announce();
}

ZombieHorde::ZombieHorde(int n)
{
	this->_zombies = new Zombie[n];
	this->_zombies_nb = n;
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] this->_zombies;
}