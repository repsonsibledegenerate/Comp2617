/*
GCD.h
Krista Dayton A00808650
Oct 19,2014

short function template that calculates the GCD of 2 numbers
*/


// gcd finds greatest common divisor of x and y
template<typename T>
T gcd(T num1, T num2)
{
	T gcd = 1; // current greatest common divisor, 1 is minimum
	if (num1 < 0) 
	{
		num1 = -num1;
	}

	if (num2 < 0) 
	{
		num2 = -num2;
	}
	// loop from 2 to smaller of x and y
	for (int i = 1; i <= num1 && i<= num2; i++)
	{
		// if current i divides both num1 and num2
		if (num1 % i == 0 && num2 % i == 0)
		{
			gcd = i; // update greatest common divisor
		}
	} // end for

	return gcd; // return greatest common divisor found
} // end function gcd