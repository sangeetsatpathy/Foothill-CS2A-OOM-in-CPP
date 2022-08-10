#include <iostream>
#include <string>
using namespace std;
int main()
{
	string fname;
	string mname;
	string lname;
	string finitial;
	string minitial;
	string linitial;
	string three_middle;
	string fullname;
	string eighth_letter;

	cout << "Enter a name in the format First Middle Last: ";
	cin >> fname;
	cin >> mname;
	cin >> lname;
	cout << fname << endl;
	cout << mname << endl;
	cout << lname << endl;
	finitial = fname.substr(0, 1);
	minitial = mname.substr(0, 1);
	linitial = lname.substr(0, 1);
	cout << finitial;
	cout << minitial;
	cout << linitial << endl;
	three_middle = mname.substr(0, 3);
	cout << three_middle << endl;
	fullname = fname + " " + mname + " " + lname;
	eighth_letter = fullname.substr(7, 1);
	cout << eighth_letter << endl;
	cout << fullname.length() << endl;
}
/*Output:
Enter a name in the format First Middle Last: James Tiberius Kirk
James
Tiberius
Kirk
JTK
Tib
i
19
*/