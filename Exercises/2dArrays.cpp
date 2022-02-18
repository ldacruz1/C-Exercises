/*
 * hw6.cpp
 *
 *  Created on: Apr 7, 2020
 *      Author: raglu
 */
#include <iostream>
#include <ctime>
#include <random>
using namespace std;
const int rowSize = 5;
const int columnSize = 5;
void displayMenu();
void totalArray(int [][columnSize], const int);
void totalRow(int [][columnSize], int);
void averageArray(int [][columnSize], const int);
void averageRow(int [][columnSize], int);
void minArray(int [][columnSize], const int);
void minRow(int [][columnSize], int);
void maxArray(int [][columnSize], const int);
void maxRow(int [][columnSize], int);
int main(){
	//"array of arrays" = 2d array
	//create one 2d array to represent the individual arrays that are representing the individual numbers
	//so "int arr[3]" for one row, then the second "int arr2[3]"...
	//requires two sets of square brackets... arrayType arrayName[rowSize] [columnSize];
	//make the menu
	int maxVal = 150;
	int minVal = 0;
	int userChoice = 0;

	srand(time(0));
	int table[rowSize][columnSize];
	for (int row = 0; row < rowSize ; row++)
		{

	for (int col = 0; col < columnSize ; col++)
			{
			int x =  minVal + rand() % (maxVal - minVal + 1);
			table[row][col] = x;
			}
		}
			for (int row = 0; row < rowSize ; row++)
		{

	for (int col = 0; col < columnSize ; col++)
			{
			cout << table[row][col] << "\t";
			}
			cout << "\n";
		}

		displayMenu();
		cout << "Chose an option: " << endl;
		cin >> userChoice;
		 switch (userChoice)
		        {
		            case 1:
		            {
		            	totalArray(table, rowSize);
		                break;
		            }

		            case 2:
		            {

		            	totalRow(table, rowSize);
		                break;
		            }

		            case 3:
		            {
		            	averageArray(table, rowSize);
		                break;
		            }

		            case 4:
		            {
		            	averageRow(table, rowSize);
		                break;
		            }

		            case 5:
		            	 minArray(table, rowSize);
		            	 break;
		            case 6:
		            {
		            	minRow(table, rowSize);
		                break;
		            }

		            case 7:
		            {
		            	maxArray(table, rowSize);
		            	break;
		            }
		            case 8:
		            {
		            	maxRow(table, rowSize);
		                break;
		            }

		        }

}

void displayMenu()
{
//	calculate the total for the entire array
	cout << "1: Calculate the total for the entire array." << endl;
//	calculate the total for a specific row
	cout << "2: Calculate the total for a specific row. " << endl;
//	calculate the average for the entire array
	cout << "3: Calculate the average for the entire array. " << endl;
//	calculate the average for a specific row
	cout << "4: Calculate the average for a specific row. " << endl;
//	find the minimum for the entire array
	cout << "5: Find the minimum for the entire array. " << endl;
//	find the minimum for a specific row
	cout << "6: Find the minimum for a specific row. " << endl;
//	find the maximum for the entire array
	cout << "7: Find the maximum for the entire array. " << endl;
//	find the maximum for a specific row
	cout << "8: Find the maximum for a specific row. " << endl;

}

void totalArray(int t[][columnSize], const int rowSize){
	int sumArray = 0;
	for (int row = 0; row < rowSize ; row++)
		{

	for (int col = 0; col < columnSize ; col++)
			{
				sumArray += t[row][col];
			}
		}
    cout <<  "The total sum for the entire array is: " << sumArray << endl;

}
void totalRow(int t[][columnSize], int rowNumber = 0){
	int sum = 0;
	cout << "Enter the row to sum from 0 and 4: " << endl;
	cin >> rowNumber;
    while(rowNumber < 0 || rowNumber > 4)
    	{
    		cout << "Invalid entry. Choose rows between 0 and 4. \n";
    		cin >> rowNumber;
    	}
	for (int col = 0; col < columnSize ; col++)
			{
				sum += t[rowNumber][col];
			}
	cout <<  "The total sum for the row is: " << sum << endl;
}

void averageArray(int t[][columnSize], const int rowSize){
	int average = 0;
	for(int row = 0; row < rowSize; row++){
		for(int col = 0; col < columnSize; col++)
		{
			average += t[row][col] / 25;
		}
	}
	cout <<  "The average for the entire array is: " << average << endl;
}
void averageRow(int t[][columnSize], int rowNumber = 0){
	int average = 0;
	cout << "Enter the row to find the average value from 0 and 4: " << endl;
	 	cin >> rowNumber;
	     while(rowNumber < 0 || rowNumber > 4)
	     	{
	     		cout << "Invalid entry. Choose rows between 0 and 4. \n";
	     		cin >> rowNumber;
	     	}
			for(int col = 0; col < columnSize; col++)
			{
				average += t[rowNumber][col] / 25;
			}
    	 cout <<  "The average for the row is: " << average << endl;
}
void minArray(int t[][columnSize], const int rowSize){
	int minValue = t[0][0];
	for(int row = 0; row < rowSize; row++){
		for(int col = 0; col < columnSize; col++){
			if(t[row][col] < minValue){
				minValue = t[row][col];
			}
		}
	}
	cout <<  "The minimum for the entire array is: " << minValue << endl;
}
void minRow(int t[][columnSize], 	int rowNumber = 0){
	int minimumRow = t[rowNumber][0];
	cout << "Enter the row to find the minimum value from 0 and 4: " << endl;
	 	cin >> rowNumber;
	     while(rowNumber < 0 || rowNumber > 4)
	     	{
	     		cout << "Invalid entry. Choose rows between 0 and 4. \n";
	     		cin >> rowNumber;
	     	}

	 		for(int col = 0; col < columnSize; col++){
	 			if(t[rowNumber][col] < minimumRow){
	 				minimumRow = t[rowNumber][col];
	 			}
	 	}
    	cout << "The minimum for the specific row is: " <<  minimumRow << endl;
}
void maxArray(int t[][columnSize], const int rowSize){
	int maxValue = t[0][0];
	for(int row = 0; row < rowSize; row++){
		for(int col = 0; col < columnSize; col++){
			if(t[row][col] > maxValue){
				maxValue = t[row][col];
			}
		}
	}
	cout <<  "The maximum for the entire array is: " << maxValue << endl;
}
void maxRow(int t[][columnSize], 	int rowNumber = 0){
	int maximumRow = t[rowNumber][0];
	cout << "Enter the row to find the maximum value from 0 and 4: " << endl;
	 	cin >> rowNumber;
	     while(rowNumber < 0 || rowNumber > 4)
	     	{
	     		cout << "Invalid entry. Choose rows between 0 and 4. \n";
	     		cin >> rowNumber;
	     	}

	 		for(int col = 0; col < columnSize; col++){
	 			if(t[rowNumber][col] > maximumRow){
	 				maximumRow = t[rowNumber][col];
	 			}
	 	}
    	cout << "The maximum for the specific row is: " <<  maximumRow << endl;

}
