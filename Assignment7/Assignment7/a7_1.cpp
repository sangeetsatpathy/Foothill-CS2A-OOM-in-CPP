/*
Sangeet Satpathy
Assignment 7, Part 1
6/10/22
CS2A Late Spring 2022

This is a simple math program which allows the user to customize their problem sets. There are 3 problem sets,
one for addition, one for subtracting, and one for multiplication. The user can change the number of problems
per set and the maximum number that can be generated. The program keeps track of the number of correct answers
and prints out a report at the end of all 3 sets.*/

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;





/* generateOperands() generates 2 random numbers within a range from 0 to a given number. The given number is
int maxNum. The two numbers are outputted via reference integers, int numbOne and int numbTwo.*/
void generateOperands(int &numbOne, int &numbTwo, int maxNum)
{
	numbOne = rand() % (maxNum+1);
	numbTwo = rand() % (maxNum+1);
}






/* calculateCorrectAnswer() calculates the correct answer of a problem, given the two numbers, int numbOne and int
numbTwo, as well as char operation, the operation being performed on these numbers. The correct answer is
outputted via a reference parameter, int correctAnswer.
*/
void calculateCorrectAnswer(int numbOne, int numbTwo, int &correctAnswer, char operation)
{
	if (operation == '+')
	{
		correctAnswer = numbOne + numbTwo;
	}
	else if (operation == '-')
	{
		correctAnswer = numbOne - numbTwo;
	}
	else if (operation == '*')
	{
		correctAnswer = numbOne * numbTwo;
	}
	
}






/* checkAnswer() checks the user's answer based on the problem and accordingly prints out if the answer
was correct or not. It also iterates the number of correct answers in the set, int setNumCorrect, which is the
3rd parameter. int correctAnswer is the correctAnswer to the problem and int userAnswer is the answer that the
user provided.*/
void checkAnswer(int correctAnswer, int userAnswer, int &setNumCorrect)
{
	if (correctAnswer == userAnswer)
	{
		cout << "correct" << endl;
		setNumCorrect += 1;
	}
	else {
		cout << "incorrect" << endl;
	}
}






/* doOneProblem() is reponsible for one problem in a math set. It takes in 3 parameters, char operation, which is the
operation the problem is using (+, -, *), int maxNum, which is the maximum number that can be generated for operands,
and reference integer numCorrect, which represents the number of answers the user got correct in the whole set.*/
void doOneProblem(char operation, int maxNum, int &numCorrect)
{
	int numbOne;
	int numbTwo;
	int userAnswer;
	int correctAnswer;
	generateOperands(numbOne, numbTwo, maxNum);
	calculateCorrectAnswer(numbOne, numbTwo, correctAnswer, operation);
	cout << numbOne << " " << operation << " " << numbTwo << " = ";
	cin >> userAnswer;
	checkAnswer(correctAnswer, userAnswer, numCorrect);
	
}






/* printHeader() prints a header for each set based on the operation of choice. The operation is provided
through the only parameter, char operation.*/
void printHeader(char operation)
{	
	cout << endl;
	if (operation == '+')
	{
		cout << "Set #1" << endl;
	}
	else if (operation == '-')
	{
		cout << "Set #2" << endl;
	}
	else if (operation == '*')
	{
		cout << "Set #3" << endl;
	}
	cout << "----------" << endl;
}






/* getMaxNum() prompts the user to enter the maximum number for the set. It has one parameter, maxNum,
which is a reference integer. This is what the user's input is stored into and passed back to the caller.*/
void getMaxNum(int& maxNum)
{
	cout << "What is the maximum number for this set? ";
	cin >> maxNum;
}






/* doOneSet() is reponsible for one set of math problems. It takes in char operation, which represents the
operation being performed (+, -, *), int probsPerSet, which is the number of problems in the set, and
reference integer int numCorrect, which represents the number of correct answers the user gets in this set.*/
void doOneSet(char operation, int probsPerSet, int &numCorrect)
{
	int maxNum;
	numCorrect = 0;
	printHeader(operation);
	getMaxNum(maxNum);
	for (int iter = 0; iter < probsPerSet; iter++)
	{
		doOneProblem(operation, maxNum, numCorrect);
	}
}






/* getProbsPerSet() prompts the user to enter the number of problems per set. This input is stored in the function's
reference parameter, int probsPerSet.*/
void getProbsPerSet(int& probsPerSet)
{
	cout << "Enter problems per set: ";
	cin >> probsPerSet;
}






/*printReport() prints a report of number of correct answers the user had in each set and overall, along with the 
percentages. Takes in 4 parameters - doubles correctAddition, correctSubtraction, and correctMultiplication, which 
represent the number of correct answers the user responded with for each operation,as well as an integer, probsPerSet. 
probsPerSet represents the number of problems in each set.*/
void printReport(double correctAddition, double correctSubtraction, double correctMultiplication, int probsPerSet)
{
	double totalCorrect = correctAddition + correctSubtraction + correctMultiplication;
	int totalProblems = probsPerSet * 3;
	cout << "Set #1: You got " << correctAddition << " correct out of " << probsPerSet << " for "
		<< fixed << setprecision(1) << 100 * (correctAddition / probsPerSet) << "%" << endl;
	cout << "Set #2: You got " << setprecision(0) << correctSubtraction << " correct out of " << probsPerSet 
		<< " for "<< fixed << setprecision(1) << 100 * (correctSubtraction / probsPerSet) << "%" << endl;
	cout << "Set #3: You got " << setprecision(0) << correctMultiplication << " correct out of " << probsPerSet 
		<< " for " << fixed << setprecision(1) << 100 * (correctMultiplication / probsPerSet) << "%" << endl;
	cout << "Overall you got " << setprecision(0) << totalCorrect << " out of " << totalProblems << " for "
		<< fixed << setprecision(1) << 100 * (totalCorrect / totalProblems) << "%" << endl;
}






int main()
{
	int probsPerSet;
	int correctAddition;
	int correctSubtraction;
	int correctMultiplication;
	srand(static_cast<unsigned>(time(0)));
	getProbsPerSet(probsPerSet);
	doOneSet('+', probsPerSet, correctAddition);
	doOneSet('-', probsPerSet, correctSubtraction);
	doOneSet('*', probsPerSet, correctMultiplication);
	printReport(correctAddition, correctSubtraction, correctMultiplication, probsPerSet);
}

/*
Output:

Enter problems per set: 3

Set #1
----------
What is the maximum number for this set? 10
3 + 0 = 3
correct
5 + 8 = 13
correct
2 + 4 = 3
incorrect

Set #2
----------
What is the maximum number for this set? 15
6 - 3 = 3
correct
13 - 2 = 11
correct
9 - 0 = 9
correct

Set #3
----------
What is the maximum number for this set? 50
14 * 25 = 350
correct
7 * 27 = 24
incorrect
35 * 24 = 245
incorrect
Set #1: You got 2 correct out of 3 for 66.7%
Set #2: You got 3 correct out of 3 for 100.0%
Set #3: You got 1 correct out of 3 for 33.3%
Overall you got 6 out of 9 for 66.7%

*/