/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 09:33:58 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/26 13:07:04 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

# define NORMAL			"\x1B[0m"
# define PINK			"\033[38;5;200m"
# define ORANGE			"\033[38;5;208m"

void	Zombie::announce(void)
{
	std::cout << PINK << "Zombie " << _name << " from " << _type << ": Braiiiiiiinnnssss..." << NORMAL << std::endl;
}


Zombie::Zombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
}

Zombie::Zombie(void)
{
	std::string names[] = {"Mami", "Nick", "Terence", "Pola", "Janek", "Iga",
		"Gaetan", "Meo", "Leo", "Kwame"};
	std::string types[] = {"cadets", "pisciners", "staff", "starfleeters"};

	this->_name = names[std::rand() % 10];
	this->_type = types[std::rand() % 4];
}


Zombie::~Zombie(void)
{
	std::cout << ORANGE << "Zombie " << _name << " from " << _type << " has died :((" << NORMAL << std::endl;
}
