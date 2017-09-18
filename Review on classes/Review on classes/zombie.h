#pragma once

class Zombie
{
private:
	int mHealth;
	int mAttack;
public:
	Zombie(); // sets health and attack to 100
	Zombie(int life, int power); // sets health and attack values passed in
	int GetHealth(); // returns value of Health
	int GetAttack(); // returns value of attack
	void SetHealth(int life); // sets value of health
	void SetAttack(int power); // sets value of attack
};
