/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 20:06:57 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/30 09:55:03 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include <iostream> 

/*
** -------------------------------- FUNC ---------------------------------------
*/
void			Peon::introduce(void) const
{
	std::cout << "I\'m " << this->_name << " and I like otters!" << std::endl;
}

void			Peon::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}

/*
** ----------------------------- OPERATORS -------------------------------------
*/
std::ostream	&operator<<(std::ostream &os, Peon const &obj)
{
	obj.introduce();
	return (os);
}

Peon		&Peon::operator=(Peon const &obj)
{
	this->_name = obj.getName();
	return (*this);
}

/*
** -------------------------- CANONICAL MODE -----------------------------------
*/
Peon::Peon(void)
{
	std::cout << "Void constructor not allowed." << std::endl;
}

Peon::Peon(std::string name): Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &obj)
{
	*this = obj;
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}



