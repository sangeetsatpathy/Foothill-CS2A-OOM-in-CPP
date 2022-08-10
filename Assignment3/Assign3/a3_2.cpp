/* Sangeet Satpathy
* CS2A Late Spring 2022
* 5/28/22
* Assignment 3 Part 1
*
This program asks the user for the number of years of school they have been in.
It then utilizes if-else statements to print out the school level they are in.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int yearsOfSchool;
	string message;
	cout << "Enter years of school: ";
	cin >> yearsOfSchool;
	if (yearsOfSchool > 12) {
		message = "college";
	}
	else if (yearsOfSchool >= 9)
	{
		message = "high school";
	}
	else if (yearsOfSchool >= 7)
	{
		message = "middle school";
	}
	else if (yearsOfSchool >= 1)
	{
		message = "elementary school";
	}
	else if (yearsOfSchool == 0)
	{
		message = "no school";
	}
	else {
		message = "years of school must be a non-negative integer";
	}
	cout << message << endl;
}

/*
Output:
Enter years of school: -3
years of school must be a non-negative integer
*/