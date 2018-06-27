/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 01:26:08 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/27 03:37:45 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

#include <iostream>

class	Logger
{
	private:
		std::string	_filename;
		static int	_lognb;

		void		logToConsole(std::string const &log);
		void		logToFile(std::string const &log);
		std::string	makeLogEntry(std::string const &message);
		int			validateLog(std::string const &message);	//additional funcion
		
	public:
		Logger(std::string filename);
		std::string	getTimestamp(void);									//additional function
		void		log(std::string const & dest, std::string const & message);
};

#endif
