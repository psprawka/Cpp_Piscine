/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 14:17:43 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/30 18:08:36 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

#include "ISpaceMarine.hpp"

class ISpaceMarine;

class ISquad
{
	public:
		virtual ~ISquad() {};
		virtual int getCount() const = 0;
		virtual ISpaceMarine* getUnit(int) = 0;
		virtual int push(ISpaceMarine*) = 0;
};

#endif
