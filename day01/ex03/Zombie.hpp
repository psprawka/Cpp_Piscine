/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 09:34:11 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/26 13:20:49 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include "Zombie.hpp"
#include <iostream>

class Zombie
{
	std::string _name;
	std::string _type;
	
	public:
		void	announce(void);
		Zombie(std::string name, std::string type);
		Zombie(void);
		~Zombie(void);
};

#endif
