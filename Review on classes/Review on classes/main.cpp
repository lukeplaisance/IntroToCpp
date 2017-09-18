#include "zombie.h"
#include <iostream>
#include <time.h>

int main()
{
	srand(time(NULL));
	Zombie Zach;
	Zombie Matthew(100, 50);
	while (Matthew.GetHealth() > 0 && Zach.GetHealth() > 0)
	{
		Matthew.SetHealth(Matthew.GetHealth() - Zach.GetAttack());
		Zach.SetHealth(Zach.GetHealth() - Matthew.GetAttack());
	}

	Zombie zombies[5];
	for (int i = 0; i > 5; i++)
	{
		zombies[i].SetHealth(rand() % 10000);
		zombies[i].SetAttack(rand() % 9000);
	}

	

	system("pause");
}