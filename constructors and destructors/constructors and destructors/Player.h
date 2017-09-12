#pragma once
#include "Point2D.h"

class Player
{
private:
	Point2D mPos;
	char mName[255];
	int mLevel;
public:
	Player();
	Player(Point2D pos, char name[]);
	void MovePlayer(Point2D direction);
	bool LevelUp();

};