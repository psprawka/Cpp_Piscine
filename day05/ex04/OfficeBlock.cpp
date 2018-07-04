/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 21:34:07 by psprawka          #+#    #+#             */
/*   Updated: 2018/07/03 23:19:11 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"
#include "OfficeBlock.hpp"
#include <iostream>

/* -------------------------- CANONICAL MODE --------------------------------*/

OfficeBlock::OfficeBlock(OfficeBlock const &) {}
OfficeBlock &OfficeBlock::operator=(OfficeBlock const &) {
	return (*this);
}

OfficeBlock::OfficeBlock(void): _intern(NULL), _signer(NULL), _executer(NULL) {}
OfficeBlock::OfficeBlock(Intern &intern, Bureaucrat &signer, Bureaucrat &executer): _intern(&intern), _signer(&signer), _executer(&executer) {}
OfficeBlock::~OfficeBlock(void) {}


/* ------------------------------ GETTERS -----------------------------------*/

Intern			*OfficeBlock::getIntern(void) const {
	return (this->_intern);
}

Bureaucrat		*OfficeBlock::getSigner(void) const {
	return (this->_signer);
}

Bureaucrat		*OfficeBlock::getExecutor(void) const {
	return (this->_executer);
}

/* ------------------------------ SETTERS -----------------------------------*/

void	OfficeBlock::setIntern(Intern &intern) {
	this->_intern = &intern;
}

void	OfficeBlock::setSigner(Bureaucrat &signer) {
	this->_signer = &signer;
}

void	OfficeBlock::setExecutor(Bureaucrat &executer) {
	this->_executer = &executer;
}


/* ----------------------------- FUNCTIONS ----------------------------------*/

void	OfficeBlock::doBureaucracy(std::string form, std::string target)
{
	Form *form_one;
	
	if (!this->_intern || !this->_executer || !this->_signer)
	{
		std::cout << "Error occured: office block not ready to doBureaucracy."  << std::endl;
		return ;
	}
	
	try
	{
		if ((form_one = this->_intern->makeForm(form, target)))
		{
			_signer->signForm(*form_one);
			_executer->executeForm(*form_one);
		}
		else
			throw Intern::NoForm();
	}
	catch (std::exception &e)
	{
		std::cout << "Error occured: " << e.what() << std::endl;
	}
}