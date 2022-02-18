#include <iostream>
#include <string>
using namespace std;

int main()
{
    // display the menu
    cout << "Simple Menu:\n";
    cout << "\t1. Greeting\n";
    cout << "\t2. Validate Range\n";
    cout << "\t3. Division\n";
    cout << "\t4. Exit\n\n";

    // get the choice from the user
    int choice = 0;
    cout << "Please enter your choice (1 - 4): ";
    cin >> choice;

    // use a switch to branch the different possible choices
    switch (choice)
    {
        // choice 1 - greeting
        case 1:
        {
            // prompt the user
            cout << "Enter your name: ";

            // get their name
            string name = "";
            cin.ignore();
            getline(cin, name);

            // display the greeting
            cout << "Hello, " << name << "! It's nice to meet you :)\n";

            // prevent fall through
            break;
        }

        // choice 2 - validate range
        case 2:
        {
        	double num1, num2, num3;
            cout << "Please enter a number: ";
            cin >> num1;
            cout << "Please enter another number: ";
            cin >> num2;
            cout << "Please enter the number to be validated: ";
            cin >> num3;
            if(num3 >= num1 && num3 <= num2)
            {
            	cout << "Your number is within the range of the first and second number inputed. ";
            }
            else
            {
            	cout << "Your number is not within the range of the first and second number inputed. ";
            }
            // prevent fall through
            break;
        }

        // choice 3 - division
        case 3:
        {
            float num1, num2;
            cout << "Please enter two numbers to be divided respectively: ";
            cin >> num1 >> num2;
            if(num2 == 0)
            {
            	cout << "You picked an invalid choice.";
            }
            else
            {
            	cout << "The division result is: " << num1 / num2;
            }

            // prevent fall through
            break;
        }

        // choice 4 - exit
        case 4:
        {
            // display message
            cout << "Now exiting my program.\n";

            // prevent fall through
            break;
        }

        // invalid choice
        default:
        {
            cout << "You picked an invalid choice.\n";
        }
    }

    // terminate
    return 0;
}
