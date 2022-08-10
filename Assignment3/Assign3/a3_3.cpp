/*Sangeet Satpathy
CS2A Late Spring Semester
5/28/22
Assignment 3 Part 3

This program serves as a basic calculator. It asks the user for a number, then the operator, then a second number.
It then prints out the answer, rounded to 2 decimal places.*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	int a;
	int b;
	double answer;

	char operation;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter operation: ";
	cin >> operation;
	cout << "Enter second number: ";
	cin >> b;

	switch (operation)
	{
		//cout << fixed << showpoint;
		//cout << setprecision(2);
		case '+':
			answer = a + b;
			break;
		case '-':
			answer = a - b;
			break;
		case 'x':
			answer = a * b;
			break;
		case '/':
			answer = a / b;
			break;
	}
	cout << "The answer is " << fixed << setprecision(2) << answer << endl;
}

/*
Output:
Enter first number: 10
Enter operation: -
Enter second number: 3
The answer is 7.00
*/