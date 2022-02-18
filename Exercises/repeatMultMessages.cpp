/*
 * lab10p2.cpp
 *
 *  Created on: Mar 4, 2020
 *      Author: raglu
 */

#include <iostream>
#include <string>
using namespace std;

int getNumber();
string getMessage();
void repeat(int, string);
void repeatTwo(int, string, string);

int main()
{
	int choice;
	cout << "Enter 1 to repeat one message or enter 2 to repeat two messages: ";
	cin >> choice;
	cin.ignore();
	switch(choice)
	{
	case (1):

	{
	int a = getNumber();
	string b = getMessage();

	repeat(a, b);

	break;
	}
	case (2):
	{
		int a = getNumber();
		string b = getMessage();
		string c = getMessage();
		repeatTwo(a,b,c);
		break;
	}
	}
	return 0;
}

int getNumber()
{
	int number = 0;
	cout << "Enter a number: " << endl;
	cin >> number;
	cin.ignore();
	return number;
}
string getMessage()
{
	string message = " ";
	cout << "Enter a message: " << endl;
	getline(cin, message);
	return message;
}
void repeat(int num, string msg)
{
	while(num > 0)
		{
		cout << msg << endl;
		num--;
		}
}
void repeatTwo(int num, string msg, string msg1)
{
	for (; num > 0; num--)
	{
		cout << msg << endl;
		cout << msg1 << endl;
	}
}
