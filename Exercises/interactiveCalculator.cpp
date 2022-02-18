/*
 * lab11p2.cpp
 *
 *  Created on: Mar 10, 2020
 *      Author: raglu
 */
/*
 * lab11pw.cpp
 *
 *  Created on: Mar 9, 2020
 *      Author: student
 */
#include <iomanip>
#include <iostream>
using namespace std;

/*******************************************************************************
* Function prototypes
*******************************************************************************/

int calculator(int, int, int);
void displayMenu();

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
    cout << "Welcome to my calculator program!\n";
    cout << "I will keep track of how many times you use it.\n\n";

    int userChoice = 0, num1 = 0, num2 = 0, result = 0;
    bool exitFlag = false;

    do
    {
        displayMenu();

        cout << "Enter your choice: ";
        cin >> userChoice;

        if (userChoice == 6)
        {
            exitFlag = true;
            cout << "Bye bye! :)\n";
        }
        else if ((userChoice < 1) || (userChoice > 5))
        {
            cout << "Invalid entry!\n";
        }
        else
        {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
           result = calculator(userChoice, num1, num2);
            cout << "Result: " << result << endl;
        }
    } while(!exitFlag);

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
*******************************************************************************/

void displayMenu()
{
    cout << setfill('~') << setw(40) << "" << endl;
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Modulus\n";
    cout << "6. Exit\n";
    cout << setfill('~') << setw(40) << "" << endl;
}

/*******************************************************************************
* int calculator(int operation, int x, int y)
*   Performs an operation on the two inputs `x` and `y`. The operation depends
*   on the value of `operation`:
*       1 --> addition
*       2 --> subtraction
*       3 --> multiplication
*       4 --> division
*       5 --> modulus
*   Keeps track of how many times the function has been called by using a static
*   variable. Updates and displays that value each time. Ensures division and
*   modulus by 0 does not occur.
*
* Input(s):
*   operation - an integer that determines what kind of calculation to perform
*   x         - the first integer
*   y         - the second integer
*
* Output:
*   An integer that is the result of the requested operation on `x` and `y`
*   (division and modulus by 0 will return 0 as the result)
*******************************************************************************/

int calculator(int operation, int x, int y)
{
	static int counter = 1;
    switch (operation)
        {
            case 1:
            {
                cout <<  "Addition of the two numbers is: " << x + y << endl;
                break;
            }

            case 2:
            {
                cout <<  "Subtraction of the two numbers is: " << x - y << endl;
                break;
            }

            case 3:
            {
                cout <<  "Multiplication of the two numbers is: " << x * y << endl;
                break;
            }

            case 4:
            {
                if(y == 0)
                	{
                		cout << "Invalid entry. \n";
                		return 0;
                	}
                else
                	cout << "Division of the two numbers is: " <<  x / y << endl;
                break;
            }

            case 5:
            {
               if(y == 0)
               {
            	   cout << "Invalid entry. \n";
            	   return 0;
               }
               else
               {
            	   cout << "Module of the two numbers is: " << x % y << endl;
               }
            	break;
            }
        }
    cout << "You have used the Static Calculator " << counter++ << " times." << endl;
 return operation;

}







