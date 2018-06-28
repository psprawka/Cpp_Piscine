/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 05:19:01 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/28 14:28:37 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl << std::endl;
	
	Fixed const c( Fixed( 2.25f ) * Fixed( 2 ) );
	Fixed const d(10);
	
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << "Add: " <<  c + d << std::endl;
	std::cout << "Div: " <<  c / d << std::endl;
	std::cout << "Subs: " << c - d << std::endl;
	std::cout << "c != d: " << (c != d) << std::endl;
	std::cout << "c == d: " << (c == d) << std::endl;
	std::cout << "c <= d: " << (c <= d) << std::endl;
	std::cout << "c >= d: " << (c >= d) << std::endl;
	std::cout << "c > d: " << (c > d) << std::endl;
	std::cout << "c < d: " << (c < d) << std::endl;
	return 0;
}
