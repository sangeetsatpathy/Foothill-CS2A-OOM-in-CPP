/*
Sangeet Satpathy
Assignment 10 Part 1
6/21/22
CS2A Late Spring 2022

This program prompts the user to input several numbers to store into an array. If the number is already stored in
the array, then it will not be added again. The program will keep asking the user to input numbers till they enter
a negative number. The program finally prints out the array, excluding all the extra empty spaces that haven't been
filled.
*/



#include <iostream>
using namespace std;


const int ARRAY_SIZE = 1000;

void readNumbers(int arr[], int& lastIndex);
void printArray(int array[], int lastIndexFilled);


int main()
{
	int lastIndexFilled;
	int inputArray[ARRAY_SIZE];
	readNumbers(inputArray, lastIndexFilled);
	printArray(inputArray, lastIndexFilled);
}






//Given an array (int arr[]), a number(int num), and the last index filled in the array(int lastIndexFilled), 
//numInArray() returns True if the number is already in the array or False if the number is not.
bool numInArray(int num, int arr[], int lastIndexFilled)
{
	for (int i = 0; i <= lastIndexFilled; i++)
	{
		if (arr[i] == num)
		{
			return true;
		}
	}
	return false;
}





//2 parameters - int arr[] and a reference integer, lastIndex, which is the last filled out index of the array. 
//readNumbers prompts the user to enter several numbers to input to the array. After inputting each accepted integer,
// it increments lastIndex.
void readNumbers(int arr[], int &lastIndex)
{
	int lastNumEntered=0;
	lastIndex = 0;
	while (lastNumEntered >= 0)
	{
		cout << "Enter a non-negative integer (negative to quit): ";
		cin >> lastNumEntered;

		bool numberInArray = numInArray(lastNumEntered, arr, lastIndex - 1);

		if (!numberInArray && lastNumEntered>=0)
		{
			arr[lastIndex] = lastNumEntered;
			lastIndex++;
		}
	}
}





//printArray() takes in 2 parameters - int array[], and int lastIndexFilled, which is the last index filled out
//in the array. This function prints all the elements with relevant data values of the array, excluding all the
//blank spaces.
void printArray(int array[], int lastIndexFilled)
{
	for (int i = 0; i < lastIndexFilled; i++) {
		//cout << i << " | ";
		cout << array[i] << " ";
	}
	cout << endl;
}


/*
Output:
Enter a non-negative integer (negative to quit): 1
Enter a non-negative integer (negative to quit): 2
Enter a non-negative integer (negative to quit): 3
Enter a non-negative integer (negative to quit): 2
Enter a non-negative integer (negative to quit): 1
Enter a non-negative integer (negative to quit): 6
Enter a non-negative integer (negative to quit): 3
Enter a non-negative integer (negative to quit): 4
Enter a non-negative integer (negative to quit): 5
Enter a non-negative integer (negative to quit): 2
Enter a non-negative integer (negative to quit): -4
1 2 3 6 4 5
*/