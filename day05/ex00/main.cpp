/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 12:28:23 by psprawka          #+#    #+#             */
/*   Updated: 2018/07/03 22:12:33 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat first(149, "Pola");

	std::cout << first << std::endl;
	first.gradeDecrement();
	first.gradeDecrement();
	std::cout << first << std::endl << std::endl;

	Bureaucrat second(200, "Nick");
	std::cout << second << std::endl;
	second.setGrade(20);
	std::cout << second << std::endl << std::endl;

	Bureaucrat third(-30, "Terence");
	std::cout << third << std::endl;
	third.setGrade(2);
	std::cout << third << std::endl;
	third.gradeIncrement();
	third.gradeIncrement();
	std::cout << third << std::endl;

	return (0);
}
