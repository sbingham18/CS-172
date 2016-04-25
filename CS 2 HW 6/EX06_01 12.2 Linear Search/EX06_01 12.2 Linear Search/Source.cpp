// Scott Bingham
// CS 2 HW 6
// Ex. 06_01 12.2
// 4/14/16
#include<iostream>
#include<string>
using namespace std;
template<typename T>
int linearSearch(const T list[], T key, int arraySize) // linear search function
{
	for (int i = 0; i < arraySize; i++)
	{
		if (key == list[i]) // if the number or string you are looking for exists in the array it will output where it is
		{
			return i;
		}
	}
	return -1; // if the number or string you are looking for does not exist in the array it will output -1
}
int main()
{
		int list1[] = { 1, 4, 4, 2, 5, -3, 6, 2 }; // creates an array of ints
		int i = linearSearch(list1, 4, 8); // looks for the number 4 in list 1
		cout << i << endl; // will return 1
		double list2[] = { 1.3, 4.3, 5.9, 3.4, 5.6, 7.8, 45.2, 87.8 }; // creates an array of doubles
		double j = linearSearch(list2, 5.9, 8); // looks for the number 5.9 in list 2
		cout << j << endl; // will return 2
		string list3[] = { "Yes", "No", "Maybe", "I don't know", "Maybe so", "Possibly", "Eh", "Doubt it" }; // creates an array of strings
		string x = "Eh"; // assings x to "Eh"
		int k = linearSearch(list3, x, 8); // looks for the variable x which is "Eh"
		cout << k << endl; // will return 6
		return 0;
}