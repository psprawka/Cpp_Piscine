/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 01:38:54 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/29 07:03:40 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include <iostream>
#include <sstream>
#include <fstream>
#include <limits>

#define NORMAL		"\x1B[0m"
#define RED			"\x1B[31m"


int			Logger::_lognb = 0;

void		Logger::logToConsole(std::string const &log)
{
	this->_lognb++;
	std::cout << log << std::endl;
}


void		Logger::logToFile(std::string const &log)
{
	std::ofstream myfile;

	myfile.open(this->_filename, std::ios_base::app);
	if (!myfile.is_open())
	{
		std::cout << "Unable to open file (log not appended)" << std::endl;
		return ;
	}
	this->_lognb++;
	myfile << log << std::endl;
	myfile.close();
}


std::string	Logger::getTimestamp(void)
{
	time_t 				unixtime = time(NULL);
	struct tm 			*curr = localtime(&unixtime);
	std::ostringstream 	streamresult;
	
	streamresult << "[" << curr->tm_year + 1900 << curr->tm_mon + 1
		<< curr->tm_mday << "_" << curr->tm_hour << curr->tm_min << curr->tm_sec <<"]";
	return (streamresult.str());
}


std::string	Logger::makeLogEntry(std::string const &message)
{
	std::ostringstream 	logStampStream;
	logStampStream << " lognb: " << (this->_lognb + 1) << "; ";
	
	return (this->getTimestamp() + logStampStream.str() + "[" + message + "]");
}


int			Logger::validateLog(std::string const &message)
{
	if (message[0])
		return (EXIT_SUCCESS);

	std::string response;

	std::cout << RED << "Warning! A given log is empty. ";
		
labelResponse:
	std::cout << RED << "Do you want to insert either way? (y/n)\n" << NORMAL;
	std::cin >> response;
	if (!std::cin.good() || response == "n")
		return (EXIT_FAILURE);
	else if (response == "y")
		return (EXIT_SUCCESS);
	else
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		goto labelResponse;
	}
}

void 		Logger::log(std::string const &dest, std::string const &message)
{
	typedef void (Logger::*LoggerActions)(std::string const &log);

	LoggerActions actions[2] = {&Logger::logToConsole, &Logger::logToFile};
	std::string		names[2] = {"logToConsole" , "logToFile"};

	if (validateLog(message) == EXIT_FAILURE)
		return ;
	for (int i = 0; i < 2; i++)
	{
		if (dest == names[i])
			(this->*actions[i])(this->makeLogEntry(message));
	}

}


Logger::Logger(std::string filename)
{
	this->_filename = filename;
}
