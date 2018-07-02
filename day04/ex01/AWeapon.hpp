/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 10:01:32 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/30 11:01:15 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>
#include <sstream>

class AWeapon
{
	protected:
		AWeapon(void);
		std::string _name;
		int			_demage;
		int			_APcost;
	
	public:
		AWeapon(std::string const &name, int apcost, int damage);
		AWeapon(AWeapon const &obj);
		~AWeapon(void);
		
		AWeapon &operator=(AWeapon const &obj);
		
		std::string		getName(void) const;
		int				getAPCost(void) const;
		int				getDemage(void) const;
		virtual void	attack(void) const = 0;
};

#endif
