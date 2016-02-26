#include<iostream>
#include<iomanip>
#include"EvenNumber.h"
using namespace std;
int main()
{
	int value = 16;
	EvenNumber E1; // creates a variable E1 using the EvenNumber class
	int nextValue = value + 2; // next value is 2 more than original value
	int previousValue = value - 2; // previous value is 2 less that original value
	cout << "The current even number is: " << E1.getValue(value) << endl; // outputs current even value
	cout << "The next even number is: " << E1.getNext(nextValue) << endl; // outputs next even value
	cout << "The previous even number is: " << E1.getPrevious(previousValue) << endl; // outputs previous even value
	return 0;
}