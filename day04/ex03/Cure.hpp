/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 22:04:13 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/30 22:28:46 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		virtual ~Cure(void);

		Cure	&operator=(Cure const &obj);
		
		virtual Cure*	clone(void) const;
};

#endif