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
	strcpy_s(mName, name);
	mLevel = 1;
}

bool Player::LevelUp()
{
	mLevel = (mLevel < 110) ? mLevel += 1 : false;
	return mLevel;
}

void Player::MovePlayer(Point2D direction)
{
	Point2D newPos = mPos.Add(direction);
	mPos = newPos;
}
