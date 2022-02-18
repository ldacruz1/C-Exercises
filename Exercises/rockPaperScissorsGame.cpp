/*
 * hw5.cpp
 *
 *  Created on: Mar 17, 2020
 *      Author:
 */
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;
void displayMenu();
int computerMove();
int user_choice();
void conversion();
void repeatGame();
int main()
{

	int b = user_choice();
	conversion();
	if(b == 1 && computerMove() == 3)
	{
		cout << "You win" << endl;
	}
	else if(b == 2 && computerMove() == 1 )
	{
		cout << "You win" << endl;
	}
	else if(b == 3 && computerMove() == 2)
	{
		cout << "You win" << endl;
	}
	else if(b == computerMove())
	{
		repeatGame();
	}
	else
	{
		cout << "You lose" << endl;
	}
	return 0;
}
int computerMove()
{
	int x = 1, y = 3;
	srand(time(0));
	int randomNumber = x + rand() % (y - x +1);
	return randomNumber;
}
void conversion()
{
	int a = computerMove();
	if (a == 1)
	{
		cout << "Rock" << endl;
}
	else if( a == 2)
		{
			cout << "Paper " << endl;

		}
	else
	{
		cout << "Scissors" << endl;
	}
}
int user_choice()
{
	int option = 0;

	do
		{
		displayMenu();
		cout << "Enter your choice: ";
		        cin >> option;
		switch(option)
	{
	case 1:
	{
		cout << "Rock" << endl;
		break;
	}
	case 2:
	{
		cout << "Paper" << endl;
		break;
	}
	case 3:
	{
		cout << "Scissors" << endl;
		break;
	}
	}
		}while(option < 1 || option > 3);

	return option;

}
void displayMenu()
{
    cout << setfill('~') << setw(40) << "" << endl;
    cout << "1. Rock\n";
    cout << "2. Paper\n";
    cout << "3. Scissors\n";
    cout << setfill('~') << setw(40) << "" << endl;
}
void repeatGame()
{

	int b = user_choice();
	conversion();
	if(b == 1 && computerMove() == 3)
	{
		cout << "You win" << endl;
	}
	else if(b == 2 && computerMove() == 1 )
	{
		cout << "You win" << endl;
	}
	else if(b == 3 && computerMove() == 2)
	{
		cout << "You win" << endl;
	}
	else if(b == computerMove())
	{
		repeatGame();
	}
	else
	{
		cout << "You lose" << endl;
	}
}
