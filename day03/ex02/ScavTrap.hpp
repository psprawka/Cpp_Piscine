/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 08:11:57 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/29 12:28:44 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &obj);
		~ScavTrap(void);
		ScavTrap &operator=(ScavTrap const &obj);
		
		void 	Challenge1(void) const;
		void 	Challenge2(void) const;
		void 	Challenge3(void) const;
		void 	Challenge4(void) const;
		void 	Challenge5(void) const;
		void	challengeNewcomer(void) const;
};

#endif
