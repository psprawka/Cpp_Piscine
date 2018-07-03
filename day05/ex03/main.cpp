/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 12:28:23 by psprawka          #+#    #+#             */
/*   Updated: 2018/07/02 21:32:57 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"

int main(void)
{
	Intern			someRandomIntern;
	Bureaucrat		first(2, "Pola");
	Form			*rrf;
	
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << *rrf << std::endl;
	
	first.signForm(*rrf);
	std::cout << *rrf << std::endl;


	Bureaucrat		second(120, "Nick");
	Form			*rrd, *rrp;
	
	rrd = someRandomIntern.makeForm("presidential pardon", "President");
	rrp = someRandomIntern.makeForm("shrubbery creation", "file");
	std::cout << *rrd << std::endl;
	std::cout << *rrp << std::endl;
	
	second.signForm(*rrf);
	second.signForm(*rrp);
	std::cout << *rrd << std::endl;
	std::cout << *rrp << std::endl;

	Form			*rra;
	
	if ((rra = someRandomIntern.makeForm("no form", "no name")))
		std::cout << "Got THIS invalid form!" << std::endl;
	
	return (0);
}
