// Scott Bingham
// HW 5 Ex. 3 (11.5) Smallest Element
// Dr. Matthew Bell
// 4/6/16

#include<iostream>
#include<algorithm>
using namespace std;

void printArray(const int* list, int size) // function that prints all the numbers in the array
{
	for (int i = 0; i < size; i++) // outputs all number in the list
	{
		cout << list[i] << " ";
		cout << endl;
	}
}

int main()
{
	int list[] = { 1, 2, 4, 5, 10, 100, 2, -22 }; // declares an array
	printArray(list, 8); // calls the printArray function
	int* min = min_element(list, list + 8); // finds smallest element
	cout << "The smallest element is: " << *min << " at index " << (min - list) << endl; // outputs which element is the smallest and what index it's at
	return 0;
}