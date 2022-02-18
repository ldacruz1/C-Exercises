#include <iostream>
#include <string>
using namespace std;

void displayMenu();

struct rectangle {
	int length;
	int width;
	int area;
	int perimeter;
};
struct triangle {
	int base;
	int height;
	int area;
};

struct diamond {
	int length;
	int area;
	int perimeter;
};


rectangle createRect();
void printRect(const rectangle&);
triangle createTri();
void printTri(const triangle&);
diamond createDiam();
void printDiam(const diamond&);

int main() {
	cout << "Welcome to my shape drawing program! \n";
	displayMenu();
    bool exitFlag = false;
    int userChoice = 0;

    do
    {
        displayMenu();

        cout << "Enter your choice: ";
        cin >> userChoice;

        if (userChoice == 4)
        {
            exitFlag = true;
            cout << "Bye bye! :)\n";
        }
        else if ((userChoice < 1) || (userChoice > 3))
        {
            cout << "Invalid entry!\n";
        }
        else
        {

        }
    } while(!exitFlag);

	return 0;
}

void printRect(const rectangle&){

}


void printTri(const triangle&){

}

void printDiam(const diamond&){

}


diamond createDiam(){
	diamond Diam;

	do{
		cout << "Enter length: \n";

		cin >> Diam.length;

	}while(Diam.length);
	return Diam;
}

triangle createTri(){
	triangle Tri;
	do
	{
		cout << "Enter height: " << endl;

	cin >> Tri.height;
	}while(Tri.height < 0);
	return Tri;
}

rectangle createRect(){
	rectangle Rect;
	do{
		cout << "Enter width: \n";
		cin >> Rect.width;
		cout << "Enter length: \n";
		cin >> Rect.length;

	}while(Rect.width < 0 || Rect.length < 0);

	return Rect;
}

void displayMenu()
{
	cout << "These are the shapes that I can draw: " << endl;

	cout << "1: Rectangle " << endl;

	cout << "2: Triangle " << endl;

	cout << "3: Diamond " << endl;

	cout << "4: Exit program " << endl;


}
