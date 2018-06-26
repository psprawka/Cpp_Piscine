/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 11:22:40 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/25 16:36:19 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HEADER_HPP
# define HEADER_HPP

#include <iostream>
#include <iomanip>			//get_time()
#include <ctime> 			//tm()
#include "ClassContact.hpp"
#include "ClassPhonebook.hpp"

# define NORMAL			"\x1B[0m"
# define RED			"\x1B[31m"
# define GREEN			"\x1B[32m"
# define YELLOW			"\x1B[33m"
# define BLUE			"\x1B[34m"
# define MAGNETA		"\x1B[35m"
# define CYAN			"\x1B[36m"
# define PINK			"\033[38;5;200m"
# define ORANGE			"\033[38;5;208m"
# define PURPLE			"\033[38;5;55m"
# define MAROON			"\033[38;5;88m"
# define GREY			"\033[38;5;246m"

char	*ft_str_to_char(std::string str, size_t len);

#endif