/*
 * lab7.cpp
 *
 *  Created on: Feb 10, 2020
 *      Author: student
 */
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int score;
	char letter;
	bool flag = false;

cout << "Enter your score: ";
cin >> score;

if(score >= 70)
{
	letter = 'P';
			cout <<"Congrats, you passed! \n";
			flag = true;
}
else if(score >= 0)
{
	letter = 'N';
			cout << "Sorry, you failed :( \n";
			flag = true;

}
else
{
	letter = 'X';
			cout << "You entered a negative score. \n";
			flag = true;
}
if(flag)
{
	cout << "Your letter grade is: " << letter ;
}
return 0;
}



