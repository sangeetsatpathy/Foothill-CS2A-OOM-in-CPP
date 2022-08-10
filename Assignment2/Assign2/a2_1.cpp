#include <iostream>
using namespace std;

const int QUARTER_VALUE = 25;
const int DIME_VALUE = 10;
const int NICKEL_VALUE = 5;
const int PENNY_VALUE = 1;

int main()
{
	int penny_val;
	int num_quarters;
	int num_dimes;
	int num_nickels;
	int num_pennies;
	int amountLeft;

	cout << "enter number of cents: ";
	cin >> penny_val;
	
	num_quarters = penny_val / QUARTER_VALUE;
	amountLeft = penny_val % QUARTER_VALUE;

	num_dimes = amountLeft / DIME_VALUE;
	amountLeft = amountLeft % DIME_VALUE;

	num_nickels = amountLeft / NICKEL_VALUE;
	amountLeft = amountLeft % NICKEL_VALUE;

	num_pennies = amountLeft / PENNY_VALUE;

	cout << "pennies: " << num_pennies << endl;
	cout << "nickels: " << num_nickels << endl;
	cout << "dimes: " << num_dimes << endl;
	cout << "quarters: " << num_quarters << endl;
}

/*
Output:
enter number of cents: 119
pennies: 4
nickels: 1
dimes: 1
quarters: 4

*/