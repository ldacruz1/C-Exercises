#include <cmath>
#include <iostream>
using namespace std;

/*******************************************************************************
* Function prototypes
*******************************************************************************/

int getUserNumber();
bool isValid(int);
void calculate(int, int, int, int&);

/*******************************************************************************
* int main()
*   Starting point of the program. Gets three valid numbers from the user.
*   Calculates and displays the result.
*
* Input(s):
*   N/A
*
* Output:
*   An integer that signals the exit code to the operating system (OS)
*******************************************************************************/

int main()
{
	int result = 0;
    int a = getUserNumber();
    isValid(a);
    int b = getUserNumber();
    isValid(b);
    int c = getUserNumber();
    isValid(c);
    calculate(a, b, c, result);
    return 0;
}

/*******************************************************************************
* int getUserNumber()
*   Gets an integer number from the user.
*
* Input(s):
*   N/A
*
* Output:
*   An integer that the user entered
*******************************************************************************/

int getUserNumber()
{
	int num = 0;
    do {
    cout << "Enter a number: " << endl;
    cin >> num;
    } while(!isValid(num));
    return num;
}

/*******************************************************************************
* bool isValid(int num)
*   Checks if `num` is valid according to the following condition:
*       num >= 25 OR num / 2 + 1 <= 11
*
* Input(s):
*   num - an integer that is to be validated
*
* Output:
*   true if `num` is valid, false otherwise
*******************************************************************************/

bool isValid(int num)
{
	return ((num >= 25) || ((num / 2) + 1 <= 11));
}

/*******************************************************************************
* void calculate(int a, int b, int c, int& result)
*   Calculates the result of the following formula:
*       5a + b^3 - c + 1
*
* Input(s):
*   a      - an integer representing the first number
*   b      - an integer representing the second number
*   c      - an integer representing the third number
*   result - a reference integer that stores the result of the calculation
*
* Output:
*   N/A
*******************************************************************************/

void calculate(int a, int b, int c, int& result)
{

	result = 5 * a + pow(b, 3) - c + 1;
	cout << result;
}
