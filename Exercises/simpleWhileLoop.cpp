/*
 * lab8.cpp
 *
 *  Created on: Feb 12, 2020
 *      Author: student
 */
#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter a number between 5 and 10 (can be 5 or 10): ";
	cin >> num;
	while(!((num >= 5) && (num <=10)))
	{
		cout << "Your number is not within the range. Try a different number: ";
		cin >> num;
		if((num >= 5) && (num <=10))
		{
			cout << "Countdown starting! \n";
		}
	}
		while(num != 0)
	{
			cout << num << "... ";
			num--;
			if(num == 0)
			{
				cout << " \n Blast Off!!";
			}
	}

}


