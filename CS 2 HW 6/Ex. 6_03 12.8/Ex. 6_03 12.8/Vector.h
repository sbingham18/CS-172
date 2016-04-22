#ifndef VECTOR_H
#define VECTOR_H
#include<iostream>
#include<vector>
#include<string>
using namespace std;
template<typename T>
class vector
{
private:
	int size;
public:
	vector<T>();
	vector<T>(int size);
	vector<T>(int size, T default);
	void push_back(T element);
	void pop_back();
	unsigned const size();
	T const at(int index);
	bool const empty();
	void clear();
	void swap(vector v2);
};
#endif

