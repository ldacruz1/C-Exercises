#include <iostream>
#include <string>
using namespace std;

int main()
{
    // declare variables for the name of the employee,
    // the hours worked in a month, and the pay rate
    string employeeName;
    int hoursPerMonth;
    double payRate;

    // initialize the above variables
    employeeName = "Georgia Sebastian";
    hoursPerMonth = 300;
    payRate = 33.2;
    // declare and initialize variables for
    // the total pay, the rent, and the utility bill
    double pay = hoursPerMonth * payRate;
    double rent = 2104.30;
    double utilityBill = 230.13;

    // declare and initialize variables for
    // the amount after paying the rent and
    // the amount after paying the utility bill
    double ammountAfterRent = pay - rent;
    double ammountAfterUtBill = ammountAfterRent - utilityBill;

    // declare and initialize variables for
    // the number of days in a month and
    // the amount that can be spent per day
    int days = 28;
    int spendPerDay = ammountAfterUtBill / days;

    // display all the information about this employee
    cout << "Hello, " << employeeName << ". Here is your budget for the month: " << endl;
    cout << "Your hours worked are: " << hoursPerMonth << endl;
	cout << "Your pay rate is: " << payRate << endl;
	cout << "Your total pay is " << pay << endl;
	cout << "Your rent is " << rent << endl;
	cout << "Your utility bill is " << utilityBill << endl;
	cout << "Your balance after rent is " << ammountAfterRent << endl;
	cout << "Your final balance for the month is " << ammountAfterUtBill << endl;
	cout << "Your monthly expense is " << spendPerDay << endl;
    // terminate
    return 0;
}
