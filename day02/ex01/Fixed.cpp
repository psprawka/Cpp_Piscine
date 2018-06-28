/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 05:18:13 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/28 09:19:15 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath> 

const int		Fixed::_bits = 8;

/*
**	methods
*/
int				Fixed::getRawBits(void) const
{	
	return (this->_value);
}

void			Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float 			Fixed::toFloat(void) const
{
	return (this->_value / roundf((1 << Fixed::_bits)));
}

int 			Fixed::toInt(void) const
{
	return (this->_value >> Fixed::_bits);
}

/*
**	operators
*/
std::ostream	&operator<<(std::ostream &os, Fixed const &obj)
{
	os << obj.toFloat();
	return (os);
}

Fixed			&Fixed::operator=(Fixed const &obj)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = obj.getRawBits();
	return (*this);
}

/*
**	constructors
*/
Fixed::Fixed(const int value): _value(value << Fixed::_bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value): _value(roundf(value * (1 << Fixed::_bits)))
{
	std::cout << "Float constructor called " << std::endl;
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