/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 12:28:23 by psprawka          #+#    #+#             */
/*   Updated: 2018/07/03 23:16:24 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"
#include "OfficeBlock.hpp"

int main(void)
{
	Intern idiotOne;
	Bureaucrat hermes = Bureaucrat("Hermes Conrad", 37);
	Bureaucrat bob = Bureaucrat("Bobby Bobson", 123);
	
	OfficeBlock ob2;
	ob2.setIntern(idiotOne);
	ob2.setSigner(bob);
	ob2.setExecutor(hermes);
	
	try
	{
		ob2.doBureaucracy("presidential pardon", "Pigley");
	}
	catch (std::exception & e)
	{
		;//do nothing because eveything is catched inside
	}
	
	Bureaucrat  Arta("Arta Rose", 20);
	Bureaucrat  Lydeka("Lydeka White", 100);

	Intern	whocares;
	OfficeBlock ob;

	ob.setSigner(Arta);
	// ob.setExecutor(Lydeka);
	ob.setIntern(whocares);
	ob.doBureaucracy("shrubbery creation", "Bushes");
	return (0);
}
