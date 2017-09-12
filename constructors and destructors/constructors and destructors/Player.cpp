#include "Player.h"
#include <iostream>
Player::Player()
{
	mPos = Point2D();
	strcpy_s(mName, "Default");
	mLevel = 1;
}

Player::Player(Point2D pos, char name[])
{
	mPos = pos;
	strcpy_s(mName, "Bob");
}

