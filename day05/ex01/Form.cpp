/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 14:10:37 by psprawka          #+#    #+#             */
/*   Updated: 2018/07/03 22:25:37 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

/* --------------------------- CANONICAL MODE --------------------------------*/

Form::Form(void): _is_signed(false), _name("Empty"), _sgrade(0), _egrade(0) {}

Form::Form(std::string name, int sgrade, int egrade): _is_signed(false), _name(name), _sgrade(sgrade), _egrade(egrade)
{
	try
	{
		if (sgrade > 150 || egrade > 150)
			throw	Form::GradeTooLowException();
		else if (sgrade < 1 || egrade < 1)
			throw	Form::GradeTooHighException();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

Form::Form(Form const &obj): _is_signed(false), _name(obj._name), _sgrade(obj._sgrade), _egrade(obj._egrade) {
	*this = obj;
}

Form::~Form(void) {}


/* ----------------------------- OPERATORS ---------------------------------*/

Form &Form::operator=(Form const &obj)
{
	this->_is_signed = obj.getIsSigned();
	return (*this);
}

std::ostream &operator<<(std::ostream &os, Form const &obj)
{
	os << obj.getName() << ", sign grade: " << obj.getSgrade() << ", execute grade: "
		<< obj.getEgrade() << ", signed: " << (obj.getIsSigned() == true ? "yes" : "no")
		<< std::endl;
	
	return (os);
}


/* ------------------------------ GETTERS ----------------------------------*/

int					Form::getSgrade(void) const {
	return (this->_sgrade);
}

int					Form::getEgrade(void) const {
	return (this->_egrade);
}

std::string const	Form::getName(void) const {
	return (this->_name);
}

bool				Form::getIsSigned(void) const {
	return (this->_is_signed);
}


/* ----------------------------- FUNCTIONS ----------------------------------*/

const char		*Form::GradeTooLowException::what() const throw() {
	return ("Grade too low."); 
}

const char		*Form::GradeTooHighException::what() const throw() {
	return ("Grade too high."); 
}

std::string		Form::beSigned(Bureaucrat &obj) 
{
	
	try
	{
		if (obj.getGrade() > this->_sgrade)
			throw Form::GradeTooLowException();
		else if (this->_is_signed == true)
			return ("Form already signed");
		else
			this->_is_signed = true;
	}
	catch (std::exception &e)
	{
		return (e.what());
	}
	return ("signed");
}

Form::GradeTooLowException::GradeTooLowException(void) {}
Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const &) {}
Form::GradeTooLowException &Form::GradeTooLowException::operator=(GradeTooLowException const &) {return (*this);}
Form::GradeTooLowException::~GradeTooLowException(void) throw() {}


Form::GradeTooHighException::GradeTooHighException(void) {}
Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const &) {}
Form::GradeTooHighException &Form::GradeTooHighException::operator=(GradeTooHighException const &) {return (*this);}
Form::GradeTooHighException::~GradeTooHighException(void) throw() {}