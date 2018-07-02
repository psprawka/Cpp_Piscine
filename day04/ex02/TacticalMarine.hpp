/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 14:16:42 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/30 18:09:25 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class	TacticalMarine : public ISpaceMarine
{
	private:
		int		_hp;

	public:
		TacticalMarine(void);
		TacticalMarine(TacticalMarine const &obj);
		virtual ~TacticalMarine(void);
	
		TacticalMarine &operator=(TacticalMarine const &obj);
		
		virtual ISpaceMarine*	clone(void) const;
		virtual void			battleCry(void) const;
		virtual void			rangedAttack(void) const;
		virtual void			meleeAttack(void) const;
		int						getHP(void) const;
};

#endif

// Tactical Marine ready for battle
// * teleports from space *
// For the holy PLOT!
// * attacks with bolter *
// * attacks with chainsword *
// This code is unclean. PURIFY IT!
// * does nothing *”
// * attacks with chainfists *

// Tactical Marine ready for battle$
// * teleports from space *$
// For the holy PLOT !$
// * attacks with bolter *$
// * attacks with chainsword *$
// This code is unclean. PURIFY IT !$
// * does nothing *$
// * attacks with chainfists *$
// Aaargh ...$
// I'll be back ...$