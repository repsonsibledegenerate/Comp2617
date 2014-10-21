// Assignment 4: Fraction.cpp
// Member-function definitions for class Fraction.
// Author:  Krista Dayton A00808650
// Date: Oct 19, 2014

#include "Fraction.h"
#include "GCD.h" // template function for calculating greatest common divisor
#include <iostream>
using namespace std;
// default ctor
Fraction::Fraction(void)
{
	numerator = 0;
	denominator = 1;
}//Non-Default ctor
//calls the simplify function
Fraction::Fraction(long long num, long long denom)
{
	numerator = num;
	denominator = denom;

	simplify();
}

// will make sure that denominator is positive and
// will invoke gcd() function to reduce fraction
// as much as possible
void Fraction::simplify(void){
	// If the denominator is negative, do a flip of the negatives.
	

	int divisor = gcd(numerator, denominator);

	numerator = numerator / divisor;
	denominator = denominator / divisor;

	if (denominator < 0)
	{
		denominator = -denominator;
		numerator = -numerator;
	}
}

const Fraction & Fraction::plusEq(const Fraction & op){
	numerator = (numerator * op.denominator) + (op.numerator * denominator);
	denominator = denominator * op.denominator;

	simplify();

	return (*this);
}
//Subtracts RHS from the Fraction object invoked with this method
//(thereby modifying the Fraction object) and returns the result)
const Fraction & Fraction::minusEq(const Fraction & op){
	numerator = (numerator * op.denominator) - (op.numerator * denominator);
	denominator = denominator * op.denominator;

	simplify();

	return(*this);
}

//Implementation of the timesEq() member function
//Performs similar operation as the *= operator on the built-in types
const Fraction & Fraction::timesEq(const Fraction & op)
{
	numerator *= op.numerator;
	denominator *= op.denominator;

	simplify(); 

	return (*this); // returns the object which invoked the method
}

const Fraction & Fraction::divideEq(const Fraction & op){
	numerator *= op.denominator;
	denominator *= op.numerator;

	simplify();

	return(*this);
}
// this method reduces the Fraction objects as much
// as possible.  It also ensures that the denominator is positive.

//Returns the negation of the Fraction object
//  invoked with the method but must NOT
//  modify the actual Fraction object invoked
//  with the method.

Fraction Fraction::negate(void)const{
	long long copy = numerator;
	copy = -copy;

	return copy;
}

// Returns numerator
long long Fraction::getNum(void)const{
	return numerator;
}
// Returns denominator
long long Fraction::getDenom(void)const{
	return denominator;
}
// Outputs to standard output stream the Fraction object
//   in the format: numerator/denominator
void Fraction::display(void)const{
	cout << numerator << "/" << denominator << endl;
}

