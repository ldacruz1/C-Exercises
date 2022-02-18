#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    // seed the random number generator
    srand(time(0));

    // declare and initialize a variable for setw
    int w = 8;

    // declare and initialize 3 int variables to random values
    // in the range 15 to 430 (inclusive)
    int x = 0, y = 0, z = 0;
    x = rand();
    y = rand();
    z = rand();

    // manipulate the output stream to make it aligned to the left,
    // have precision of 3, and fixed
    cout << left << setprecision(3) << fixed;

    // display their values
    cout << setw(w) << x  << "|" << setw(w) << y  << "|" << setw(w) << z << endl;

    // display the sine of each variable
    cout << sin(x) << "|" << sin(y)  << "|" << sin(z) << endl;

    // display the cosine of each variable
    cout << cos(x) << "|"  << cos(y) << "|"  << cos(z) << endl;

    // display the square root of each variable
    cout << sqrt(x) << "|"  << sqrt(y)  << "|" << sqrt(z) << endl;

    // display the log of each variable
    cout << log(x)  << "|" << log(y)  << "|" << log(z) << endl;

    // terminate
    return 0;
}
