/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 00:23:42 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/27 03:51:56 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include <iostream>

int main(void)
{
	Logger bobo("logs.txt");

	bobo.log("logToConsole", "I want to be displayed in console");
	bobo.log("logToFile", "I will be the very first line in a file");
	bobo.log("logToFile", "I want to be a second line yaaay");
	bobo.log("logToNowhere", "I won't be anywhere");
	bobo.log("logToConsole", "Console as well");
	bobo.log("logToConsole", "");
	bobo.log("logToFile", "I'll be a test after this empty string in file");
	bobo.log("logToConsole", "");
	bobo.log("logToConsole", "I'll be a test after this empty string in console");
	return (0);
}
