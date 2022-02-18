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
    string names[NUM_VLGR];
    int i = 1;
    // display a horizontal line
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;

    for (string& a : names)
    {
    	cout << "Villager #" << i << ", enter your name:";
    	getline(cin, a);
        i++;
    }


    // display more horizontal lines
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;
    cout << "" << endl;
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;

    for (int i = 0; i < NUM_VLGR; i++)
    {
    	cout << names[i] << ", enter how many animals captured:";
    	cin >> animals[i];
        if(animals[i] < MIN_ANI)
        {
        	cout << "That's too little. Defaulting to 0. " << endl;
        	animals[i] = 0;
        }
        if(animals[i] > MAX_ANI)
        {
        	cout << "That's too much. Defaulting to 25. " << endl;
        	animals[i] = 25;
        }
    }


    // display more horizontal lines
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;
    cout << "" << endl;
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;

    for (int i = 0; i < NUM_VLGR; i++)
    {
    	cout << names[i] << " made " << PAY_RATE * animals[i] << " bells!" << endl;
    }

    // display a horizontal line
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;

    // terminate
    return 0;
}
