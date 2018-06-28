/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 05:18:13 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/28 07:14:17 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int		Fixed::_bits = 8;

int				Fixed::getRawBits(void) const
{	
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}


void			Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

Fixed		&Fixed::operator= (Fixed const &obj)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = obj.getRawBits();
	return (*this);
}



Fixed::Fixed(Fixed const &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::Fixed(void): _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}



//zwracany_typ opeartor@(typ_opearndu &nazwa_operandu)
//@ <- przeciazony operator