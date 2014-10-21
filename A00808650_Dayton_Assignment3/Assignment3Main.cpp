/*Assign3.cpp
Name: A00808650_Dayton_Assignment3
Author: Krista Dayton A00808650
Date: 14/10/2014
program that tests math by asking questions, getting user answers and giving correct or incorrect statements until the user
enters the sentinel value
*/

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

void multiplication();//function prototype
void correctMessage();//function prototype
void incorrectMessage();//function prototype

//initialize...


//main method informs user to enter -1 to exit the program and calls multiplicaton function
int main()
{
	cout << "Enter -1 to End. " << endl;//sentinel value to exit the program
	multiplication();
}//end of main function

//function multiplication creates 2 random integers that will be multiplied together.
//The user will be prompted to answer the math problem. If correct they will recieve 
//an encouraging reply and asked a new question, if not, they will be asked to try 
//again until a correct answer or the sentinel value is entered
void multiplication()
{
	srand(static_cast<unsigned int>(time(0)));//srand() set time function
	unsigned int answer = 0;//answer input from user


	while (answer != -1){ //while the user has not entered -1 as the value, loop

		unsigned int int1 = rand() % 10;//generate a random for the first int between 0-9
		unsigned int int2 = rand() % 10;//generate a random for the second int between 0-9
		unsigned int int3 = int1 * int2;//holds the value of the equation for user to answer


		cout << "How much is " << int1 << " times " << int2 << " (Enter -1 to end)? ";//prompt user for answer
		cin >> answer;// get user input for answer

		//if the answer is correct, call the correctMessage function. Otherwise call the incorrectMessage function		
		while (answer != int3){
			if (answer == -1){
				break;
			}
			incorrectMessage();//call the incorrectMessage function
			cin >> answer;//ask for input again
		}
		if (answer == int3) {//if the answer is correct 
			correctMessage();//call the correctMessage function
		}
	}
	cout << endl;
	cout << "That's all for now, Bye." << endl;//message upon exiting the program
}//end function multiplication

// function correctMessage randomly chooses response to correct answer
void correctMessage()
{
	// generate random number between 0 and 3
	unsigned int rightAnswer = rand() % 4;
	switch (rightAnswer)
	{
	case 0:
		cout << "Very good!";
		break;
	case 1:
		cout << "Excellent!";
		break;
	case 2:
		cout << "Nice work!";
		break;
	case 3:
		cout << "Keep up the good work!";
		break;
	} // end switch
	cout << endl << endl;
} // end function correctMessage

// function incorrectMessage randomly chooses response to incorrect answer
void incorrectMessage()
{
	// generate random number between 0 and 3
	unsigned int wrongAnswer = rand() % 4;
	switch (wrongAnswer)
	{
	case 0:
		cout << "No. Please try again.";
		break;
	case 1:
		cout << "Wrong. Try once more.";
		break;
	case 2:
		cout << "Don't give up!";
		break;
	case 3:
		cout << "No. Keep trying.";
		break;
	} // end switch

	cout << endl << "? ";

} // end function incorrectMessage


