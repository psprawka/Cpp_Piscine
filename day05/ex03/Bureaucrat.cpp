/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 12:28:08 by psprawka          #+#    #+#             */
/*   Updated: 2018/07/03 22:44:20 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

/* --------------------------- CANONICAL MODE --------------------------------*/

Bureaucrat::Bureaucrat(void): _grade(0) ,_name("NoName") {}

Bureaucrat::Bureaucrat(int grade, std::string const name): _name(name)
{
	try
	{
		if (grade > 150)
			throw	Bureaucrat::GradeTooLowException();
		else if (grade < 1)
			throw	Bureaucrat::GradeTooHighException();
		else
			this->_grade = grade;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
		this->_grade = 0;
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj) {
	*this = obj;
}

Bureaucrat::~Bureaucrat(void) {}


/* ----------------------------- OPERATORS ---------------------------------*/

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &obj)
{
	this->_grade = obj.getGrade();
	return (*this);
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (os);
}


/* ------------------------------ GETTERS ----------------------------------*/

int					Bureaucrat::getGrade(void) const {
	return (this->_grade);
}

std::string const	Bureaucrat::getName(void) const {
	return (this->_name);
}


/* ------------------------------ SETTERS ----------------------------------*/

void		Bureaucrat::setGrade(int grade)
{
	try
	{
		if (grade > 150)
			throw	Bureaucrat::GradeTooLowException();
		else if (grade < 1)
			throw	Bureaucrat::GradeTooHighException();
		else
			this->_grade = grade;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

/* ----------------------------- FUNCTIONS ----------------------------------*/

const char		*Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade too low."); 
}

const char		*Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade too high."); 
}

void		Bureaucrat::gradeIncrement(void)
{
	try
	{
		if (this->_grade - 1 < 1)
			throw	Bureaucrat::GradeTooHighException();
		else
			this->_grade--;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

void		Bureaucrat::gradeDecrement(void)
{
	try
	{
		if (this->_grade + 1 > 150)
			throw	Bureaucrat::GradeTooLowException();
		else
			this->_grade++;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

void		Bureaucrat::signForm(Form &obj)
{
	std::string msg = obj.beSigned(*this);
	
	if (msg == "signed")
		std::cout << this->_name << " signs " << obj.getName() << std::endl;
	else
		std::cout << this->_name << " cannot sign " << obj.getName() << " because " 
			<< msg << std::endl;
}

void		Bureaucrat::executeForm(Form const &form)
{
	if (form.execute(*this))
		std::cout << this->_name << " executes " << form.getName() << std::endl;
	
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void) {}
Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &) {}
Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &) {return (*this);}
Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {}


Bureaucrat::GradeTooHighException::GradeTooHighException(void) {}
Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &) {}
Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &) {return (*this);}
Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() {}