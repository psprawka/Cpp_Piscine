/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 20:06:29 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/30 09:58:51 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>
#include <sstream>

class Victim
{
	protected:
		std::string		_name;
		Victim(void);

	public:
		Victim(std::string name);
		Victim(Victim const &obj);
		~Victim(void);
		
		Victim			&operator=(Victim const &obj);
		
		std::string		getName(void) const;
		void			introduce(void) const;
		virtual void	getPolymorphed(void) const;
};

std::ostream	&operator<<(std::ostream &os, Victim const &obj);

#endif
