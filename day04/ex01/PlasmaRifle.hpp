/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 10:01:50 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/30 12:59:22 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"
#include <iostream>

class	PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle(PlasmaRifle const &obj);
		PlasmaRifle(void);
		~PlasmaRifle(void);

		PlasmaRifle &operator=(PlasmaRifle const &obj);

		virtual void	attack(void) const;
};

#endif
