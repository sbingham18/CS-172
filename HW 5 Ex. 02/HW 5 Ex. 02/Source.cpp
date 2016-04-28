// Scott Bingham
// CS 172 HW 5 Ex. 02 (11.3)
// 3/31/16
// Dr. Bell
#include<iostream>
using namespace std;

int* doubleCapacity(const int* list, int size); // function that returns an array that doubles the size of the parameter list

int main()
{
	int arraysize;
	cout << "Enter the size of the array: "; // prompts the user to enter the size of their desired array
	cin >> arraysize; // user inputs size of array
	int* answer = new int[arraysize];
	for (int i = 0; i < arraysize; i++) // prompts user to enter the number of numbers that are in the array
	{
		cout << "Enter a number: ";
		cin >> answer[i];
		cout << endl;
	}
	answer = doubleCapacity(answer, arraysize); // doubles the capacity of the array
	for (int i = 0; i < 2 * arraysize; i++)
	{
		cout << answer[i] << endl;
	}
	
}
int* doubleCapacity(const int* list, int size) // doubles the capacity of the array
{
	int* newDoubleCapacity = new int(2 * size); // new double capacity is twice the size of the original
	
	for (int i = 0; i < size; i++)
	{
		newDoubleCapacity[i] = list[i];
	}
	return newDoubleCapacity; // returns new double capacity array
}