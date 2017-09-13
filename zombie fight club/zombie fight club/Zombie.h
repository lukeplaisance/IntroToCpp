#pragma once

class Zombie
{
private:
	int mHealth;
	int mStrength;
	char mName[255];
public:
	Zombie();
	Zombie(char arena[]);
	void ModHealth(int health);
};