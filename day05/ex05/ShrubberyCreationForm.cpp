/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 16:41:00 by psprawka          #+#    #+#             */
/*   Updated: 2018/07/02 20:26:10 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include <fstream>
#include <iostream>


/* --------------------------- CANONICAL MODE --------------------------------*/

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("NoName", 142, 137), _target("NoTarget") {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj): Form(obj) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreation", 142, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}


/* ----------------------------- OPERATORS ---------------------------------*/

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj) {
	// *this = obj;
	// if (this != &rhs)
	// 	return *this;
	(void)obj;
	return (*this);	
}


/* ------------------------------ GETTERS ----------------------------------*/

std::string		ShrubberyCreationForm::getTarget(void) const {
	return (this->_target);
}

/* ----------------------------- FUNCTIONS ----------------------------------*/

void			ShrubberyCreationForm::action(void) const
{
	std::string		name = this->_target + "_shrubbery";
	std::ofstream	myfile;

	myfile.open(name);
	
	myfile <<  "        __ _.--..--._ _\n     .-\' _/   _/\\_   \\_\'-.\n    |__ /   _/\\__/\\_  \\__|\n       |___/\\_\\__/  \\___|\n              \\__/\n              \\__/\n               \\__/\n                \\__/\n             ____\\__/___\n       . - \'             \' -.\n      /                      \\\n";
	myfile.close();
}