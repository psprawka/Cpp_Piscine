/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 20:06:35 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/30 09:53:11 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include <iostream> 

/*
** ----------------------------- FUNCTIONS --------------------------------------
*/
std::string		Victim::getName(void) const
{
	return (this->_name);
}

void			Victim::introduce(void) const
{
	std::cout << "I\'m " << this->_name << " and I like otters!" << std::endl;
}

void			Victim::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a cute little sheep!" <<std::endl;
	//
	///
	///
	//
	//
}

/*
** ----------------------------- OPERATORS -------------------------------------
*/
std::ostream	&operator<<(std::ostream &os, Victim const &obj)
{
	obj.introduce();
	return (os);
}

Victim		&Victim::operator=(Victim const &obj)
{
	this->_name = obj.getName();
	return (*this);
}

/*
** -------------------------- CANONICAL MODE -----------------------------------
*/
Victim::Victim(void)
{
	std::cout << "Void constructor not allowed." << std::endl;
}

Victim::Victim(std::string name): _name(name)
{
	std::cout << "Some random victim called "<< name << " just popped!" << std::endl;
}

Victim::Victim(Victim const &obj)
{
	*this = obj;
	std::cout << "Some random victim called "<< this->_name << " just popped!" << std::endl;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}


