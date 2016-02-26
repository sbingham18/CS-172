#ifndef EVENNUMBERS_H
#define EVENNUMBERS_H
class EvenNumber
{
private:
	int value = 16; // sets value to 16
public:
	EvenNumber() // constructor
	{
		int evenNumber = 0;
	}
	int getValue(int value) // getValue function
	{
		return value;
	}
	int getNext(int nextValue) // next value function
	{
		nextValue = value + 2; // increments the even integer by 2 to get the next even integer
		return nextValue;
	}
	int getPrevious(int previousValue) // previous value function
	{
		previousValue = value - 2; // decrements the even integer by 2 to get the previous even integer
		return previousValue;
	}
};
#endif
