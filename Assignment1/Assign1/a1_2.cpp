#include <iostream>
using namespace std;

int main()
{
	int poundValue;
	int ounceValue;
	cout << "enter pounds: ";
	cin >> poundValue;
	ounceValue = poundValue * 16;
	cout << poundValue + "pounds is " << ounceValue << " ounces." << endl;
}

/*Output:
enter pounds: 4
4 pounds is 64 ounces.
*/