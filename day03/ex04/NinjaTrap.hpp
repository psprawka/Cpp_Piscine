/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 13:05:16 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/29 17:38:20 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class	NinjaTrap : virtual public ClapTrap
{
	public:
		NinjaTrap(void);
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const &obj);
		~NinjaTrap(void);
		NinjaTrap	&operator=(NinjaTrap const &obj);

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	ninjaShoebox(NinjaTrap const &obj) const;
		void	ninjaShoebox(FragTrap const &obj) const;
		void	ninjaShoebox(ScavTrap const &obj) const;
		void	ninjaShoebox(ClapTrap const &obj) const;
};

#endif 
