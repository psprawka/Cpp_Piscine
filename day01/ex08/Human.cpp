/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 00:23:35 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/27 01:23:04 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <iostream>

void Human::meleeAttack(std::string const &target)
{
	std::cout << "MeleeAttack on target: " << target << std::endl;
}

void Human::rangedAttack(std::string const &target)
{
	std::cout << "RangedAttack on target: " << target << std::endl;
}
		
void Human::intimidatingShout(std::string const &target)
{
	std::cout << "IntimidatingShout on target: " << target << std::endl;			
}

void Human::action(std::string const &action_name, std::string const &target)
{
	typedef void	(Human::*HumanActions)(std::string const &target);	// HumanActions points to a member of Human that takes (std::string const)
	HumanActions	actions[3] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout}; //Create an array of functions from Human class 
	std::string		names[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
	
	for (int i = 0; i < 3; i++)
	{
		if (names[i] == action_name)
			(this->*actions[i])(target);
	}
}