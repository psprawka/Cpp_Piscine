/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 12:28:23 by psprawka          #+#    #+#             */
/*   Updated: 2018/07/02 19:53:21 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat	first;
	Form		form_one("Internship", 10, 10);
	Form		form_two("Internship2", 140, 140);

	first.setName("Pola");
	first.setGrade(120);
	first.signForm(form_one);
	std::cout << form_one << std::endl;
	first.signForm(form_two);
	std::cout << form_two << std::endl;
	std::cout << first << std::endl << std::endl;

	Bureaucrat third(2, "Terence");
	std::cout << third << std::endl;
	third.signForm(form_one);
	std::cout << form_one << std::endl;
	std::cout << third << std::endl;
	third.signForm(form_one);

	return (0);
}
