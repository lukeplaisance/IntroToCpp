#include <iostream>
#include "Point2D.h"
//#include "Player.h"
//
//
//int main()
//{
//	/*Person Luke;
//	Luke.DisplayInfo();
//	float* color = new float[3]{ 255, 255, 255 };
//	Person Teacher = Person("Matt", 100, color);
//	Teacher.DisplayInfo();*/
//	
//
//	system("pause");
//
int main()
{
	Point2D pos1;
	Point2D pos2(2, 2);
	Point2D newPos1 = pos1 + pos2;
	Point2D newPos2 = pos1 - pos2;
	Point2D newPos3 = pos1 * pos2;
	Point2D newPos4 = pos1 * 2;
	std::cout << newPos3.GetX() << std::endl;
	std::cout << newPos4.GetY() << std::endl;



	system("pause");
}