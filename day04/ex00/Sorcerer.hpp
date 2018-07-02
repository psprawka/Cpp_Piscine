/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 20:06:13 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/30 09:59:08 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include "Victim.hpp"
#include <iostream>
#include <sstream>

class Sorcerer
{
	private:
		std::string		_name;
		std::string		_title;
		Sorcerer(void);

	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const &obj);
		~Sorcerer(void);
		
		Sorcerer		&operator=(Sorcerer const &obj);
		
		std::string		getName(void) const;
		std::string		getTitle(void) const;
		void			introduce(void) const;
		void			polymorph(Victim const &) const;
};

std::ostream	&operator<<(std::ostream &os, Sorcerer const &obj);

#endif
