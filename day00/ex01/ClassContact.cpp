/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 13:25:22 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/25 16:57:21 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void	ClassContact::add_contact(void)
{
	std::cout << "First name: ";
	std::cin >> first_name;
	std::cin.clear(); 
	std::cin.ignore(std::numeric_limits < std::streamsize > ::max(), '\n');
	std::cout << "Last name: ";
	std::cin >> last_name;
	std::cin.clear(); 
	std::cin.ignore(std::numeric_limits < std::streamsize > ::max(), '\n');
	std::cout << "Nickname: ";
	std::cin >> nickname;
	std::cin.clear(); 
	std::cin.ignore(std::numeric_limits < std::streamsize > ::max(), '\n');
	std::cout << "Login: ";
	std::cin >> login;
	std::cin.clear(); 
	std::cin.ignore(std::numeric_limits < std::streamsize > ::max(), '\n');
	std::cout << "Postal address: ";
	std::cin >> postal_address;
	std::cin.clear(); 
	std::cin.ignore(std::numeric_limits < std::streamsize > ::max(), '\n');
	std::cout << "Email_address: ";
	std::cin >> email_address;
	std::cin.clear(); 
	std::cin.ignore(std::numeric_limits < std::streamsize > ::max(), '\n');
	for (;;)
	{
		std::cout << "Phone number: ";
		std::cin >> phone_number;
		if (!std::cin.fail() && phone_number < 10000000000 && phone_number > 9999999)
			break ;
		std::cout << "Incorrect phone number\n";
		std::cin.clear(); 
		std::cin.ignore(std::numeric_limits < std::streamsize > ::max(), '\n');
	}
	std::cin.clear(); 
	std::cin.ignore(std::numeric_limits < std::streamsize > ::max(), '\n');
	for (;;)
	{
		std::cout << "Birthday (mm/dd/yyyy): ";
		std::cin >> std::get_time(&birthday_date, "%D");
		if (!std::cin.fail())
			break ;
		std::cout << "Incorrect birthdate\n";
		std::cin.clear(); 
		std::cin.ignore(std::numeric_limits < std::streamsize > ::max(), '\n');
	}
	std::cin.clear(); 
	std::cin.ignore(std::numeric_limits < std::streamsize > ::max(), '\n');
	std::cout << "Favorite meal: ";
	std::cin >> favorite_meal;
	std::cin.clear(); 
	std::cin.ignore(std::numeric_limits < std::streamsize > ::max(), '\n');
	std::cout << "Underwear color: ";
	std::cin >> underwear_color;
	std::cin.clear(); 
	std::cin.ignore(std::numeric_limits < std::streamsize > ::max(), '\n');
	std::cout << "Darkest_secret: ";
	std::cin >> darkest_secret;
	std::cin.clear(); 
	std::cin.ignore(std::numeric_limits < std::streamsize > ::max(), '\n');
	std::cout << GREEN << "Contact added!\n\n" << NORMAL;
}


std::string trunc_10(std::string str)
{
	char copy[11];

	if (str.length() > 10)
	{
  		str.copy(copy, 10, 0);
  		copy[9] = '.';
		copy[10] = '\0';
		return (copy);	
	}
	return (ft_str_to_char(str, str.length()));
}

void	ClassContact::display_contact(void)
{
	std::cout << std::setw(10) << trunc_10(first_name) << " | " << std::setw(10) <<
		trunc_10(last_name) << " | " << std::setw(10) << trunc_10(nickname) << " |";
}

void	ClassContact::display_contact_details(void)
{
	std::cout << "first name: " << CYAN << first_name << NORMAL << std::endl;
	std::cout << "last name: " << CYAN << last_name << NORMAL << std::endl;
	std::cout << "nickname: " << CYAN << nickname << NORMAL << std::endl;
	std::cout << "login: " << CYAN << login<< NORMAL << std::endl;
	std::cout << "postal address: " << CYAN << postal_address << NORMAL << std::endl;
	std::cout << "email address: " << CYAN << email_address << NORMAL << std::endl;
	std::cout << "phone number: " << CYAN << phone_number << NORMAL << std::endl;
	std::cout << "birthday: " << CYAN << birthday_date.tm_mon << "/" << birthday_date.tm_mday << "/" << birthday_date.tm_year << NORMAL << "\n";
	std::cout << "favorite meal: " << CYAN << favorite_meal << NORMAL << std::endl;
	std::cout << "underwear color: " << CYAN << underwear_color << NORMAL << std::endl;
	std::cout << "darkest secret: " << CYAN << darkest_secret << NORMAL << std::endl;
}