/*
Assignment 5, Part 2
Sangeet Satpathy
CS2A, Late Spring 2022
6/4/22

This program keeps asking the user to enter a number. The program then calculates the sum of all the squares of the numbers
below the inputted number. Inputting a number less than 1 into the prompt exits the program.
*/
#include <iostream>
using namespace std;

int main()
{
	int inputNumber;
	int sum;

	cout << "Enter a number greater than 0 (less than 1 to quit): ";
	cin >> inputNumber;
	while (inputNumber >= 1) {
		sum = 0;

		for (int iter = 1; iter <= inputNumber; iter++)
		{
			int squaredNum = iter * iter;
			sum += squaredNum;
		}

		cout << "The sum of the squares from 1 to " << inputNumber << " is " << sum << endl;

		cout << "Enter a number greater than 0 (less than 1 to quit): ";
		cin >> inputNumber;
	}
	
}
/*
Output:
Enter a number greater than 0 (less than 1 to quit): 4
The sum of the squares from 1 to 4 is 30
Enter a number greater than 0 (less than 1 to quit): 1
The sum of the squares from 1 to 1 is 1
Enter a number greater than 0 (less than 1 to quit): 0
*/