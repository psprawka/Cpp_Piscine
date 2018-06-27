/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 09:53:19 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/26 23:53:16 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"
#include "ClassPhonebook.hpp"


char	*ft_str_to_char(std::string str, size_t len)
{
	char *res = new char[len + 1];
	
	std::strcpy (res, str.c_str());
	return (res);
}


int		main(void)
{
	ClassPhonebook	phonebook;
	std::string		get_buffer;
	char			*buff = NULL;

	while (std::cin.good())
	{
		std::cout << YELLOW << "Waiting for a command... (ADD, SEARCH OR EXIT)\n" << NORMAL;
		std::cin >> get_buffer;
		buff = ft_str_to_char(get_buffer, get_buffer.length());
		
		if (!strcmp(buff, "ADD"))
			phonebook.add();
		else if (!strcmp(buff, "SEARCH"))
			phonebook.search();
		else if (!strcmp(buff, "EXIT"))
			break ;
	}
	
	return(EXIT_SUCCESS);
}
