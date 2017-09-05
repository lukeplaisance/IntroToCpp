//}
//Class Example for Functions 
//int addArrayValues(int myArray[], int arrayLength)
//{
//int sum = 0;
//for (int i = 0; i < arrayLength; i++)
//{
//sum += myArray[i];
//}
//return sum;
//}

//int main()
//{
//int someArray[5] = { 10, 20, 30, 40, 50 };
//std::cout << addArrayValues(someArray, 5) << std::endl;
//system("pause");
//}


 //1. add two numbers
int addNumbers(int a, int b)
{
int result = a + b;
return result;

}
// 2. subtract three numbers

int subThree (int a, int b, int c);
{
int sum = a - b - c;
return sum;

}

// 3. multiply any number by 10

int MultyTen(int a)
{
int product = a * 10;
return product;
}

// 4. Half any value

float HalfValue(float a)
{
float halfnum = a / 2;
return halfnum;
}


//5. Call in all the functions 
std::cout << addNumbers(10, 15) << std::endl;
std::cout << subThree(12, 14, 13) << std::endl;
std::cout << MultyTen(5) << std::endl;
std::cout << HalfValue(7) << std::endl;

