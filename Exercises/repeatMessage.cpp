/*
 * lab10p1.cpp
 *
 *  Created on: Mar 4, 2020
 *      Author: raglu
 */
#include <iostream>
#include <string>
using namespace std;

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
int main()
{
	int a = getNumber();
	string b = getMessage();
	repeat(a, b);

	return 0;
}



