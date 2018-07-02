/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 20:06:49 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/30 09:57:07 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"
#include <iostream>
#include <sstream>

class Peon : public Victim
{
	private:
		Peon(void);

	public:
		Peon(std::string name);
		Peon(Peon const &obj);
		~Peon(void);
		
		Peon			&operator=(Peon const &obj);
		
		void			introduce(void) const;
		void			getPolymorphed(void) const;
};

std::ostream	&operator<<(std::ostream &os, Peon const &obj);

#endif
