/*
 * lab11p1.cpp
 *
 *  Created on: Mar 10, 2020
 *      Author: raglu
 */
#include <iostream>
#include <string>
using namespace std;

/*******************************************************************************
* Function prototypes
*******************************************************************************/

string red();
string yellow();
string green();
void repeat();

/*******************************************************************************
* int main()
*   Starting point of the program. Displays a menu and reads in the user's
*   choice. Repeats the menu until the user picks the exit option.
*
* Input(s):
*   N/A
*
* Output:
*   An integer that signals the exit code to the operating system (OS)
*******************************************************************************/

int main()
{
    	repeat();

    // terminate
    return 0;
}

/*******************************************************************************
* void displayMenu()
*   Displays the menu options to the user.
*
* Input(s):
*   N/A
*
* Output:
*   N/A
*
           // default:
           // {
           //     cout << "Invalid selection!\n";
           //}
*******************************************************************************/

//void displayMenu()
//{
  //  cout << "1. ???\n";
   // cout << "2. ???\n";
   // cout << "3. ???\n";
    //cout << "4. Exit\n";}

/*******************************************************************************
* void red()
*   Displays red light.
*
* Input(s):
*   N/A
*
* Output:
*   RED
*******************************************************************************/

string red()
{
	string x = "RED\n";
	return x;
}

/*******************************************************************************
* void yellow()
*   Displays yellow light
*
* Input(s):
*   N/A
*
* Output:
*   YELLOW
*******************************************************************************/

string yellow()
{
	string y = "YELLOW\n";
	return y;
}

/*******************************************************************************
* void green()
*   Displays green light
*
* Input(s):
*   N/A
*
* Output:
*   GREEN
*******************************************************************************/

string green()
{
    string z = "GREEN\n";
    return z;
}

/*******************************************************************************
* void repeat
*   loop for the lights
*
* Input(s):
*   N/A
*
* Output:
*   the appropriate expression
*******************************************************************************/
void repeat()
{
	int time = 10;
	while (time > 0)
	{
		if(time > 7)
		{
			green();
		}
		else if((time <= 7) && (time > 4))
			{
			yellow();
			}
		else
		{
			red();
		}
		time--;
	}
}





