/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 05:18:21 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/28 14:36:18 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
		int					_value;
		static const int	_bits;		//range 24 accurate 8

	public:
		int				getRawBits(void) const;
		void			setRawBits(int const raw);
		float		 	toFloat(void) const;
		int 			toInt(void) const;
		Fixed			&operator=(Fixed const &obj);
		Fixed			&operator++(void);		//++a
		Fixed			operator++(int);		//a++
		Fixed			&operator--(void);
		Fixed			operator--(int);
		Fixed			operator+(Fixed const &obj) const;
		Fixed			operator-(Fixed const &obj) const;
		Fixed			operator*(Fixed const &obj) const;
		Fixed			operator/(Fixed const &obj) const;
		bool			operator<(Fixed const &obj) const;
		bool			operator>(Fixed const &obj) const;
		bool			operator>=(Fixed const &obj) const;
		bool			operator<=(Fixed const &obj) const;
		bool			operator!=(Fixed const &obj) const;
		bool			operator==(Fixed const &obj) const;
		
		static Fixed	max(Fixed &a, Fixed &b);
		static Fixed	min(Fixed &a, Fixed &b);
		static Fixed	max(Fixed const &a, Fixed const &b);
		static Fixed 	min(Fixed const &a, Fixed const &b);
		
		Fixed(Fixed const &obj);
		Fixed(const int value);
		Fixed(const float value);
		Fixed(void);
		~Fixed(void);
};

std::ostream	&operator<<(std::ostream& os, Fixed const &obj);

#endif