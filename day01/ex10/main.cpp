/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 05:58:56 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/27 07:22:37 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <iostream>
#include <fstream>
#include <sstream>

int run_loop(void)
{
	std::string line;

	while (std::getline(std::cin, line))
		std::cout << line << std::endl;
	return (EXIT_SUCCESS);
	
}

//cat for only reading
int main(int ac, char **av)
{
	if (ac == 1)
		return(run_loop());

	for (int i = 1; i < ac; i++)
	{
		std::ifstream	myfile(av[i]);
		struct stat		file_info;

		if (stat(av[i], &file_info))
		{
			std::cout << "cato9tails: " << av[i] << ": No such file or directory\n";
			continue ;
		}
		else if (S_ISDIR(file_info.st_mode))
		{
			std::cout << "cato9tails: " << av[i] << ": Is a directory\n";
			continue ;
		}
		else if (!(file_info.st_mode & S_IROTH))
		{
			std::cout << "cato9tails: " << av[i] << ": Permission denied\n";
			continue ;
		}
		
		// std::string line;
		// std::string file_data;
		// while (getline(myfile, line))
      	// 	file_data += line + "\n";
		// std::cout << file_data;
		// myfile.close();
		
		std::stringstream fileStream;
		fileStream << myfile.rdbuf();
		std::cout <<  fileStream.str();
		myfile.close();
	}
}