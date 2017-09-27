#include "Player.h"

Player::Player()
{
	mHealth = 100;
	mPosition = new Point2D();
}

Player::Player(char * name)
{
	mName = name;
	mPosition = new Point2D();
}

void Player::Move(char direction)
{
	if (direction == 'w' || 'W')
	{
		*mPosition = *mPosition + Point2D(0, 1);
	}
	else if (direction == 'a' || 'A')
	{
		*mPosition = *mPosition + Point2D(-1, 0);
	}
	else if (direction == 's' || 'S')
	{
		*mPosition = *mPosition + Point2D(0, -1);
	}
	else if (direction == 'd' || 'D')
	{
		*mPosition = *mPosition + Point2D(1, 0);
	}
}

void Player::SetPosition(Point2D * newPos)
{
	mPosition = newPos;
}
