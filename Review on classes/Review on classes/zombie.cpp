#include "zombie.h"

Zombie::Zombie()
{
	mHealth = 100;
	mAttack = 100;
}
Zombie::Zombie(int life, int power)
{
	mHealth = life;
	mAttack = power;
}
int Zombie::GetHealth()
{
	return mHealth;
}
int Zombie::GetAttack()
{
	return mAttack;
}
void Zombie::SetHealth(int life)
{
	mHealth = life;
}
void Zombie::SetAttack(int power)
{
	mAttack = power;
}
