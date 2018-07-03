/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 12:28:08 by psprawka          #+#    #+#             */
/*   Updated: 2018/07/02 16:07:07 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
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
std::cout << third << std::endl;
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

void		Bureaucrat::setName(std::string const name) {
	this->_name = name;
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

