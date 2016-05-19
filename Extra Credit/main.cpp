// Scott Bingham
// Extra Credit Project Gutenberg
// 4/26/16


// ***** I didn't have time to finish the code but any partial extra credit I could
// ***** get would be greatly appreciated! 


#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include "Word.h"
using namespace std;
template<typename T>
int main()
{
	vector<Word> Words;
	ifstream fin;
	fin.open("pg51854.txt");
	if (fin.fail())
	{
		cout << "Can't open file" << endl;
		return 0;
	}
	string line;
	int count = -1;
	string variable1 = " ";
	while (fin >> variable1)
	{
		count++;
	}
	cout << count;
	fin.close();
}