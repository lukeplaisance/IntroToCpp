#include <iostream>
#include "Point2D.h"
#include "Player.h"

Point2D::Point2D()
{
	mX = 1;
	mY = 1;
}
Point2D::Point2D(float x, float y)
{
	mX = x;
	mY = y;
}

Point2D Point2D::operator+(const Point2D & other)
{
	Point2D temp;
	 temp.mX = mX + other.mX;
	 temp.mY = mY + other.mY;
	 return temp;
}

Point2D Point2D::operator-(const Point2D & other)
{
	Point2D temp;
	temp.mX = mX - other.mX;
	temp.mY = mY - other.mY;
	return temp;
}

Point2D Point2D::operator*(const Point2D & other)
{
	Point2D temp;
	temp.mX = mX * other.mX;
	temp.mY = mY * other.mY;
	return temp;
}

Point2D Point2D::operator*(float other)
{
	Point2D temp;
	temp.mX = mX * other;
	temp.mY = mY * other;
	return temp;
	
}
float Point2D::GetX()
{
	return mX;
}
float Point2D::GetY()
{
	return mY;
}
void Point2D::PrintPoint()
{
	std::cout << "X is :" << mX << std::endl;
	std::cout << "Y is :" << mY << std::endl;
}
bool Point2D::operator == (const Point2D & other)
{
	Point2D temp;
	if (mX == other.mX && mY == other.mY)
	{
		return true;
	}
	else
	{
		return false;
	}

	

}
