#include "Include.h"
#include <random>
#include "time.h"

int main()
{
	Entity**participants = new Entity*[7];
	participants[0] = new Spartan;
	participants[1] = new Robot;
	participants[2] = new Witcher;
	participants[3] = new Assassin;
	participants[4] = new Ninja;
	participants[5] = new Nord;
	participants[6] = new Soldier;
	int numPlayers = 7;
		
	for (int i = 0; i < 7; i++)
	{
		int current = i;
		int next = rand() % numPlayers;
		Entity* attacker = participants[current];
		Entity* defender = participants[next];
		while (defender->mHealth < 0 && attacker != defender) 
		{
			 next = rand() % numPlayers;
			defender = participants[next];
		}
		attacker->Attack(*defender);
		std::cout << "attacker ";
		attacker->DisplayInfo();
		std::cout << "defender ";
		defender->DisplayInfo();
	}


	

	
	return 0;
}