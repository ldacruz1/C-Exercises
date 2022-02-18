/*
 * hw4.cpp
 *
 *  Created on: Feb 18, 2020
 *      Author: raglu
 */
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()

{
	int option;
	cout << "Welcome to my simple area calculator! \n" << "1. Calculate the area of a circle \n"
			"2. Calculate the area of a rectangle \n 3. Calculate the area of a triangle\n"
			"4. Exit the program \n" <<"Chose an option: \n";
	cin >> option;
	switch(option)
	{
	case 1:
	{
		double r = 0;
		double pi = 3.14159;
		cout << "Enter the radius: ";
		cin >> r;

	    while(r <= 0)
		{
			cout << "Error, input cannot be zero or negative!";
		    return 0;

		}
		cout << "The area of the circle is: " << pow(r,2)*pi;

		break;
	}
	case 2:
	{
	    double l, w;
		cout << "Enter the length and width: ";
	cin >> l;
	cin >> w;
	    while(l <= 0 || w <= 0)
		{
			cout << "Error, input cannot be zero or negative!";
		    return 0;

		}
		cout << "The area of the rectangle is: " << l * w;
		break;
	}

	case 3:
	{
	    double b, h;
		cout << "Enter the base and height: ";
		cin >> b;
		cin >> h;

	    while(b <= 0 || h <= 0)
		{
			cout << "Error, input cannot be zero or negative!";
		    return 0;

		}
		cout << "The area of the triangle is: " << (b * h) * (0.5);
		break;
	}
	case 4:
	{
		cout << "Thank you for using my program! ";
	}
	}
    if(option < 1 && option > 5)
{
    cout << "Error, invalid choice!";
}
	return 0;
}

