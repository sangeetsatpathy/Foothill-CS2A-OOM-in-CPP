#include <iostream>
using namespace std;

int main()
{
	double celsius_val;
	double fahrenheit_val;

	cout << "enter degrees Celsius: ";
	cin >> celsius_val;
	fahrenheit_val = (9.0/5.0) * celsius_val + 32;
	cout << celsius_val << " degrees Celsius is " << fahrenheit_val << " degrees Fahrenheit." << endl;
}

/*Output:
enter degrees Celsius: 30
30 degrees Celsius is 86 degrees Fahrenheit.
*/