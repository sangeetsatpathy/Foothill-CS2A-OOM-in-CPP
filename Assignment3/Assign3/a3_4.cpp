/*Sangeet Satpathy
CS2A Late Spring Semester
5/28/22
Assignment 3 Part 3

This program calculates the cost of calls made, depending on the start time of the call and its duration.
It also takes into account a tax, which is assumed to be 4%.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int starttime;
	int lengthCall;
	double grossCost;
	double netCost;
	double discountedCost;
	double discount = 0;

	cout << "Enter start time: ";
	cin >> starttime;
	cout << "Enter length of call in minutes: ";
	cin >> lengthCall;
	grossCost = 0.4 * lengthCall;
	discountedCost = grossCost;
	if (starttime >= 1800 || starttime < 800)
	{
		discountedCost = 0.5 * discountedCost;
	}
	if (lengthCall > 60)
	{
		discountedCost = 0.85*discountedCost;
	}
	netCost = discountedCost * 1.04; //4% federal tax

	cout << "gross cost: $" << setprecision(2) << fixed << grossCost << endl;
	cout << "net cost: $" << setprecision(2) << fixed << netCost << endl;
}

/*
Output 1:
Enter start time: 2322
Enter length of call in minutes: 67
gross cost: $26.80
net cost: $11.85

Output 2:
Enter start time: 759
Enter length of call in minutes: 10
gross cost: $4.00
net cost: $2.08

Output 3:
Enter start time: 1300
Enter length of call in minutes: 100
gross cost: $40.00
net cost: $35.36

Output 4:
Enter start time: 1300
Enter length of call in minutes: 10
gross cost: $4.00
net cost: $4.16
*/