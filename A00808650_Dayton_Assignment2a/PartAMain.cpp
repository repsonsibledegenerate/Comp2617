//PartAMain.cpp
//program that calculates the factorial value of a given number


#include <iostream>
using namespace std;

int main()
{
	long long fact = 1;
	long long num = 1;

	cout << "Enter a possitive whole number less than or equal to 20: " << endl;
	cin >> num;
	while (num < 0 || num > 20){
		cout << "Enter a possitive whole number less than or equal to 20: " << endl;
		cin >> num;
	}
	for (unsigned int i = 1; i <= num; ++i){
		fact = fact * i;
	}

	cout << num << "! is " << fact << endl;
}