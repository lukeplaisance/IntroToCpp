#pragma once
#include "Point2D.h"
class Player
{
	char* mName;
	Point2D* mPosition;
	int mHealth;
public:
	Player();
	Player(char* name);
	void Move(char direction);
	void SetPosition(Point2D* newPos);
};