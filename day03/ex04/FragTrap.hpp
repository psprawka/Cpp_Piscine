/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 15:42:00 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/29 17:41:18 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &obj);
		~FragTrap(void);
		FragTrap &operator=(FragTrap const &obj);
		
		void		vaulthunter_dot_exe(std::string const & target);
		void		meleeAttack(std::string const & target);
		void 		rangedAttack(std::string const & target);
};

#endif
