/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhonebook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 13:25:34 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/25 16:58:38 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void	ClassPhonebook::add(void)
{
	if (contacts_nb > 7)
	{
		std::cout << RED << "No more slots available in your phonebook!\n" << NORMAL;
		return ;
	}
	ClassContact newcontact;
	newcontact.add_contact();
	contacts[contacts_nb++] = newcontact;
}
		
		
void	ClassPhonebook::search(void)
{
	short desired_inxed;
	
	std::cout << "| " << std::setw(10) << "INDEX" << " | " << std::setw(10) << "FIRST NAME"
		<< " | " << std::setw(10) << "LAST NAME" << " | " << std::setw(10) << "NICKNAME" << " |"<< std::endl;
	std::cout << "------------------------------------------------------\n"; 	
	
	for (int i = 0; i < contacts_nb; i++)
	{
		std::cout << "| " << std::setw(10) << i + 1 << " | ";
		contacts[i].display_contact();
		std::cout << std::endl;
	}
	std::cout << "What index's information would you like to see?\n";
	std::cin >> desired_inxed;
	
	if (std::cin.fail() || desired_inxed > contacts_nb)
	{
		std::cout << "Invalid index\n";
		return ;
	}
	contacts[desired_inxed - 1].display_contact_details();
}	


ClassPhonebook::ClassPhonebook(void)
{
	std::cout << GREEN << "Phonebook created!\n" << NORMAL;
}

	
ClassPhonebook::~ClassPhonebook(void)
{
	std::cout << RED << "Phonebook destroyed!\n" << NORMAL;
}
