/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 20:34:14 by psprawka          #+#    #+#             */
/*   Updated: 2018/07/03 23:09:30 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"


Intern::Intern(void) {}

Intern::Intern(Intern const &obj) {
	*this = obj;
}

Intern &Intern::operator=(Intern const &obj) {
	(void)obj;
	return (*this);
}

Intern::~Intern(void) {}

const char		*Intern::NoForm::what() const throw() {
	return ("No forms found."); 
}

Form	*Intern::makeForm(std::string form_name, std::string target)
{
	if (form_name == "shrubbery creation")
	{
		std::cout << "Intern creates " << form_name << std::endl;
		return (new ShrubberyCreationForm(target));
	}
	else if (form_name == "robotomy request")
	{
		std::cout << "Intern creates " << form_name << std::endl;
		return (new RobotomyRequestForm(target));
	}
	else if (form_name == "presidential pardon")
	{
		std::cout << "Intern creates " << form_name << std::endl;
		return (new PresidentialPardonForm(target));
	}
	
	throw Intern::NoForm();
	return (NULL);
}

Intern::NoForm::NoForm(void) {}
Intern::NoForm::NoForm(NoForm const &) {}
Intern::NoForm &Intern::NoForm::operator=(NoForm const &) {return (*this);}
Intern::NoForm::~NoForm(void) throw() {}
