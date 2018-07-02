/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 14:43:52 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/29 17:41:10 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

// class SuperTrap : virtual public FragTrap, virtual public NinjaTrap
class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
		SuperTrap(void);
		SuperTrap(std::string name);
		SuperTrap(SuperTrap const &obj);
		~SuperTrap(void);
		SuperTrap &operator=(SuperTrap const &obj);

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
};
#endif
