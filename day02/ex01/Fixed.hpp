/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 05:18:21 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/28 09:19:22 by psprawka         ###   ########.fr       */
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
		
		Fixed(Fixed const &obj);
		Fixed(const int value);
		Fixed(const float value);
		Fixed(void);
		~Fixed(void);
};

std::ostream	&operator<<(std::ostream& os, Fixed const &obj);

#endif