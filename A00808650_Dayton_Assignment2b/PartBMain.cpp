//PartBMain.cpp
//program that estimates the value of the mathematical constant e given a desired accuracy

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int accuracy = 1;
	long long factorial = 1.0;
	double e = 1.0;

	cout << "Enter the number of terms to compute <5 to 13 are valid values>: ";
	cin >> accuracy;

	while (accuracy < 5 || accuracy >13){

		cout << "Enter the number of terms to compute <5 to 13 are valid values>: ";
		cin >> accuracy;
	}
	
	for (unsigned int i = 1; i <= accuracy; ++i){
		factorial *= i;
		e += 1 /static_cast<double>(factorial);
	}

	cout << "The value of e is: " << setprecision(20) << e << endl;
	}
	

