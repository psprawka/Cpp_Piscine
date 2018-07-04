/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 22:25:42 by psprawka          #+#    #+#             */
/*   Updated: 2018/07/03 13:24:10 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CentralBureaucracy.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"
#include "OfficeBlock.hpp"
#include <iostream>

#define YELLOW			"\x1B[33m"
#define NORMAL			"\x1B[0m"

int		CentralBureaucracy::_nb_targets = 0;
int		CentralBureaucracy::_nb_signers = 0;
int		CentralBureaucracy::_nb_executers = 0;


CentralBureaucracy::CentralBureaucracy(void)
{
	Intern intern;

	for (int i = 0; i < 20; i++)
		this->_blocks[i].setIntern(intern);

}

CentralBureaucracy::CentralBureaucracy(CentralBureaucracy const &obj) {
	*this = obj;
}

CentralBureaucracy::~CentralBureaucracy(void) {}
	

CentralBureaucracy &CentralBureaucracy::operator=(CentralBureaucracy const &obj)
{
	for (int i = 0; i < 20; i++)
	{
		this->_blocks[i].setExecutor(*(obj._blocks[i].getExecutor()));
		this->_blocks[i].setSigner(*(obj._blocks[i].getSigner()));
		this->_target[i] = obj._target[i];
	}
	return (*this);
}



void	CentralBureaucracy::feedSigner(Bureaucrat &obj)
{
	if (this->_nb_signers < 20)
		this->_blocks[this->_nb_signers++].setSigner(obj);
	else
		std::cout << "No more spots for Bureaucrats [feedSigner]." << std::endl;
}

	
void	CentralBureaucracy::feedExecuter(Bureaucrat &obj)
{
	if (this->_nb_executers < 20)
		this->_blocks[this->_nb_executers++].setExecutor(obj);
	else
		std::cout << "No more spots for Bureaucrats [feedSigner]." << std::endl;
}

	
void	CentralBureaucracy::doBureaucracy(void)
{
	std::string interns[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int			random_person = rand () % 20;
	
	if (this->_nb_targets == 0)
		std::cout << "No targets in queue." << std::endl;
	
	for (int i = 0; i < this->_nb_targets; i++)
	{
		if (!this->_blocks[random_person].getExecutor() || !this->_blocks[random_person].getSigner())
			std::cout << "No worker in the office for \"" <<  this->_target[i] << "\".\n\n";
		else
		{
			std::cout << YELLOW;
			this->_blocks[random_person].doBureaucracy(interns[rand () % 3], this->_target[i]);
			std::cout << NORMAL << std::endl;
		}
		random_person = rand () % 20;
	}
}
	
void	CentralBureaucracy::queueUp(std::string target)
{
	if (this->_nb_targets < 20)
		this->_target[this->_nb_targets++] = target;
	else
		std::cout << "No more targets allowed to queueUp." << std::endl;
}
	
