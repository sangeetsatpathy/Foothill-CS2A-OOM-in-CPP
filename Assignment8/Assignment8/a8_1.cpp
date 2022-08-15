/*
Assignment 8 Part 1
Sangeet Satpathy
6/15/22
CS2B Late Spring 2022

This class, Fraction, represents a non-reducable fraction. Fractions can be set, added, subtracted,
multiplied, divided, and can they can be checked for if 2 fractions are equal.
*/

#include <iostream>
using namespace std;

class Fraction {
public:
	void set(int numerator, int denominator);
	Fraction addedTo(Fraction frac);
	Fraction subtract(Fraction frac);
	Fraction multipliedBy(Fraction frac);
	Fraction dividedBy(Fraction frac);
	bool isEqualTo(Fraction frac);
	void print();
private:
	int numerator;
	int denominator;
};







void Fraction::set(int numer, int denom) 
{
	numerator = numer;
	denominator = denom;
}






Fraction Fraction::addedTo(Fraction frac)
{
	Fraction returnFraction;

	int commonDenom = denominator * frac.denominator;

	int multipliedNumerator1 = frac.denominator * numerator;
	int multipliedNumerator2 = denominator * frac.numerator;

	int sum = multipliedNumerator1 + multipliedNumerator2;

	returnFraction.set(sum, commonDenom);
	return returnFraction;
}






Fraction Fraction::subtract(Fraction frac)
{
    Fraction returnFraction;

    int commonDenom = denominator * frac.denominator;

    int multipliedNumerator1 = frac.denominator * numerator;
    int multipliedNumerator2 = denominator * frac.numerator;

    int difference = multipliedNumerator1 - multipliedNumerator2;

    returnFraction.set(difference, commonDenom);
    return returnFraction;
}






Fraction Fraction::multipliedBy(Fraction frac)
{
    Fraction returnFraction;

    int productNumerator = numerator * frac.numerator;
    int productDenominator = denominator * frac.denominator;

    returnFraction.set(productNumerator, productDenominator);
    return returnFraction;
}






Fraction Fraction::dividedBy(Fraction frac)
{
    Fraction flippedFraction;
    Fraction returnFraction;

    int newNumerator2 = frac.denominator;
    int newDenominator2 = frac.numerator;
    flippedFraction.set(newNumerator2, newDenominator2);
    
    returnFraction = multipliedBy(flippedFraction);
    return returnFraction;
}






bool Fraction::isEqualTo(Fraction frac)
{
    if (denominator * frac.numerator == numerator * frac.denominator)
    {
        return true;
    }
    return false;
}






void Fraction::print() {
    cout << numerator << "/" << denominator;
}






int main()
{
    Fraction f1;
    Fraction f2;
    Fraction result;

    f1.set(9, 8);
    f2.set(2, 3);

    cout << "The product of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.multipliedBy(f2);
    result.print();
    cout << endl;

    cout << "The quotient of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.dividedBy(f2);
    result.print();
    cout << endl;

    cout << "The sum of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.addedTo(f2);
    result.print();
    cout << endl;

    cout << "The difference of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.subtract(f2);
    result.print();
    cout << endl;

    if (f1.isEqualTo(f2)) {
        cout << "The two Fractions are equal." << endl;
    }
    else {
        cout << "The two Fractions are not equal." << endl;
    }
}


/*
Output:

The product of 9/8 and 2/3 is 18/24
The quotient of 9/8 and 2/3 is 27/16
The sum of 9/8 and 2/3 is 43/24
The difference of 9/8 and 2/3 is 11/24
The two Fractions are not equal.
*/