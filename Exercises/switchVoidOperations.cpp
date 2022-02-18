#include<iostream>
#include<cctype>
#include <cstring>
#include <string>
using namespace std;
void displayMenu()
{

	cout << "1: Find if your input is alphanumeric " << endl;

	cout << "2: Find if your input is a decimal digit" << endl;

	cout << "3: Find if your input is a lower case letter " << endl;

	cout << "4: Fuse your second phrase into the first " << endl;

	cout << "5: Copy your second phrase into the first, but with a restrain " << endl;

	cout << "6: Copy your second phrase into the first " << endl;

	cout << "7: Compare sets of strings " << endl;

	cout << "8: Message is premade " << endl;

	cout << "9: Alphabetically sort your inputs " << endl;
}

int main()
{
	displayMenu();
	char c = ' ';
		const int SIZE = 20;
		char words1[SIZE] = " ";
		char words2[] = " ";
		char copyString[SIZE] = " ";
		char copyString1[] = " ";
		string goodGrade = " ";
		string badGrade = " ";
	int userChoice = 0;
	cout << "Enter your choice: " << endl;
	cin >> userChoice;
	 switch (userChoice)
	        {
	            case 1:
	            {
	            	cout << "Enter alphanumeric input: " << endl;
	            	cin >> c;
	            	if(isalnum(c)){
	            		cout << c << " is alphanumeric. ";
	            	}
	            	else
	            	{
	            		cout << c << " is not alphanumeric. ";
	            	}
	                break;
	            }

	            case 2:
	            {
	            	cout << "A decimal digit: " << endl;
	            	cin >> c;
	            	if(isdigit(c)){
	            		cout << c << " is a decimal digit. ";
	            	}
	            	else
	            	{
	            		cout << c << " is not a decimal digit. ";
	            	}

	                break;
	            }

	            case 3:
	            {
	            	cout << "A lower case letter: " << endl;
	            	cin >> c;
	            	if(islower(c)){
	            		cout << c << " is a lower case letter. ";
	            	}
	            	else
	            	{
	            		cout << c << " is not a lower case letter. ";
	            	}
	                break;
	            }

	            case 4:
	            {
	            	cout << "Enter two separate words or phrases: " << endl;
	            	cin >> words1;
	            	cin >> words2;
	            	cout << words1 << endl;
	            	cout << words2 << endl;
	            	strcat(words1, words2);
	            	cout << words1 << endl;
	                break;
	            }

	            case 5:

	            	cout << "Enter a word: " << endl;
	            	cin >> copyString;
	            	strncat(copyString1, copyString, 3);
	            	cout << copyString1 << endl;
	            	 break;
	            case 6:
	            {
	            	cout << "Enter a word: " << endl;
	            	cin >> copyString;
	            	strcpy(copyString1, copyString);
	            	cout << copyString1 << endl;
	                break;
	            }

	            case 7:
	            {
	            	cout << "Enter a string: " << endl;
	            	getline(cin, goodGrade);
	            	cout << "Sorry, forgot to ask for the other one... input it here though: " << endl;
	            	getline(cin, badGrade);
	            	cout << "Time for the magic ";
	            	if (goodGrade < badGrade)
	            	{
	            		cout << "I bet your first string is less than your second string " << endl;
	            	}
	            	else
	            	{
	            		cout << "No idea what you just did... " << endl;
	            	}
	            	break;
	            }
	            case 8:
	            {
	            	string premade = "premade ";
	            	cout << premade << endl;
	                break;
	            }
	            case 9:
	            {
	            	string planA, planB;
	            	cout << "Enter a phrase/words ";
	            	getline(cin, planA);
	            	cout << "Enter some other words";
	            	getline(cin, planB);
	            	if (planA < planB)
	            	cout << planA << endl << planB << endl;
	            	else if (planA > planB)
	            	cout << planB << endl << planA << endl;
	            	else
	            	cout << "Nice try! you entered the same stuff, silly." << endl;
	                break;
	            }
	        }
	 return 0;
}




