/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 10:03:04 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/30 13:57:13 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy
{
	protected:
		int				_hp;
		std::string		_type;
		Enemy(void);

	public:
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const &obj);
		virtual ~Enemy(void) = 0;

		Enemy &operator=(Enemy const &obj);
		
		std::string		getType(void) const;
		int				getHP(void) const;
		virtual void	takeDamage(int demage);
};

#endif
