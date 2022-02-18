#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // display the template
    cout << "Welcome to my Word Game! This is the template:\n\n";
    cout << "Today I, NAME, went to the zoo. I saw a ADJECTIVE\n";
    cout << "NOUN jumping up and down. It VERB through the\n";
    cout << "large tunnel that led to its ADJECTIVE NOUN. I\n";
    cout << "also fed NUMBER NOUN to a NOUN. At the gift shop,\n";
    cout << "I bought NUMBER NOUN that looked really\n";
    cout << "ADJECTIVE. It was a fun day!\n\n";

    // declare variables
    string name;
    string adjective;
    string noun;
    string verb;
    string adjNoun;
    string noun1;
    string noun2;
    string noun3;
    string adjective1;
    // gather the necessary input
    cout << "Please enter your name: ";
    getline(cin, name);
    cout << "Please enter an adjective: ";
    getline(cin, adjective);
    cout << "Please enter a noun: ";
    getline(cin, noun);
    cout << "Please enter a verb: ";
    getline(cin, verb);
    cout << "Please enter an adjective noun: ";
    getline(cin, adjNoun);
    cout << "Please enter a noun: ";
    getline(cin, noun1);
    cout << "Please enter a noun: ";
    getline(cin, noun2);
    cout << "Please enter a noun: ";
    getline(cin, noun3);
    cout << "Please enter an adjective: ";
    getline(cin, adjective1);
    // assign random values for the numbers in the range 5 to 23 (inclusive)
    srand(time(0));
    int minVal = 5, maxVal = 23;
    int x = minVal+ rand() % (maxVal - minVal + 1);
    int y = minVal+ rand() % (maxVal - minVal + 1);
    // display the story with the filled information
    cout << "Welcome to my Word Game! This is the template:\n\n";
    cout << "Today I, " << name << ", went to the zoo. I saw a " << adjective << "\n";
    cout << noun << " jumping up and down. It "<< verb << " through the\n";
    cout << "large tunnel that led to its " << adjNoun << " . I\n";
    cout << "also fed " << x << " " << noun1 << " to a " << noun2 << ". At the gift shop,\n";
    cout << "I bought " << y << " " << noun3 << " that looked really\n";
    cout << adjective1 << ". It was a fun day!\n\n";
    // terminate
    return 0;
}
