/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 14:16:16 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/30 18:11:09 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class	Squad : public ISquad
{
	private:
		static int		_count;
		ISpaceMarine	*_players[20];

	public:
		Squad(void);
		Squad(Squad const &obj);
		virtual ~Squad(void);

		Squad &operator=(Squad const &obj);

		int				getCount(void) const;
		ISpaceMarine*	getUnit(int i);
		int				push(ISpaceMarine *to_push);
};

#endif 