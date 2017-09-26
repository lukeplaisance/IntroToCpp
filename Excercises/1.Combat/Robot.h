#pragma once
#include "Entity.h"
class Robot : public Entity
{
public:
	Robot();
	~Robot();
	//To attack th other will lose health based on this classes damage
	virtual void Attack(Entity& other) override;
	//To defend we will mitigate damage taken using the mArmor variable
	virtual void Defend(int damage) override;
};
Robot::Robot()
{
	mName = "Zero";
	mHealth = rand() % 1000000;
	mDamage = rand() % 1000000;
	mArmor = rand() % 1000000;
	mSpeed = rand() % 1000000;
}
Robot::~Robot()
{
}
void Robot::Attack(Entity & other)
{
	Entity::Attack(other);
}
void Robot::Defend(int damage)
{
	Entity::Defend(damage);
}