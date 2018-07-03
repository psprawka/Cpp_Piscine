/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 12:28:23 by psprawka          #+#    #+#             */
/*   Updated: 2018/07/02 14:09:05 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat first;

	first.setName("Pola");
	first.setGrade(149);
	std::cout << first << std::endl;
	first.gradeDecrement();
	first.gradeDecrement();
	std::cout << first << std::endl << std::endl;

	Bureaucrat second;
	second.setName("Nick");
	second.setGrade(200);
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
