#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    // constant variables
    const int NUM_VLGR = 5;
    const int MIN_ANI = 0;
    const int MAX_ANI = 25;
    const int PAY_RATE = 350;
    const int WIDTH = 50;
    const char FILL = '_';

    // array variable for holding the number of animals for each villager
    int animals[NUM_VLGR];
    int i = 1;
    int b = 1;
    // display a horizontal line
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;

    for (int& p : animals)
    {
    	cout << "Villager #" << i << ", enter how many animals captured:";
    	cin >> p;
        if(p < MIN_ANI)
        {
        	cout << "That's too little. Defaulting to 0. " << endl;
        	p = 0;
        }
        if(p > MAX_ANI)
        {
        	cout << "That's too much. Defaulting to 25. " << endl;
        	p = 25;
        }
        i++;
    }


    // display more horizontal lines
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;
    cout << "" << endl;
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;

    for (int& p : animals)
    {
    	cout << "Villager #" << b << " made " << PAY_RATE * p << " bells!" << endl;
    	b++;
    }

    // display a horizontal line
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;

    // terminate
    return 0;
}
