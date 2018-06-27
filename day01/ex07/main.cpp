/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 21:18:12 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/26 23:48:57 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string	ft_readfile(std::string filename)
{
	std::string		file_data;
	std::string 	line;
	std::ifstream	myfile(filename);

  	if (myfile.is_open())
  	{
		while (getline(myfile, line))
      		file_data += line + "\n";
		 
    	myfile.close();
		return (file_data);
	}
	std::cout << "Readfile: Unable to open file" << std::endl;
	exit(1);
}


void	ft_replace(std::string *filedata, std::string to_replace, std::string replacement)
{
	size_t	start_pos = 0;
	
 	while ((start_pos = filedata->find(to_replace, start_pos)) != std::string::npos)
        filedata->replace(start_pos, to_replace.length(), replacement);	
}


int		ft_writefile(std::string filename, std::string data)
{
	std::ofstream	myfile;

	myfile.open(filename);
	if (!myfile.is_open())
	{
		std::cout << "Writefile: Unable to open file" << std::endl;
		return (EXIT_FAILURE);
	}
 	myfile << data;
 	myfile.close();
	return (EXIT_SUCCESS);
}


int main(int ac, char **av)
{
	if (ac != 4 || !av[1][0] || !av[2][0] || !av[3][0])
	{
		std::cout << "usage: ./replace <filename> <s1> <s2>" << std::endl;
		return (0);
	}
	
  	std::string	newfilename;
	std::string	filedata;

	filedata = ft_readfile(av[1]);

	newfilename = (std::string)av[1] + (std::string)".replace";
	ft_replace(&filedata, av[2], av[3]);
	
	if (ft_writefile(newfilename, filedata) == EXIT_FAILURE)
		return (1);
 	return (0);
}
