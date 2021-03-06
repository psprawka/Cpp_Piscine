/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ship.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 19:10:56 by psprawka          #+#    #+#             */
/*   Updated: 2018/07/01 20:31:17 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHIP_HPP
# define SHIP_HPP
# include "Bullet.hpp"
# include "unistd.h"
# include "time.h"

class	AShip
{
	private:
		int		_x, _y;			//coordinates
		int		_hp;
		char	_represent;
		int 	_speed;
		int 	_fireChance;
		int 	_isEnemy;
		int 	_boomNum;

	public:
		AShip(void);
		AShip(AShip const &obj);	
		AShip(int rep, int x, int y, int hp, int speed);
		virtual ~AShip(void);

		AShip &operator=(AShip const &obj);
		void update();
		bool isEnemy();
		int getX() const;
		int getY() const;
		int getHP() const;
		char getRep() const;
		int getSpeed() const;
		int getFireChance() const;
		int getBoomNum() const;

		void setX(int x);
		void setY(int y);
		void setHP(int hp);
		void setRep(int rep);
		void setSpeed(int speed);
		void setFireChance(int chance);
		void setBoomNum(int num);
		void makeEnemy();
		
		void	draw(void);
		void	moveLeft(void);
		void	moveRight(void);
		void 	moveUp(void);
		void 	moveDown(void);

		ABullet	*shoot(void);
};

class	ShipNormal : public AShip
{
	public:
		ShipNormal(int rep, int x, int y, int hp, int speed);
		ShipNormal(int rep);
		ShipNormal(int maxX, int level);
		~ShipNormal(void);
	
};


class	ShipBoss : public AShip
{	
	
};





#endif
