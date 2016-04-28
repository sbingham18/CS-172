// Scott Bingham
// HW 6 Ex. 6_03 12.8
// Dr. Matthew Bell
// 4/19/16
#include<iostream>
#include<vector>
#include"vector.h"
#include<string>
using namespace std;
int main()
{
	vector<int> intVector;
	for (int i = 0; i < 10; i++) // store numbers 1 - 10 to the vector
	{
		intVector.push_back(i + 1);
	}
	cout << "Numbers in the vector are: "; // displays the numbers is the vector
	for (int i = 0; i < intVector.size(); i++)
	{
		cout << intVector[i] << " ";
	}
	vector<string> stringVector;
	// stores strings into the vector
	stringVector.push_back("Dallas");
	stringVector.push_back("Houston");
	stringVector.push_back("Austin");
	stringVector.push_back("Norman");
	cout << "\nStrings in the string vector: "; // displays the string in the vector
	for (int i = 0; i < stringVector.size(); i++)
	{
		cout << stringVector[i] << " ";
	}
	stringVector.pop_back(); // removes the last element
	vector<string> v2;
	v2.swap(stringVector); // swaps v2 and stringVector
	v2[0] = "Atlanta";
	cout << "\nStrings in the vector v2: "; // redisplays the string in the vector
	for (int i = 0; i < v2.size(); i++)
	{
		cout << v2.at(i) << " ";
	}
	return 0;
}