/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 13:32:42 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/26 20:09:10 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr_str = &str;
	std::string &str_ref = str;
	
	std::cout << "This is a pointer:	" << *ptr_str << std::endl;
	std::cout << "This is a reference:	" << str_ref << std::endl;
	return (0);
}