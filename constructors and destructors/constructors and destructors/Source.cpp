#include <iostream>
#include "Point2D.h"
#include "Player.h" 



int main()
{
	Point2D testOne;
	Point2D testTwo(1.9f, 3.5f);

	Point2D testThree = testOne.Add(testTwo);
	Point2D testFour = testThree.Add(testTwo);

	Player playerOne;
	Player playerTwo(testTwo, "Luke");
	Player playerThree(Point2D(1, 5), "Bob");

	bool test = playerOne.LevelUp();
	
	playerOne.MovePlayer(Point2D(2, 1));


	system("pause");
}