/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 10:02:40 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/30 12:59:29 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "AWeapon.hpp"
#include <iostream>

class	PowerFist : public AWeapon
{
	public:
		PowerFist(PowerFist const &obj);
		PowerFist(void);
		~PowerFist(void);

		PowerFist &operator=(PowerFist const &obj);

		virtual void	attack(void) const;
};

#endif
