/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 05:18:21 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/28 07:15:58 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class	Fixed
{
	private:
		int					_value;
		static const int	_bits;

	public:
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		Fixed	&operator=(Fixed const &obj);
		
		Fixed(Fixed const &obj);
		Fixed(void);
		~Fixed(void);
};

#endif

// Default constructor called
// Copy constructor called
// Assignation operator called // <-- This line may be missing depending of your implementation
// getRawBits member function called
// Default constructor called
// Assignation operator called
// getRawBits member function called
// getRawBits member function called
// 0
// getRawBits member function called
// 0
// getRawBits member function called
// 0
// Destructor called
// Destructor called
// Destructor called