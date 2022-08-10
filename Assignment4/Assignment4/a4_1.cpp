/*
Sangeet Satpathy
CS2A - Late Spring 2022
Assignment 4, Part 1
5/29/22

This program is a revision of the program in Assignment 1, which converts pounds to ounces.
However, it will ask the user after every conversion whether they have another value they would
like to convert.
*/

#include <iostream>
using namespace std;

int main()
{
	char exitStatus = 'Y';
	while (exitStatus == 'Y') 
	{
		int poundValue;
		int ounceValue;
		cout << "enter pounds: ";
		cin >> poundValue;
		ounceValue = poundValue * 16;
		cout << poundValue + "pounds is " << ounceValue << " ounces." << endl;
		cout << "Is there another value you want to convert? (Y/N)";
		cin >> exitStatus;
	}
	
}

/*
Output:
enter pounds: 3
nds is 48 ounces.
Is there another value you want to convert? (Y/N)Y
enter pounds: 5
s is 80 ounces.
Is there another value you want to convert? (Y/N)Y
enter pounds: 3
nds is 48 ounces.
Is there another value you want to convert? (Y/N)N
*/