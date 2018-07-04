/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 14:52:56 by psprawka          #+#    #+#             */
/*   Updated: 2018/07/03 20:33:58 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <climits>
#include <iomanip>
#include <cfloat>
#include <math.h>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./convert <number>" << std::endl;
		return (0);
	}
	
	//char
	std::cout << "char: ";
	try
	{
		int res = std::stoi(av[1]);
		if (res > 33 && res < 126)
			std::cout << static_cast<char>(res) << std::endl;
		else if (res >= 0 && res <= 255)
			std::cout << "Non displayable" << std::endl;
		else throw "impossible";
	}
	catch (...)
	{
		std::cout << "impossible" << std::endl;
	}
		
	//int
	try
	{
		std::cout << "int: ";
		int res2 = std::stoi(av[1]);
		if (res2 > -INT_MAX && res2 < INT_MAX)
			std::cout << static_cast<int>(res2) << std::endl;
		else
			throw "impossible";
	}
	catch (...)
	{
		std::cout << "impossible" << std::endl;
	}
	
	//float
	try
	{
		std::cout << "float: ";
		double	res3 = std::stod(av[1]);

		if (isnan(res3)) //if (res3 != res3)
			std::cout << "nanf" << std::endl;
		else if ((res3 > -FLT_MAX && res3 < FLT_MAX) || isinf(res3))
			{
			if (!fmod(res3, 1))
				std::cout << static_cast<int>(res3) << ".0f" << std::endl;
			else 
				std::cout << static_cast<double>(res3) << "f" << std::endl;
		}
		else
			throw "impossible";
	}
	catch (...)
	{
		std::cout << "impossible" << std::endl;
	}
	

	//double
	try
	{
		std::cout << "double: ";
		double res4 = std::stod(av[1]);
		
		if (isnan(res4))
			std::cout << "nan" << std::endl;
		else if ((res4 > -DBL_MAX && res4 < DBL_MAX) || isinf(res4))
		{
			if (!fmod(res4, 1))
				std::cout << static_cast<int>(res4) << ".0" << std::endl;
			else 
				std::cout << static_cast<double>(res4) << std::endl;
		}
		else
			throw "impossible";
	}
	catch (...)
	{
		std::cout << "impossible" << std::endl;
	}
	
	
	return (0);
}
