/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 14:54:08 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/26 15:39:45 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Human.hpp"
#include "Brain.hpp"
#include <iostream>

int main(void)
{
	Human bob;
	
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
}