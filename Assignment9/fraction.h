/*
Assignment 9 Part 1
Sangeet Satpathy
6/19/22
CS2B Late Spring 2022

Header file for Fraction Class.
*/

#ifndef FRACTION_H
#define FRACTION_H

/*
This class, Fraction, represents a non-reducable fraction. Fractions can be set, added, subtracted,
multiplied, divided, and can they can be checked for if 2 fractions are equal. 
Fraction has the following public methods:

Fraction();
	post: creates a Fraction object with numerator set to 0 and denominator set to 1.

Fraction(int numer, int denom);
	pre: denom cannot be 0, as no number can be divided by 0.
	post: Fraction object created with numerator set to numer and denominator set to denom.

Fraction addedTo(const Fraction& frac) const;
	post: Returns a Fraction object that stores the fractional value which is the sum of this 
	Fraction and the Fraction provided in the parameter.

Fraction subtract(const Fraction& frac) const;
	post: Returns a Fraction object that stores the fractional value which is the difference of this
	Fraction and the Fraction provided

Fraction multipliedBy(const Fraction& frac) const;
	post: Returns a Fraction object storing the product of this fraction and the Fraction given 
	as the parameter.

Fraction dividedBy(const Fraction& frac) const;
	post: Returns a Fraction object storing the quotient of this Fraction and the Fraction given
	as the parameter.

bool isEqualTo(const Fraction& frac) const;
	post: Returns true if the Fraction given in the parameter is equivalent to this Fraction, and false
	if otherwise.

void print() const;
	post: Prints the numerator and denominator of the Fraction object.
*/

class Fraction {
public:
	Fraction();
	Fraction(int numer, int denom);
	Fraction addedTo(const Fraction& frac) const;
	Fraction subtract(const Fraction& frac) const;
	Fraction multipliedBy(const Fraction& frac) const;
	Fraction dividedBy(const Fraction& frac) const;
	bool isEqualTo(const Fraction& frac) const;
	void print() const;
private:
	int numerator;
	int denominator;
	void simplify();
}; 
#endif