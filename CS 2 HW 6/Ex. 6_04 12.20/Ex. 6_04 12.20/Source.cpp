// Scott Bingham
// Ex. 6_04 12.20
// Dr. Matthew Bell
// 4/19/16
#include<iostream>
#include<vector>
#include<string>
#include<ctime>
using namespace std;
template<typename T>
void shuffle(vector<T>& v) // shuffle function
{
	const int size = 10;
}
int main()
{
	const int size = 10; // assigns size to 10
	vector<int> thingy(size); // creates a vector named thingy
	for (int i = 0; i < size; i++) // stores values into thingy
	{
		thingy[i] = i;
	}
	srand(time(NULL)); // random number generator
	for (int i = 0; i < size; i++)
	{
		int index = rand() % size; // randomizes the index between 0 and 9
		int variable = thingy[i]; // sets a new variable named variable to thingy at position i
		thingy[i] = thingy[index]; // sets thingy at position i to thingy at position index
		thingy[index] = variable; // sets thingy at position index to variable
	}
	for (int i = 0; i < 10; i++)
	{
		cout << thingy[i] % 10 << endl; // outputs a shuffled result
	}

}