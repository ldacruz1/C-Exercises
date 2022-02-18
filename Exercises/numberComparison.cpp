/*
 * lab6.cpp
 *
 *  Created on: Feb 7, 2020
 *      Author: raglu
 */
#include <iostream>
#include <cmath>
using namespace std;

	int main()
{
		int number;
cout << "Please input a number: ";

cin >> number;

cin.ignore();

	if(number % 2 == 0)
	{
		cout << "Your number is positive \n ";
	}
		else
		{
			cout << "Your number is negative \n";
		}

		double number2;
cout << "Please input another number: ";
		cin >> number2;
	int	x = number * number2;
	if(abs(x) >= 100)
	{
		cout << "Your number is the Golden Key to immortality. ";
	}
	return 0;
}



