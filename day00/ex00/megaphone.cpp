/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 07:18:03 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/26 23:23:27 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

std::string	ft_strtrim(std::string str)
{
	str = str.substr(str.find_first_not_of("\t \v"));
	str = str.substr(0, str.find_last_not_of("\t \v") + 1);
	return (str);
}

std::string	ft_toupper_string(std::string str)
{
	for (int i = 0 ; str[i] ; ++i)
		str[i] = toupper(str[i]);
	return (str);
}

char	*ft_str_to_char(std::string str, size_t len)
{
	char *res = new char[len + 1];
	
	std::strcpy (res, str.c_str());
	return (res);
}

int		main(int ac, char **av)
{
	std::string	result;
	char 		*cresult;
	
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else for (int i = 1 ; i < ac ; ++i)
	{
       	result = ft_toupper_string(av[i]);
		cresult = ft_str_to_char(result, result.length());
		cresult = strtok(cresult, " \t\v");
		while (cresult != NULL)
		{
			std::cout << cresult << " ";
			cresult = strtok(NULL, " \t\v");
		}
	}
	std::cout << "\n";
    return (0);
}
