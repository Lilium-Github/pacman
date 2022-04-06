#pragma once
#include "SFML/Graphics.hpp"
#include"globals.h"
#include <stdlib.h>   
#include <time.h>
class ghost {

public:
	ghost();
	void initGhost(int x, int y, int dir, bool dead, int Gspeed, int Gcolor);
	bool isdead();
	void drawGhost(sf::RenderWindow& window);
	void printInfo();
	void chase1(int x, int y, int field[20][30]);
	void badchase(int x, int y, int field[20][30]);
	void bogochase(int x, int y, int field[20][30]);
	void chase2(int x, int y, int field[20][30], bool keys[]);
	bool getPacman(int x, int y);
	int getXpos();
	int getYpos();

private:

	int xpos;
	int ypos;
	char color;
	int direction;
	bool dead;
	int speed;
	int offset;
	sf::CircleShape shape;

};