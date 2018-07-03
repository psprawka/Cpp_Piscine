/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 16:41:49 by psprawka          #+#    #+#             */
/*   Updated: 2018/07/02 20:17:45 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include <iostream>


/* --------------------------- CANONICAL MODE --------------------------------*/

RobotomyRequestForm::RobotomyRequestForm(void): Form("NoName", 72, 45), _target("NoTarget") {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj): Form(obj) {}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequest", 72, 45), _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm(void) {}


/* ----------------------------- OPERATORS ---------------------------------*/

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &obj) {
	(void)obj;
	return (*this);	
}


/* ------------------------------ GETTERS ----------------------------------*/

std::string		RobotomyRequestForm::getTarget(void) const {
	return (this->_target);
}

/* ----------------------------- FUNCTIONS ----------------------------------*/

void			RobotomyRequestForm::action(void) const
{
	std::cout << "* drilling noises *" << std::endl;
	
	if ((rand() % 2))
		std::cout << this->_target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "Failure robotomizing " << this->_target << std::endl;
}
