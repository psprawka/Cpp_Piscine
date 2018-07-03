/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 16:41:29 by psprawka          #+#    #+#             */
/*   Updated: 2018/07/02 20:17:37 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include <iostream>


/* --------------------------- CANONICAL MODE --------------------------------*/

PresidentialPardonForm::PresidentialPardonForm(void): Form("NoName", 25, 5), _target("NoTarget") {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj): Form(obj) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardon", 25, 5), _target(target) {}

PresidentialPardonForm::~PresidentialPardonForm(void) {}


/* ----------------------------- OPERATORS ---------------------------------*/

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &obj) {
	(void)obj;
	return (*this);	
}


/* ------------------------------ GETTERS ----------------------------------*/

std::string		PresidentialPardonForm::getTarget(void) const {
	return (this->_target);
}

/* ----------------------------- FUNCTIONS ----------------------------------*/

void			PresidentialPardonForm::action(void) const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
