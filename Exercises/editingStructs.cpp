#include <iostream>
#include <string>
using namespace std;
struct panini{
	bool bread;
	string cheese;
	bool eggs;
	bool meat;
};

int main(){
	panini mypanini, userpanini;
	mypanini={
			true, "none", false, false
		};
	cout << "Enter 0 for no loaf or 1 for loaf of bread used in your panini: ";
	cin >> userpanini.bread;
	cout << "Enter what type of cheese used in your panini: ";
	cin.ignore();
	getline(cin, userpanini.cheese);
	cout << "0 for eggs or 1 for no eggs: ";
	cin >> userpanini.eggs;
	cout << "0 for meat or 1 for no meat: ";
	cin >> userpanini.meat;
    cout << "\n***** DOG REPORT *****\n";
    cout << "Bread: " << (mypanini.bread ? "loaf" : "no loaf") << endl;
    cout << "Cheese: " << mypanini.cheese<< endl;
    cout << "Eggs: " << (mypanini.eggs ? "no eggs" : "eggs") << endl;
    cout << "Meat: " << (mypanini.meat ? "no meat" : "meat") << endl;

    cout << "\n***** DOG REPORT *****\n";
    cout << "Bread: " << (userpanini.bread ? "loaf" : "no loaf") << endl;
    cout << "Cheese: " << userpanini.cheese<< endl;
    cout << "Eggs: " << (userpanini.eggs ? "no eggs" : "eggs") << endl;
    cout << "Meat: " << (userpanini.meat ? "no meat" : "meat") << endl;

	return 0;
}
