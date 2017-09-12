#pragma once
/*class Player
{
public:
	int mHealth;
	char mName;
	int mResource;
	int mLevel;
	bool mGender;

	void TakeDamage(int amount);
	void ModifyLevel(int value);
};
*/

class Vehicle
{
public:
	int mNumSpeed;
	int mNumDoors;
	int mWheels;
	char mMaker[255];
	char mModel[255];
	bool mIsEngineOn;

	void ModSpeed(int speed);
	void EngineOn();
};