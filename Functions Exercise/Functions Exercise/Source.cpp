//Functions
//All functions must have a prototype above the main function and be defined below.
//1. Find the error in each of the following functions and explain how to fix them.
//DO NOT PUT THE CODE INTO VISUAL STUDIO
//a. 

int sum(int x, int y)
{
int result;
result = x + y;
}

//b. 

int sum(int n)
{
if (0 == n)
return 0;
else
n = n + n;
}

//c.

#include <iostream>
int main()
{
double x = 13.6;
std::cout << "square of 13.6 = " << square(x) << std::endl;
}
int square (int x)
{
return x * x;
}

//2. Create a function for each of the following math operators. They must return a value.
//and take in at least two argument. Once all the functions have been created you will need to 
//invoke them and print out the return.
//a. Addition
//b. Subtraction
//c. Multiplication
//d. Division
//3. Create a function that takes in two arguments, one beign an array of float and the other
//being the size of the array. It must return the largest value in the array.
//4. Using recursion write a function that prints out the Fibonacci sequence.
//5. The following statement calls a function named Half. The Half function returns a value that 
//is half that of the argument. Write the function.
//6. Write a function that takes as its parameters an array of integers and the size of the array 
// and returns the sum of the values in the array.
