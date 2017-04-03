//Assignment 5
//Problem 2 from Assignment3
//Finding the average of 5 specified numbers

#include <iostream>

using namespace std;

int main()

{

//Declaring variables and listing specified numbers
	float num1 = 65.5, num2 = 25.5, num3 = 60.0, num4 = 78.6, num5 = 90.0;
	float sum;
	float avg;
	int numcount;

//Giving "numcount" a value for division
	numcount = 5;

//Assigning variables their functions
	sum = (num1 + num2 + num3 + num4 + num5);
	avg = (sum / numcount);

//Printing result
	cout << avg << endl;

	return 0;

}