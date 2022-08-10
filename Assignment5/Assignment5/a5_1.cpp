/*
Assignment 5, Part 1
Sangeet Satpathy
CS2A, Late Spring 2022
6/4/22

This program first prompts the user to enter in how many numbers they will be entering for the set. It then prompts
them to enter each of the numbers. Once enterred, the program then prints out the position of the first and last
7 in the dataset. If there are no 7's in the dataset, it says so.
*/
#include <iostream>
using namespace std;

int main()
{
	const int NUM_TO_CHECK = 7;

	int numEntrees;
	int currentInt;

	int firstPosition;
	int lastPosition;

	bool numHasOccurred = false;
	
	cout << "How many numbers will be entered? ";
	cin >> numEntrees;

	for (int iter = 1; iter <= numEntrees; iter++)
	{
		
		cout << "Enter num: ";
		cin >> currentInt;
		if (currentInt == NUM_TO_CHECK)
		{
			if (numHasOccurred == false) //If this is the first time the number has occurred. 
			{
				firstPosition = iter;
				numHasOccurred = true; // Changes the boolean so the firstPosition can never be reassigned.
			}
			lastPosition = iter; // lastPosition will be reassigned every time the specified number occurs, so by default
			//at the end of the loop, it will hold the last position of that number.
		}
	}

	if (numHasOccurred == false)
	{
		cout << "Sorry, no " << NUM_TO_CHECK << "'s were entered." << endl;
	}
	else {
		cout << "The first " << NUM_TO_CHECK << " was in position " << firstPosition << endl;
		cout << "The last " << NUM_TO_CHECK << " was in position " << lastPosition << endl;
	}

}

/*
Output 1:
How many numbers will be entered? 8
Enter num: 5
Enter num: 7
Enter num: 6
Enter num: 7
Enter num: 7
Enter num: 3
Enter num: 8
Enter num: 6
The first 7 was in position 2
The last 7 was in position 5

Output 2:
How many numbers will be entered? 8
Enter num: 5
Enter num: 2
Enter num: 6
Enter num: 7
Enter num: 1
Enter num: 3
Enter num: 8
Enter num: 6
The first 7 was in position 4
The last 7 was in position 4

Output 3:
How many numbers will be entered? 8
Enter num: 5
Enter num: 1
Enter num: 6
Enter num: 5
Enter num: 9
Enter num: 3
Enter num: 8
Enter num: 6
Sorry, no 7's were entered.
*/