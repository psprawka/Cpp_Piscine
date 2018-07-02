/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 02:24:10 by jtahirov          #+#    #+#             */
/*   Updated: 2018/07/01 20:34:08 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Game.hpp"
#include <unistd.h>
#include <ncurses.h>
#include <fcntl.h>

#define DELAY 30000
#define debug(x, z) (mvprintw(10, 10, x, z))

/*
** ----------------------------- CANONICAL MODE --------------------------------
*/
Game::Game(void)
{
	initscr();
	curs_set(false);
	keypad(stdscr, true);
	noecho();
	nodelay(stdscr, true);
	start_color();
	init_pair(1, COLOR_RED, COLOR_BLACK);
	getmaxyx(stdscr, this->_maxY, this->_maxX);
	
	this->player = new ShipNormal('A', (this->_maxX / 2), (this->_maxY - 10), 100, 1);
	this->_numberBullets = 0;
	this->_numberEnemies = 0;
	this->_numberEnemiesFixed = 0;
	this->_wave = 0;
}


Game::~Game(void)
{
	for (int i = 0; i < this->_numberBullets; i++)
		if (this->bullets[i])
			delete this->bullets[i];
	delete this->player;
}



/*
** ----------------------------- START AND END  ---------------------------------
*/
void Game::start(void)
{
	while (true)
	{
		clear();
		
		box(stdscr, 0, 0);
		this->enemyRoutine();
		this->bulletsRoutine();
		attron(COLOR_PAIR(1));
		this->player->draw();
		attroff(COLOR_PAIR(1));
		this->userHandle();
		this->drawGameInfo();
		this->checkCollision();
		refresh();
		usleep(DELAY);
	}
}

void Game::end(void)
{
	mvprintw(this->_maxY / 2, this->_maxX / 2 - 5, "GAME OVER :(");
	mvprintw(this->_maxY / 2 + 3, this->_maxX / 2 - 7, "Your score is %d", this->_playerScore);
	refresh(); 
	system("killall -9 afplay");
	this->playSound("sound/gameover2.wav");
	sleep(3);
	endwin();
	system("reset");
	this->~Game();
	exit(1);
}

/*
** -------------------------- BULLET FUNCTIONS -------------------------------
*/
void Game::bulletsRoutine(void)
{
	for (int i = this->_numberBullets; i >= 0; i--)
	{
		if (!bullets[i])
			continue;
			
		int y = bullets[i]->getY();

		if (y >= this->_maxY || y < 0)
		{
			delete bullets[i];
			bullets[i] = NULL;
			for (int j = i; j < this->_numberBullets && bullets[i]; j++)
				bullets[j] = bullets[j + 1];
			this->_numberBullets--;
			continue;
		}
		bullets[i]->update();
		bullets[i]->draw();
	}
}



/*
** -------------------------- ENEMY FUNCTIONS -------------------------------
*/
void Game::spawnEnemies(int level)
{
	if (level > maxShip)
	{
		mvprintw(this->_maxY / 2, this->_maxX / 2 - 6, "You Won! :)");
		mvprintw(this->_maxY / 2 + 3, this->_maxX / 2 - 8, "Your score is %d", this->_playerScore);
		refresh();
		sleep(1);
		system("killall -9 afplay");
		this->playSound("sound/clap.wav");
		sleep(3);
		endwin();
		system("reset");
		this->~Game();
		exit(1);
	}
	for (int i = 0; i < level && i < maxShip; i++)
		this->enemy[i] = new ShipNormal(this->_maxX, level);

	this->_numberEnemies = level;
	this->_numberEnemiesFixed = level;
}


void Game::enemyRoutine(void)
{
	int 	dice;

	if (!this->_numberEnemies)
		this->spawnEnemies(++this->_wave);
		
	for (int i = 0; i < this->_numberEnemiesFixed; i++)
	{
		if (!this->enemy[i])
			continue ;

		int tempx = this->enemy[i]->getX();
		int tempy = this->enemy[i]->getY();

		if (tempx > this->_maxX || tempy > this->_maxY)
		{
			delete this->enemy[i];
			this->enemy[i] = NULL;
			this->_numberEnemies--;
			continue ;
		}

		dice = rand() % 100;
		if (dice < this->enemy[i]->getFireChance())
			this->bullets[this->_numberBullets++] = this->enemy[i]->shoot();

		this->enemy[i]->update();
		this->enemy[i]->draw();
	}
}



/*
** ----------------------------- COLLISIONS ---------------------------------
*/
void		Game::checkCollision(void)
{

	//this part checks player-enemy collision
	for (int i = 0; i < _numberEnemiesFixed; i++)
	{
		if (this->enemy[i] && this->enemy[i]->getX() == this->player->getX() &&
			this->enemy[i]->getY() == this->player->getY())
			this->end();
	}
	
	//this part checks bullet-enemy collision
	for (int i = 0; i < _numberBullets; i++)
	{
		if (!this->bullets[i])
			continue;

		if (this->bullets[i]->getX() == this->player->getX() && this->bullets[i]->getY() == this->player->getY())
			this->end();
		for (int j = 0; j < _numberEnemiesFixed; j++)
		{
			if (!this->enemy[j])
				continue ;
			if (this->enemy[j] && this->enemy[j]->getX() == this->bullets[i]->getX() &&
				this->enemy[j]->getY() == this->bullets[i]->getY())
			{
				this->playSound("sound/destroy.mp3");
				delete this->enemy[j];
				this->enemy[j] = NULL;
				this->_numberEnemies--;
				this->_playerScore++;
			}
		}
	}

	//this part checks enemy bullet-player collision
	for (int i = 0; i < _numberBullets; i++)
	{
		if (!this->bullets[i])
			continue;
			
		if (this->player->getX() == this->bullets[i]->getX() &&
			this->player->getY() == this->bullets[i]->getY())
		{
			this->playSound("sound/destroy.mp3");
			this->end();
			exit(1);
		}
	}
}



/*
** -------------------------- OTHER FUNCTIONS -------------------------------
*/
void 	Game::drawGameInfo(void)
{
	mvprintw(this->_maxY - 1, 2, "Score: %d Level: %d", this->_playerScore, this->_wave);
}


void		Game::playSound(std::string file)
{
	std::string command;
	command = "afplay " + file + " &";
	system(command.data());
}


void Game::userHandle(void)
{
	unsigned int choice;

	switch (choice = getch())
	{
		case KEY_LEFT:
		{
			this->player->moveLeft();
			break;
		}
		case KEY_RIGHT:
		{
			this->player->moveRight();
			break;
		}
		case KEY_UP:
		{
			this->player->moveUp();
			break;
		}
		case KEY_DOWN:
		{
			this->player->moveDown();
			break;
		}
		case ' ':
		{
			this->playSound("sound/shoot.mp3");
			this->bullets[this->_numberBullets++] = this->player->shoot();
			break;
		}
	}
}