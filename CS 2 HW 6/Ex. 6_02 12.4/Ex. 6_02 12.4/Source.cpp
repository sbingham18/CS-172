// Scott Bingham
// HW 6_02 Ex. 12.4
// Dr. Matthew Bell
// 4/19/16
#include<iostream>
using namespace std;
template<typename T>
bool isSorted(const T list[], int size) // is sorted function
{
	for (int i = 0; i < size; i++)
	{
		T currentMin = list[i]; // sets the current lowest variable as the initial number or string
		int currentMinIndex = i;
		for (int j = i + 1; j < size; j++)
		{
			if (currentMin > list[j]) // if the number or string in a particular spot is lower than the current lowest value
			{
				currentMin = list[j]; // reassigns the new lowest number or variable
				currentMinIndex = j;
			}
		}
		if (currentMinIndex != i) // if the current minimum index does not equal i it returns false (0)
		{
			return false;
		}
		return true; // if the current minimum index equals i it returns true (1)
	}
}
int main()
{
	int list1[] = { 1, 3, 6, 0, 5, 7, 8 }; // creates an array of ints
	cout << isSorted(list1, 7) << endl; // checks to see if it is sorted. It is not so it outputs 0
	double list2[] = { 4.6, 5.7, 8.9, 12.6, 35.7, 143.7, 867549.876 }; // creates an array of doubles
	cout << isSorted(list2, 7) << endl; // checks to see if it is sorted. It is so it outputs 1
	string list3[] = { "meh", "nah", "ok", "maybe", "eh" }; // creates an array of strings
	cout << isSorted(list3, 5) << endl; // checks to see if it is sorted. It is not so it outputs 0
	return 0;
}