#include <iostream>
#include <string>
using namespace std;

/*******************************************************************************
* Function prototypes
*******************************************************************************/

void printParallel(double[], string[], const int);

/*******************************************************************************
* int main()
*   Starting point of the program. Creates two arrays. Uses loops to let the
*   user populate the arrays. Calls function print out the arrays in parallel.
*
* Input(s):
*   N/A
*
* Output:
*   An integer that signals the exit code to the operating system (OS)
*******************************************************************************/

int main() {
    // declare first array
    const int SIZE = 5;
    double firstArray[SIZE];


    // range-based `for` loop to get user input
    for(double& range_based4_loop : firstArray)
    {
    	cout << "Enter a floating-point number: " << endl;
    	cin >> range_based4_loop;
    }
    cin.ignore();
    // declare second array
    string secondArray[SIZE];

    // `for` loop to get user input
    for(int i = 0; i < SIZE; i++)
    {
    	cout << "Enter a name: ";
    	getline(cin, secondArray[i]);
    }

    // function call
    printParallel(firstArray, secondArray, SIZE);

    // terminate
    return 0;
}

void printParallel(double a[], string b[], const int c)
{
	int i = 0;
	while(c != 0)
		{
			cout << a[i] << " " << b[i] << endl;
			i++;
		}
}
