/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 14:17:07 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/30 18:09:23 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AssaultTerminator_HPP
# define AssaultTerminator_HPP

#include "ISpaceMarine.hpp"

class	AssaultTerminator : public ISpaceMarine
{
	private:
		int		_hp;
		
	public:
		AssaultTerminator(void);
		AssaultTerminator(AssaultTerminator const &obj);
		virtual ~AssaultTerminator(void);
	
		AssaultTerminator &operator=(AssaultTerminator const &obj);
		
		virtual ISpaceMarine*	clone(void) const;
		virtual void			battleCry(void) const;
		virtual void			rangedAttack(void) const;
		virtual void			meleeAttack(void) const;
		int						getHP(void) const;
};

#endif
