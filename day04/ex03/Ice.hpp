/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 22:03:56 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/30 22:27:44 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		virtual ~Ice(void);

		Ice	&operator=(Ice const &obj);
		
		virtual Ice*	clone(void) const;
};

#endif
