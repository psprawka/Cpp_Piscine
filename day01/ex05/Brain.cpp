/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 14:53:27 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/26 16:22:17 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <sstream> 

std::string Brain::identify(void) //look how excatly std::ostringstream works
{
	std::ostringstream address;
	address << (void const *)this;
	std::string result = address.str();
	return(result);
}

Brain::Brain(int iq)
{
	this->_iq = iq;
}

Brain::Brain(void)
{
	std::cout << "Brain created\n";
}