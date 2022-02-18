#include <iostream>
#include <string>
using namespace std;

int main()
{
    // declare and initialize variables
    int numSiblings = 0;
    string fullName = "", city = "";

    // gather input from the user
    cout << "Enter your full name: ";
    getline(cin, fullName);
    cout << "Enter a how many siblings you have: ";
    cin >> numSiblings;
    cin.ignore();
    cout << "Enter your current city: ";
    getline(cin, city);
    // display that information
    cout << "Hello " << fullName << ", you have " << numSiblings
    <<" siblings, and you live in " << city
    << ". \n";
    // display the length of each string variable
    int size = city.length();
    int sizeName = fullName.length();

    cout << "Your name has " << sizeName << " characters." << endl;
    cout <<	"Your city has " << size << " characters.";

    // terminate
    return 0;
}
