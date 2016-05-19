#ifndef WORD_H
#define WORD_H
#include<iostream>
#include<vector>
#include<string>
using namespace std;
template<typename T>
class Word
{
private:
	T type;
	T frequency;
public:
	Word();
	T getType();
	T getFrequency();
	void setFrequency();
};
#endif 
