/*
Assignment 9 Part 1
Sangeet Satpathy
6/19/22
CS2B Late Spring 2022

Implementation File for Fraction Class
*/

#include <iostream>
#include <cassert>
#include "fraction.h"
using namespace std;


//This private member function reduces the numerator and denominator of the calling Fraction.
void Fraction::simplify()
{
    int greatestCommonFactor;
    for (int iter = 1; iter <= numerator; iter++)
    {

        if (numerator % iter == 0)
        {
            if (denominator % iter == 0)
            {
                greatestCommonFactor = iter;
            }
        }
    }

    numerator = numerator / greatestCommonFactor;
    denominator = denominator / greatestCommonFactor;
}






Fraction::Fraction()
{
    numerator = 0;
    denominator = 1;
    assert(denominator != 0);
}






Fraction::Fraction(int numer, int denom)
{
    numerator = numer;
    denominator = denom;
    simplify();
}






Fraction Fraction::addedTo(const Fraction& frac) const
{
    Fraction returnFraction;

    int commonDenom = denominator * frac.denominator;

    int multipliedNumerator1 = frac.denominator * numerator;
    int multipliedNumerator2 = denominator * frac.numerator;

    int sum = multipliedNumerator1 + multipliedNumerator2;

    returnFraction = Fraction(sum, commonDenom);
    returnFraction.simplify();
    return returnFraction;
}






Fraction Fraction::subtract(const Fraction& frac) const
{
    Fraction returnFraction;

    int commonDenom = denominator * frac.denominator;

    int multipliedNumerator1 = frac.denominator * numerator;
    int multipliedNumerator2 = denominator * frac.numerator;

    int difference = multipliedNumerator1 - multipliedNumerator2;

    returnFraction = Fraction(difference, commonDenom);
    returnFraction.simplify();
    return returnFraction;
}






Fraction Fraction::multipliedBy(const Fraction& frac) const
{
    Fraction returnFraction;

    int productNumerator = numerator * frac.numerator;
    int productDenominator = denominator * frac.denominator;

    returnFraction = Fraction(productNumerator, productDenominator);
    returnFraction.simplify();
    return returnFraction;
}






Fraction Fraction::dividedBy(const Fraction& frac) const
{
    Fraction flippedFraction;
    Fraction returnFraction;

    int newNumerator2 = frac.denominator;
    int newDenominator2 = frac.numerator;
    flippedFraction = Fraction(newNumerator2, newDenominator2);

    returnFraction = multipliedBy(flippedFraction);
    returnFraction.simplify();
    return returnFraction;
}






bool Fraction::isEqualTo(const Fraction& frac) const
{
    if (denominator * frac.numerator == numerator * frac.denominator)
    {
        return true;
    }
    return false;
}






void Fraction::print() const {
    cout << numerator << "/" << denominator;
}


/*
Output:
The result starts off at 0/1
The product of 9/8 and 2/3 is 3/4
The quotient of 9/8 and 2/3 is 27/16
The sum of 9/8 and 2/3 is 43/24
The difference of 9/8 and 2/3 is 11/24
The two Fractions are not equal.
The product of 3/2 and 2/3 is 1/1
*/
