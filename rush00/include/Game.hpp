/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 02:01:02 by jtahirov          #+#    #+#             */
/*   Updated: 2018/07/01 20:35:32 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>
#include <string>
#include <ncurses.h>
#include "Bullet.hpp"
#include "Ship.hpp"

# define maxShip 2
# define maxBullets 200

class Game {
	
	private:
		Game(Game const &obj);				//we're putting private because we dont want anyone to copy currect game
		Game &operator=(Game const &obj);	//same reason as above
		
		ShipNormal 	*player;
		ShipNormal 	*enemy[maxShip];
		ABullet		*bullets[maxBullets];
		int 		_numberBullets;
		int 		_numberEnemies;
		int 		_numberEnemiesFixed;
		int 		_maxY, _maxX;
		int 		_wave;
		int 		_playerScore;
		
		void 		bulletsRoutine(void);
		void 		spawnEnemies(int level);
		void 		enemyRoutine(void);
		void		checkCollision(void);
		void 		drawGameInfo(void);
		void 		userHandle(void);


	public:
		Game(void);
		~Game(void);
		
		void 		start(void);
		void		end(void);
		void		playSound(std::string file);

};

#endif
