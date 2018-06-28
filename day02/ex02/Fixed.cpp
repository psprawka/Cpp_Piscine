/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 05:18:13 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/28 14:36:08 by psprawka         ###   ########.fr       */
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
	return (this->_value / (float)(1 << Fixed::_bits));
}

int 			Fixed::toInt(void) const
{
	return (this->_value >> Fixed::_bits);
}

/*
**	functions
*/
Fixed			Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

Fixed			Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

Fixed			Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a > b ? a : b);
}

Fixed 			Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a < b ? a : b);
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
	this->_value = obj.getRawBits();
	return (*this);
}

Fixed			Fixed::operator+(Fixed const &obj) const
{
	return (Fixed(this->toFloat() + obj.toFloat()));
}

Fixed			Fixed::operator-(Fixed const &obj) const
{
	return (Fixed(this->toFloat() - obj.toFloat()));
}

Fixed			Fixed::operator*(Fixed const &obj) const
{
	return (Fixed(this->toFloat() * obj.toFloat()));
}

Fixed			Fixed::operator/(Fixed const &obj) const
{
	return (Fixed(this->toFloat() / obj.toFloat()));
}

Fixed			&Fixed::operator++(void) //++a
{
	this->_value++;
	return (*this);
}

Fixed			Fixed::operator++(int) //a++
{
	Fixed tmp (*this);
	
	this->_value++;
	return (tmp);
}

Fixed			&Fixed::operator--(void) //a--
{
	this->_value--;
	return (*this);
}

Fixed			Fixed::operator--(int) //--a
{
	Fixed tmp (*this);
	
	this->_value--;
	return (tmp);
}

bool			Fixed::operator<(Fixed const &obj) const
{
	return(this->toFloat() < obj.toFloat());	
}

bool			Fixed::operator>(Fixed const &obj) const
{
	return(this->toFloat() > obj.toFloat());	
}

bool			Fixed::operator>=(Fixed const &obj) const
{
	return(this->toFloat() >= obj.toFloat());	
}

bool			Fixed::operator<=(Fixed const &obj) const
{
	return(this->toFloat() <= obj.toFloat());	
}

bool			Fixed::operator!=(Fixed const &obj) const
{
	return(this->toFloat() != obj.toFloat());	
}

bool			Fixed::operator==(Fixed const &obj) const
{
	return(this->toFloat() == obj.toFloat());	
}


/*
**	constructors
*/
Fixed::Fixed(const int value): _value(value << Fixed::_bits) {}

Fixed::Fixed(const float value): _value(roundf(value * (1 << Fixed::_bits))) {}

Fixed::Fixed(Fixed const &obj)
{
	*this = obj;
}

Fixed::Fixed(void): _value(0) {}

Fixed::~Fixed(void) {}



//zwracany_typ opeartor@(typ_opearndu &nazwa_operandu)
//@ <- przeciazony operator