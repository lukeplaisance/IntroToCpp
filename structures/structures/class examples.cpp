
//#include <iostream>

//struct Player
//{
	//int mHealth;
	//int Resource;
	//int mStrength;
	//int mLevel;
	//float mMovementSpeed;
	//int mArmor;
//};

//Player CreatePlayer();
//Player CreatePlayer(int health, int strength, int movementSpeed);

//struct Enemy
//{
	//float mHealth;
	//int mAttackPower;
//};

//struct Student
//{
	//char nName[255];
	//char mId[255];
	//int mAge;
//};



/**/


/*int main()
{

	Student classRoom[7];
	classRoom[0] = { "Zach", "s171", 18 };
	classRoom[1] = { "Luke", "s172", 18 };
	classRoom[2] = { "Matthew", "s173", 18 };
	classRoom[3] = { "TJ", "s174", 21 };
	classRoom[4] = { "Steven", "s175", 19 };
	classRoom[5] = { "Ralenski", "s176", 20 };
	classRoom[6] = { "Brett", "s177", 18 };

	int oldestStudent = 0;
	int oldestAge = classRoom[0].mAge;

	for (int i = 0; i < 7; i++)
	{
		if (classRoom[i].mAge > oldestAge)
		{
			oldestAge = classRoom[i].mAge;
			oldestStudent = i;
		}
	}
	

	system("pause");
}
	Player matthew = {};
	Player steven = CreatePlayer();
	Player tj = CreatePlayer(100, 9001, 420);
	steven = tj;

	Enemy someBody = { 5.5f, 10 };
	Enemy onceToldMe = { 100.0f, 1 };

	while (someBody.mHealth > 0 && onceToldMe.mHealth > 0)
	{
		someBody.mHealth -= onceToldMe.mAttackPower;
		onceToldMe.mHealth -= someBody.mAttackPower;
	}

	system("pause");
}

Player CreatePlayer()
{
	Player newPlayer = {};
	return newPlayer;
}

Player CreatePlayer(int health, int strength, int movementSpeed)
{
	Player newPlayer = {};
	newPlayer.mHealth = health;
	newPlayer.mStrength = strength;
	newPlayer.mMovementSpeed = movementSpeed;
	return newPlayer;
}


*/