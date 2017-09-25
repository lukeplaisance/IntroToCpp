#pragma once
class Point2D
{
	float mX;
	float mY;
public:
	Point2D();
	Point2D(float x, float y);
	Point2D operator + (const Point2D & other);
	Point2D operator - (const Point2D & other);
	Point2D operator * (const Point2D & other);
	Point2D operator * (float other);
	float GetX();
	float GetY();
	void PrintPoint();
	bool operator ==(const Point2D & other);
};
class Player
{
	char* mName;
	Point2D mPosition;
	int mHealth;
public:
	Player();
	Player(char* name);
	void Move(char position);
	void SetPosition(Point2D* newPos);
};