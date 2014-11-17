//PartCMain.cpp
//estimates the value of e^x of the given x
//calculates each term and add the value to total
//counts the number of terms computed


#include <iostream>
#include <iomanip>
using namespace std;


	int main()
	{
		double x; // value of x in e^x
		double term = 1.0;  // First term in the series
		double total = 0.0;  // This is the sum of the series
		int i;

		cout << "Input a value of x between 1 and 709: ";
		cin >> x;

		//check that x is a value between 1 and 709. If not ask again until correct number is inputted
		while (x < 1 || x > 709){
			cout << "Input a value of x between 1 and 709: ";
			cin >> x;
		}
		//calculate each term, add to the accumlative total and count the number of iterations
		for (i = 1; term > 1.0e-20; i++){
			total = total + term;   
			term = term * x / i; 
		}

		cout << "e raised to the power " << x << " is " << setprecision(20) << total << endl;
		cout << "The number of terms computed is: " << i << endl;

		return 0;
	}