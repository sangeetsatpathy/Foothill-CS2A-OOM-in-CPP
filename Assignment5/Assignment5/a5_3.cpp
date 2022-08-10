/*Assignment 5, Part 1
Sangeet Satpathy
CS2A, Late Spring 2022
6 / 4 / 22

This program counts the number of words in several text files. It will keep asking the user to enter the name of the file.
If they enter 'quit', it will exit the program. After each inputted filename, the number of words will be printed. If
there was an error in opening the file, i.e the file doesn't exist, the program says so.
*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string str;
	ifstream file;
	

	string filename;
	cout << "Enter name of the file('quit' to exit): ";
	cin >> filename;

	while (filename != "quit")
	{
		int wordCount = 0;
		file.open(filename);

		if (!file) {
			cout << "Couldn't open file. Maybe you inputted an incorrect file name." << endl;
		}
		else {
			file >> str;
			while (file)
			{
				wordCount++;
				file >> str;
			}
		}
		
		cout << filename << " has " << wordCount << " words in it." << endl; // why does 
		file.close();

		cout << "Enter name of the file('quit' to exit): ";
		cin >> filename;
	}
}

/*
Output:
Enter name of the file('quit' to exit): file1.txt
file1.txt has 7 words in it.
Enter name of the file('quit' to exit): file2.txt
file2.txt has 10 words in it.
Enter name of the file('quit' to exit): file3.txt
file3.txt has 21 words in it.
Enter name of the file('quit' to exit): file4.txt
file4.txt has 19 words in it.
Enter name of the file('quit' to exit): file5.txt
file5.txt has 22 words in it.
Enter name of the file('quit' to exit): quit
*/