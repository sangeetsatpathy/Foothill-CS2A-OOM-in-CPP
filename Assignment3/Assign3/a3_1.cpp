/* Sangeet Satpathy
* CS2A Late Spring 2022
* 5/28/22
* Assignment 3 Part 1
* 
* A simple program which calculates the area of either a triangle or square. 
* The user is asked if the shape they want is a triangle or square, then accordingly
* asks them for inputs and calculates the area.
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	string type;
	double area;

	cout << "Enter the type of figure (s or t): ";
	cin >> type;
	if (type == "s") {
		double sideLength;
		cout << "Enter the length of a side: ";
		cin >> sideLength;
		area = sideLength * sideLength;
	}
	else {
		double base;
		double height;
		cout << "Enter the base: ";
		cin >> base;
		cout << "Enter the height: ";
		cin >> height;
		area = (base * height) / 2;
	}
	cout << fixed << setprecision(1) << "The area is " << area << endl;
}

/*
Output 1: 

Enter the type of figure (s or t): t
Enter the base: 7
Enter the height: 3
The area is 10.5

Output 2:

Enter the type of figure (s or t): s
Enter the length of a side: 9
The area is 81.0
*/