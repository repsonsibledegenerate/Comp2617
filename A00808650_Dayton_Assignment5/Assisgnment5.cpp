/*
Assignment5.cpp

Author: Krista Dayton A00808650
Date:   Nov 03 2014

Program that takes user input to fill the elements of an array
*/

#include <iostream>
#include <array>
using namespace std;

int searchArray(int[], int, int);
int duplicateValues(int[], int, int);

int main(){

	const unsigned int arraySize = 20;// set array size const variable
	int n[arraySize]; //declare array n

	unsigned int number;//holds user input
	unsigned int duplicate;
	unsigned int j = 1;//counter for number entered

	for (unsigned int i = 0; i < arraySize; ++i, ++j){
		cout << "Enter #" << j << " : ";//prompt user
		cin >> number;// get int input
		while (number < 10 || number > 100){
			cout << "The number you entered is not in the valid range of 10 to 100" << endl;
			cout << "Enter #1 : ";
			cin >> number;
		}
		unsigned int value = searchArray(n, number, arraySize);
		if (value != 1){
			cout << "The number: " << number << " is unique\n" << endl;
		}
		n[i] = number;//assign input to next element in array n
	}

	//print the elements that are duplicates
	cout << "The unique numbers are: " << endl;
	for (unsigned int a = 0; a < arraySize; ++a){
		for (unsigned int b = a + 1; b < arraySize; ++b){
			if (n[a] != n[b]){
				cout << n[a] << " ";
			}
		}
	}
}
int searchArray(int array[], int key, int sizeOfArray){
	for (int i = 0; i < sizeOfArray; i++){
		if (array[i] == key){
			return 1;
		}
	}
}
