/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 20:05:53 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/30 09:57:38 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include <iostream> 

/*
** --------------------------------- GET ---------------------------------------
*/
std::string		Sorcerer::getName(void) const
{
	return (this->_name);
}

std::string		Sorcerer::getTitle(void) const
{
	return (this->_title);
}

void			Sorcerer::introduce(void) const
{
	std::cout << "I\'m " << this->_name << ", " << this->_title << " and I like ponies!" << std::endl;
}

void			Sorcerer::polymorph(Victim const &obj) const
{
	obj.getPolymorphed();
}

/*
** ----------------------------- OPERATORS -------------------------------------
*/
std::ostream	&operator<<(std::ostream &os, Sorcerer const &obj)
{
	obj.introduce();
	return (os);
}

Sorcerer		&Sorcerer::operator=(Sorcerer const &obj)
{
	this->_name = obj.getName();
	this->_title = obj.getTitle();
	return (*this);
}

/*
** -------------------------- CANONICAL MODE -----------------------------------
*/
Sorcerer::Sorcerer(void)
{
	std::cout << "Void constructor not allowed." << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title): _name(name), _title(title)
{
	std::cout << name << ", " << title << " is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &obj)
{
	*this = obj;
	std::cout << this->_name << ", " << this->_title << " is born!" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->_name << ", " << this->_title << " is dead! Consequences will never be the same!" << std::endl;
}

