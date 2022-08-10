/*
Sangeet Satpathy
CS2A - Late Spring 2022
Assignment 4, Part 2
5/29/22

This program is a revision of the program in Assignment 1, which converts pounds to ounces.
However, it will keep prompting the user to input a pound value until they enter a negative value,
which exits the program. */

#include <iostream>
using namespace std;

int main()
{
	int poundValue;
	int ounceValue;
	cout << "Enter pounds (enter a negative number to exit): ";
	cin >> poundValue;
	while (poundValue >= 0)
	{
		ounceValue = poundValue * 16;
		cout << poundValue + "pounds is " << ounceValue << " ounces." << endl;
		cout << "Enter pounds (enter a negative number to exit): ";
		cin >> poundValue;
	}

}

/*
Output:
Enter pounds (enter a negative number to exit): 5
s is 80 ounces.
Enter pounds (enter a negative number to exit): 2
unds is 32 ounces.
Enter pounds (enter a negative number to exit): 3
nds is 48 ounces.
Enter pounds (enter a negative number to exit): 0
pounds is 0 ounces.
Enter pounds (enter a negative number to exit): -4
*/