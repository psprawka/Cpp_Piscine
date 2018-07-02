/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 19:11:21 by psprawka          #+#    #+#             */
/*   Updated: 2018/07/01 20:17:47 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BULLET_HPP
# define BULLET_HPP

class ABullet
{
	private: 
		int 	_x, _y; // Coordinates
		int 	_speed; // Speed of a bullet
		char 	_represent;
		int 	_dir; // positive for down and negative for up, true
	
	public:
		ABullet(void);
		ABullet(ABullet const &obj);
		ABullet(char rep, int x, int y, int dir, int speed);
		~ABullet(void);

		ABullet	&operator=(ABullet const &obj);

		void 	update();
		void 	draw();


/*
** ----------------------------- Getters / Setters -----------------
*/
		int 	getSpeed(void) const;
		int 	getX(void) const;
		int 	getY(void) const;
		int 	getDir(void) const;
		int 	getRepresent(void) const;

		void 	setSpeed(int amount);
		void 	setDir(int dir);
		void 	setX(int x);
		void 	setY(int y);
		void 	setRepresent(char rep);

};


class DefaultBullet : public ABullet
{
	public:
		DefaultBullet(void);
		DefaultBullet(int x, int y, int dir);
		DefaultBullet(int x, int y, bool enemy);
		~DefaultBullet(void);
		
};


#endif
