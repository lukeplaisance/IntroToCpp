#include <iostream>
#include "Player.h"

int main()
{
	/*Player luke;
	luke.mHealth = 100;
	luke.mGender = true;
	luke.mLevel = 15;
	luke.mResource = 150;

	luke.TakeDamage(10);
	luke.ModifyLevel(-10);
	*/

	Vehicle car;
	car.mNumDoors = 2;
	car.mWheels = 4;
	car.mNumSpeed = 45;
	car.mIsEngineOn = true;
	
	strcpy_s(car.mMaker, "Subaru");
	strcpy_s(car.mModel, "BRZ");

	car.ModSpeed(15);
	car.EngineOn();
	


	Vehicle carArray[5];


	system("pause");
}



