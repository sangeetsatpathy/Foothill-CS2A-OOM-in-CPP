/*
Sangeet Satpathy
Assignment 6
CS2A Late Spring 2022
6/6/22

This program draws a rocket, consisting of 2 cones at the top and bottom and several boxes called "phases".
*/

#include <iostream>
using namespace std;

/*
drawCone() takes one integer as a parameter, stageWidth, which is the width of the stages of the rocket. 
It then draws a cone based on that width. 
*/
void drawCone(int stageWidth)
{
	int cols = stageWidth;
	int rows;
	if (stageWidth % 2 == 0)
	{
		rows = cols / 2;
		int firstMiddleCol = cols / 2; // this refers to the first middle column
		int secondMiddleCol = (cols / 2) + 1;

		for (int rowNum = 0; rowNum < rows; rowNum++) // rows are numbered from 0 to n-1
		{
			for (int colNum = 1; colNum <= cols; colNum++) // cols are numbered from 1 to n
			{
				if ((colNum == secondMiddleCol + rowNum) || (colNum == firstMiddleCol - rowNum))
				{
					cout << "X";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	else
	{
		rows = (cols / 2) + 1;
		int middleCol = (cols / 2) + 1;
		for (int rowNum = 0; rowNum < rows; rowNum++) // rows are numbered from 0 to n-1
		{
			for (int colNum = 1; colNum <= cols; colNum++) // cols are numbered from 1 to n
			{
				if ((colNum == middleCol + rowNum) || (colNum == middleCol - rowNum))
				{
					cout << "X";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	
}






/*
drawHorizontalLine() takes in one integer as a parameter, stageWidth, which is the width of a stage. This function
draws a horizontal line, which is a necessity in order to draw a single phase of the rocket.
*/
void drawHorizontalLine(int stageWidth)
{
	int count;

	for (count = 0; count < stageWidth; count++) {
		cout << "X";
	}
	cout << endl;
}





/*
drawOneRow() takes in one integer as a parameter, stageWidth, which is the width of a stage of the rocket.
This function is a helper function - it draws a single row of 2 vertical lines. By calling this function
several times, you can create 2 vertical lines.
*/
void drawOneRow(int stageWidth)
{
	int spaceCount;

	cout << "X";
	for (spaceCount = 0; spaceCount < stageWidth-2; spaceCount++) {
		cout << " ";
	}
	cout << "X" << endl;
}






/*
draw2VerticalLines() takes two integers as parameters - stageHeight, the height of a stage in the rocket, and
stageWidth, the width of a stage in the rocket. This function draws 2 vertical lines within the stage of the rocket.
*/
void draw2VerticalLines(int stageHeight, int stageWidth)
{
	int rowCount;

	for (rowCount = 0; rowCount < stageHeight-2; rowCount++) {
		drawOneRow(stageWidth);
	}
}





/*
drawBox() takes in two integers as parameters, stageHeight, which is the height of the rocket stage,
and stageWidth, which is the width of the rocket stage. This function draws one stage of the rocket, which
is just a box of the specified height and width.
*/
void drawBox(int stageHeight, int stageWidth)
{
	drawHorizontalLine(stageWidth);
	draw2VerticalLines(stageHeight, stageWidth);
	drawHorizontalLine(stageWidth);
}




/*
drawRocket() takes in 3 integers as parameters, stageHeight, the height of a stage, stageWidth, the width of 
a stage, and numStages, which is the number of stages present in the rocket. This function utilizes several
other functions to draw a full rocket.
*/
void drawRocket(int stageHeight, int stageWidth, int numStages)
{
	drawCone(stageWidth);
	for (int boxCount = 0; boxCount < numStages; boxCount++)
	{
		drawBox(stageHeight, stageWidth);
	}
	drawCone(stageWidth);
}




/*
getDimensions() takes in 3 integers as parameters which are reference types. This function prompts the user to
enter in values to assign to these parameters, which will then be sent back to the main function and utilized
as the values used to draw the rocket.
*/
void getDimensions(int &stageHeight, int &stageWidth, int &numStages)
{
	cout << "Enter stage width: ";
	cin >> stageWidth;
	cout << "Enter stage height: ";
	cin >> stageHeight;
	cout << "Enter the number of stages in the rocket: ";
	cin >> numStages;
}






int main()
{
	int stageWidth;
	int stageHeight;
	int numStages;

	getDimensions(stageHeight, stageWidth, numStages);
	drawRocket(stageHeight, stageWidth, numStages);
}

/*
Output 1 (odd):

Enter stage width: 5
Enter stage height: 6
Enter the number of stages in the rocket: 2
  X
 X X
X   X
XXXXX
X   X
X   X
X   X
X   X
XXXXX
XXXXX
X   X
X   X
X   X
X   X
XXXXX
  X
 X X
X   X

Output 2(even):
Enter stage width: 6
Enter stage height: 6
Enter the number of stages in the rocket: 2
  XX
 X  X
X    X
XXXXXX
X    X
X    X
X    X
X    X
XXXXXX
XXXXXX
X    X
X    X
X    X
X    X
XXXXXX
  XX
 X  X
X    X
*/