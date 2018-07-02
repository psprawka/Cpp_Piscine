/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 22:03:44 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/30 23:48:37 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		unsigned int		xp_;
		std::string			_type;
		
	public:
		AMateria(void);
		AMateria(std::string const &type);
		AMateria(AMateria const &obj);
		virtual ~AMateria();

		AMateria &operator=(AMateria const &obj);
		
		std::string	const		&getType() const; //Returns the materia type
		unsigned int		getXP() const; //Returns the Materia's XP
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target) {(void)target;};
};

#endif
