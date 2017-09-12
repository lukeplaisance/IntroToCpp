#include "Player.h"

/*void Player::TakeDamage(int amount)
{
	mHealth -= amount;
}

void Player::ModifyLevel(int value)
{
	mLevel -= value;
}
*/

void Vehicle::ModSpeed(int speed)
{
	mNumSpeed += speed;
}

void Vehicle::EngineOn()
{
	mIsEngineOn = !mIsEngineOn;
}