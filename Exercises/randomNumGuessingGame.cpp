/*
 * lab8-2.cpp
 *
 *  Created on: Feb 12, 2020
 *      Author: student
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	cout << "Welcome to my random number guessing game! \n";
	cout << "My program will generate a random number between 1 and 20. \n";
	cout << "You need to guess what that number is. Go! \n";
	int userGuess = 0;
	int userTries = 0;
	int minVal = 1, maxVal = 20;
	srand(time(0));
	int number = minVal + rand () % (maxVal - minVal +1);
	do
	{
		cout << "Guess the random number: ";
		cin >> userGuess;
		cin.ignore();
		userTries++;

	} while(userGuess != number);
	cout << "Congratulations, you got it right! \n" << "It took you " << userTries << " tries to guess correctly.";
}



