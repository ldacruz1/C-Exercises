#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // declare and initialize variables to hold user information
    int userAge = 0, userHours = 0;
    double userPayRate = 0.0;

    // prompt the user for their age
    cout << "How old are you? " << endl;
    // write cin statement below
cin >> userAge;
    // prompt the user for their pay rate
    cout << "What is your pay rate? $" << endl;
    // write cin statement below
cin >> userPayRate;
    // prompt the user for their hours worked
    cout << "How many hours did you work this week? " << endl;
    // write cin statement below
cin >> userHours;
    // math statements will go here
	cout << "Twice your age is " << userAge * 2 << endl;
	cout << "Half your age is " << userAge / 2.0 << endl;
	cout << "Your pay for the week is " << userHours * userPayRate << endl;
	cout << "Your pay for the week with a bonus of $50 is " << userHours * userPayRate + 50 << endl;
	cout << "Your pay under an exponential model is " << pow(userPayRate, userHours) << endl;
	// terminate
    return 0;
}
