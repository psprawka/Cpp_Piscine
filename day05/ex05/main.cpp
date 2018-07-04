/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 12:28:23 by psprawka          #+#    #+#             */
/*   Updated: 2018/07/03 13:20:44 by psprawka         ###   ########.fr       */
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
#include "CentralBureaucracy.hpp"

//tests form mlu's github
int main(void)
{
	CentralBureaucracy	cb;
	std::cout << "** Made central Bureaucracy **" << std::endl;
	srand(time(NULL));

	try
	{
		std::cout << std::endl << "** Making Bureaucracy do stuff, but nothing should happen due to lack of executer, signer and target **" << std::endl;
		cb.doBureaucracy();

		std::cout << std::endl << "** Generating 18 signers **" << std::endl;
		cb.feedSigner(*new Bureaucrat("Arta", 1));
		cb.feedSigner(*new Bureaucrat("Bella", 10));
		cb.feedSigner(*new Bureaucrat("Caddie", 25));
		cb.feedSigner(*new Bureaucrat("Diana", 45));
		cb.feedSigner(*new Bureaucrat("Eve", 80));
		cb.feedSigner(*new Bureaucrat("Leo", 120));
		cb.feedSigner(*new Bureaucrat("Meow", 1));
		cb.feedSigner(*new Bureaucrat("Meo", 10));
		cb.feedSigner(*new Bureaucrat("Gaetan", 25));
		cb.feedSigner(*new Bureaucrat("Jamie", 45));
		cb.feedSigner(*new Bureaucrat("Eileen", 80));
		cb.feedSigner(*new Bureaucrat("Logan", 120));
		cb.feedSigner(*new Bureaucrat("Eliot", 1));
		cb.feedSigner(*new Bureaucrat("Stephen", 10));
		cb.feedSigner(*new Bureaucrat("Hiroshi", 25));
		cb.feedSigner(*new Bureaucrat("Nik", 45));
		cb.feedSigner(*new Bureaucrat("Josh", 80));
		cb.feedSigner(*new Bureaucrat("Jenn", 120));

		std::cout << std::endl << "** Making Bureaucracy do stuff, but nothing should happen due to lack of executer and target **" << std::endl;
		cb.doBureaucracy();

		std::cout << std::endl << "** Generating 16 executer **" << std::endl;
		cb.feedExecuter(*new Bureaucrat("Lydeka", 1));
		cb.feedExecuter(*new Bureaucrat("Mikaela", 20));
		cb.feedExecuter(*new Bureaucrat("Ninian", 60));
		cb.feedExecuter(*new Bureaucrat("Onna", 140));
		cb.feedExecuter(*new Bureaucrat("David", 1));
		cb.feedExecuter(*new Bureaucrat("Pola", 20));
		cb.feedExecuter(*new Bureaucrat("Terence", 60));
		cb.feedExecuter(*new Bureaucrat("Nick", 110));
		cb.feedExecuter(*new Bureaucrat("Mike", 1));
		cb.feedExecuter(*new Bureaucrat("Bozydar", 20));
		cb.feedExecuter(*new Bureaucrat("Alex", 60));
		cb.feedExecuter(*new Bureaucrat("Adam", 110));
		cb.feedExecuter(*new Bureaucrat("Chris", 1));
		cb.feedExecuter(*new Bureaucrat("Chase", 20));
		cb.feedExecuter(*new Bureaucrat("Maya", 60));
		cb.feedExecuter(*new Bureaucrat("Joey", 110));

		std::cout << std::endl << "** Making Bureaucracy do stuff, but nothing should happen due to lack targets **" << std::endl;
		cb.doBureaucracy();

		std::cout << std::endl << "** Generating 26 targets **" << std::endl;
		cb.queueUp("Apple");
		cb.queueUp("Banana");
		cb.queueUp("Carrot");
		cb.queueUp("Daikon");
		cb.queueUp("Elephant");
		cb.queueUp("Frost");
		cb.queueUp("Giant");
		cb.queueUp("Hill");
		cb.queueUp("Igloo");
		cb.queueUp("Jack");
		cb.queueUp("Kangaroo");
		cb.queueUp("Lamp");
		cb.queueUp("Michael");
		cb.queueUp("Niagra");
		cb.queueUp("Ostrich");
		cb.queueUp("Platypus");
		cb.queueUp("Quilt");
		cb.queueUp("Razor");
		cb.queueUp("Sand");
		cb.queueUp("Time");
		cb.queueUp("Uvula");
		cb.queueUp("Vuvuzuela");
		cb.queueUp("Walrus");
		cb.queueUp("Xylophone");
		cb.queueUp("Young");
		cb.queueUp("Zebra");

		std::cout << std::endl << "** Making Bureaucracy do stuff, watch the magic! **" << std::endl;
		cb.doBureaucracy();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	return (0);
}
