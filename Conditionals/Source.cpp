#include <iostream>

int main()
{
	bool a, b;
	//1.
	a = false;
	b = false;
	if (a == b)
	{
		std::cout << "A and B are equal\n";
	}
	//2.
	a = true;
	b = !a && true;
	if ((a == b) && !a)
	{
		std::cout << "Condition ((a == b) || a) is true";
	}
	else
	{
		std::cout << "Condition((a == b) || a) is false";
	}

	//4.
	a = !true || !false;
	b = false && true;
	if (a == b)
	{
		std::cout << "A is equal to B\n";
	}
	else if (a != b && 1 + 2 == 3)
	{
		std::cout << "(a != b && 1 + 2 + 3) evaluates to true";
	}
	else
	{
		std::cout << "Nothing is true";
	}

	int classSize = 10;

	std::cin >> classSize;

	switch (classSize)
	{
	case 10:
		std::cout << "Calss is full\n";
		break;
	case 8:
		std::cout << "We are missing some students\n";
	case 6:
		std::cout << "So many empyt seats\n";
		break;
	default:
		if (classSize > 10)
			std::cout << "Class is over filled";

		break;
	}


	//1. What do the following conditionals evaluate to if "A = true and B = false"
	// A || B
	 //true
	// A || B
	 //true
	// !A
	 //false
	// !(A && A)
	 //false
	// B && A
	 //false
	//(!B || A)
	// true

	//2. Write an if statement that assigns 100 to the value of x when y is equal to zero

	{
		int x = 100;
		int y = 0;
		if (int x = 100)
			std::cout << "y is eqaul to 0";

		
		
	}















  //3. Write a program that accepts an integer that represents the month of the year. 
	//It should then display the number of days in that month. If a number that doesn’t correspond 
	//to a month is entered then the program should display an error message. You must use a switch statement

	int userinputMonth;
	int days = 0;
	std::cout << "Enter a number for the month \n";
	std::cin >> userinputMonth;
	switch (userinputMonth)
	{
		int userinputMonth;
		int days = 0;
		std::cout << "Enter a number for the month \n";
		std::cin >> userinputMonth;
		switch (userinputMonth)
		{
		case 1:
			std::cout << "January has 31 days";
			break;
		case 2:
			std::cout << "Febuary has 28 days";
			break;
		case 3:
			std::cout << "March has 31 days";
			break;
		case 4:
			std::cout << "April has 30 days";
			break;
		case 5:
			std::cout << "April has 31 days";
			break;
		case 6:
			std::cout << "June has 30 days";
			break;
		case 7:
			std::cout << "July has 31 days";
			break;
		case 8:
			std::cout << "August has 31 days";
			break;
		case 9:
			std::cout << "September has 30 days";
			break;
		case 10:
			std::cout << "October has 31 days";
			break;
		case 11:
			std::cout << "November has 30 days";
			break;
		case 12:
			std::cout << "December has 31 days";
			break;


		}
		


	//4. Redo problem 3 using if statements

	int userinputMonth;
	int days = 0;
	std::cout << "Enter a number for the month \n";
	std::cin >> userinputMonth;
	{
	
	if(userinputMonth = 1)
		std::cout << "January has 31 days";
	
		else if (userinputMonth = 2)
		std::cout << "Febuary has 28 days";
		
		else if (userinputMonth = 3)
		std::cout << "March has 31 days";
		
		else if (userinputMonth = 4)
		std::cout << "April has 30 days";
		
		else if (userinputMonth = 5)
		std::cout << "April has 31 days";
		
		else if (userinputMonth = 6)

	    std::cout << "June has 30 days";
		
		else if (userinputMonth = 7)
		std::cout << "July has 31 days";
		
		else if (userinputMonth = 8)
		std::cout << "August has 31 days";
		
		else if (userinputMonth = 9)
		std::cout << "September has 30 days";
		
		else if (userinputMonth = 10)
		std::cout << "October has 31 days";
	
		else if (userinputMonth = 11)
		std::cout << "November has 30 days";

		else if (userinputMonth = 12)
		std::cout << "December has 31 days";
		break;


	}

	//5. Convert problem 2 into a ternary operator

//int x = (y == 0) ? 100 : 9;



}

