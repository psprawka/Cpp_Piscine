/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 12:28:23 by psprawka          #+#    #+#             */
/*   Updated: 2018/07/03 22:36:31 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
	PresidentialPardonForm	form_one("President");
	ShrubberyCreationForm	form_two("tree");
	RobotomyRequestForm		form_three("robot");

	Bureaucrat first(120, "Pola");
	first.signForm(form_one);
	std::cout << form_one << std::endl;
	first.signForm(form_two);
	std::cout << form_two << std::endl;
	first.executeForm(form_two);
	
	Bureaucrat third(2, "Terence");
	std::cout << third << std::endl;
	third.signForm(form_one);
	std::cout << form_one << std::endl;
	std::cout << third << std::endl;
	third.signForm(form_one);
	third.executeForm(form_one);
	
	std::cout << std::endl << "* executing form 3 *" << std::endl;
	first.executeForm(form_three);
	return (0);
}
