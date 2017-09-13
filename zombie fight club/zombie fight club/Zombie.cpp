#include <iostream>
#include "Zombie.h"

Zombie::Zombie(char arena[])
{
	strcpy_s(mName, arena);
}

void Zombie::ModHealth(int health)
{
	mHealth -= health;
}

void Zombie::ModStrength(int strength)
{
	mStrength += strength;
}
Zombie::Zombie()
{
	mHealth = 100;
	mStrength = 50;
	strcpy_s(mName, "default");
}