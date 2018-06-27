/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 14:53:56 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/26 15:45:07 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <iostream>

std::string Human::identify(void)
{
	return this->_brain.identify();
}

Brain		&Human::getBrain(void)
{
	return (this->_brain);
}