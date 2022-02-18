#include <iostream>
using namespace std;

int main()
{
    // declare and initialize variables
    char ascii = 100;
    short x = -10;
    int y = 100000;
    double z = 100.203;
    
    // output their values
    cout << "Value of ascii: " << ascii << endl;
    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << y << endl;
    cout << "Value of z: " << z << endl;

    // output converted values
    cout << "Value of ascii: " << static_cast<long>(ascii) << endl;
    cout << "Value of x: " << static_cast<int>(x) << endl;
    cout << "Value of y: " << static_cast<short>(y) << endl;
    cout << "Value of z: " << static_cast<long long>(z) << endl;
    // combined assignment statements

    cout << "Value of ascii: " << static_cast<long>(ascii =+ 10) << endl;
    cout << "Value of x: " << static_cast<int>(x -= 174) << endl;
    cout << "Value of y: " << static_cast<short>(y *= 5) << endl;
    cout << "Value of z: " << static_cast<long long>(z /= 6.54) << endl;

    // output their updated values
    cout << "Value of ascii: " << ascii << endl;
    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << y << endl;
    cout << "Value of z: " << z << endl;

    // terminate
    return 0;
}
