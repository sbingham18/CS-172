// Scott Bingham
// CS 172 HW 5 Ex. 01 (11.1)
// 3/31/16
// Dr. Bell
#include<iostream>
using namespace std;

int main()
{
	int userInput;
	cout << "Enter an array size: "; // prompts user to enter size of array
	cin >> userInput; // user enters size of array
	const int arraySize = userInput; // sets the size of the array to the user input
	int *array = new int[arraySize]; // dynamically allocate array
	double sum = 0;
	for (int i = 0; i < arraySize; i++) // prompts user to enter number for each spot in the array
	{
		cout << "Enter a number: " << endl;
		cin >> array[i];
		sum += array[i]; // adds all the numbers in the array
	}
	double average = sum / arraySize; // computes average by dividing sum of numbers by number of numbers
	int count = 0;
	for (int x = 0; x < arraySize; x++) 
	{
		if (array[x] > average) // checks to see if number is greater than average
		{
			count++; // If number is greater than average it increments the count variable
		}
	}
	cout << "Average is: " << average << endl; // outputs average
	cout << "Number of numbers above average: " << count << endl; // outputs number of numbers above average
	return 0;
}